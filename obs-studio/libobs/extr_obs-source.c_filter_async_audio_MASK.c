
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {struct obs_audio_data* (* filter_audio ) (scalar_t__,struct obs_audio_data*) ;} ;
struct obs_source {TYPE_2__ context; TYPE_1__ info; int enabled; } ;
struct obs_audio_data {int dummy; } ;
struct TYPE_8__ {size_t num; struct obs_source** array; } ;
struct TYPE_9__ {TYPE_3__ filters; } ;
typedef TYPE_4__ obs_source_t ;


 struct obs_audio_data* FUNC_0 (scalar_t__,struct obs_audio_data*) ;

__attribute__((used)) static inline struct obs_audio_data *
FUNC_1(obs_source_t *VAR_0, struct obs_audio_data *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = VAR_0->filters.num; VAR_2 > 0; VAR_2--) {
  struct obs_source *VAR_3 = VAR_0->filters.array[VAR_2 - 1];

  if (!VAR_3->enabled)
   continue;

  if (VAR_3->context.data && VAR_3->info.filter_audio) {
   VAR_1 = VAR_3->info.filter_audio(VAR_3->context.data,
             VAR_1);
   if (!VAR_1)
    return ((void*)0);
  }
 }

 return VAR_1;
}
