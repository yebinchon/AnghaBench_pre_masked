
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_8__ {int output_flags; int (* video_render ) (scalar_t__,int *) ;} ;
struct TYPE_9__ {scalar_t__ num; } ;
struct TYPE_10__ {TYPE_1__ context; TYPE_2__ info; TYPE_3__ filters; int filter_parent; } ;
typedef TYPE_4__ obs_source_t ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static inline void FUNC_3(obs_source_t *VAR_1)
{
 uint32_t VAR_2 = VAR_1->info.output_flags;
 bool VAR_3 = (VAR_2 & VAR_0) != 0;
 bool VAR_4 = !VAR_1->filter_parent &&
         VAR_1->filters.num == 0 && !VAR_3;

 if (VAR_4)
  FUNC_1(VAR_1);
 else if (VAR_1->context.data)
  VAR_1->info.video_render(VAR_1->context.data,
       VAR_3 ? ((void*)0) : FUNC_0());
}
