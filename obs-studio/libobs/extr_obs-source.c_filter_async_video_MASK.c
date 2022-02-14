
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct obs_source_frame {int dummy; } ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {struct obs_source_frame* (* filter_video ) (scalar_t__,struct obs_source_frame*) ;} ;
struct obs_source {TYPE_2__ context; TYPE_1__ info; int enabled; } ;
struct TYPE_8__ {size_t num; struct obs_source** array; } ;
struct TYPE_9__ {int filter_mutex; TYPE_3__ filters; } ;
typedef TYPE_4__ obs_source_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct obs_source_frame* FUNC_2 (scalar_t__,struct obs_source_frame*) ;

struct obs_source_frame *FUNC_3(obs_source_t *VAR_0,
         struct obs_source_frame *VAR_1)
{
 size_t VAR_2;

 FUNC_0(&VAR_0->filter_mutex);

 for (VAR_2 = VAR_0->filters.num; VAR_2 > 0; VAR_2--) {
  struct obs_source *VAR_3 = VAR_0->filters.array[VAR_2 - 1];

  if (!VAR_3->enabled)
   continue;

  if (VAR_3->context.data && VAR_3->info.filter_video) {
   VAR_1 = VAR_3->info.filter_video(VAR_3->context.data,
             VAR_1);
   if (!VAR_1)
    break;
  }
 }

 FUNC_1(&VAR_0->filter_mutex);

 return VAR_1;
}
