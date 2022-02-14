
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct obs_source_frame {int prev_frame; } ;
struct async_frame {int used; struct obs_source_frame* frame; } ;
struct TYPE_4__ {size_t num; struct async_frame* array; } ;
struct TYPE_5__ {TYPE_1__ async_cache; } ;
typedef TYPE_2__ obs_source_t ;



void FUNC_0(obs_source_t *VAR_0, struct obs_source_frame *VAR_1)
{
 if (VAR_1)
  VAR_1->prev_frame = 0;

 for (size_t VAR_2 = 0; VAR_2 < VAR_0->async_cache.num; VAR_2++) {
  struct async_frame *VAR_3 = &VAR_0->async_cache.array[VAR_2];

  if (VAR_3->frame == VAR_1) {
   VAR_3->used = 0;
   break;
  }
 }
}
