
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct obs_source {int * prev_async_frame; int * cur_async_frame; TYPE_2__ async_frames; TYPE_2__ async_cache; } ;
struct TYPE_3__ {int frame; } ;


 int FUNC_0 (TYPE_2__,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct obs_source *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->async_cache.num; VAR_1++)
  FUNC_1(VAR_0->async_cache.array[VAR_1].frame);

 FUNC_0(VAR_0->async_cache, 0);
 FUNC_0(VAR_0->async_frames, 0);
 VAR_0->cur_async_frame = ((void*)0);
 VAR_0->prev_async_frame = ((void*)0);
}
