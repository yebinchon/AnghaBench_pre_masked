
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t cache_size; } ;
struct TYPE_9__ {size_t num; int * array; } ;
struct TYPE_8__ {int input_mutex; int data_mutex; int update_semaphore; int * cache; TYPE_1__ info; TYPE_5__ inputs; } ;
typedef TYPE_2__ video_t ;
struct video_frame {int dummy; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct video_frame*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(video_t *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_6(VAR_0);

 for (size_t VAR_1 = 0; VAR_1 < VAR_0->inputs.num; VAR_1++)
  FUNC_5(&VAR_0->inputs.array[VAR_1]);
 FUNC_1(VAR_0->inputs);

 for (size_t VAR_2 = 0; VAR_2 < VAR_0->info.cache_size; VAR_2++)
  FUNC_4((struct video_frame *)&VAR_0->cache[VAR_2]);

 FUNC_2(VAR_0->update_semaphore);
 FUNC_3(&VAR_0->data_mutex);
 FUNC_3(&VAR_0->input_mutex);
 FUNC_0(VAR_0);
}
