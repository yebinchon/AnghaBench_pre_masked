
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ num; scalar_t__ array; } ;
struct TYPE_6__ {int input_mutex; int gpu_refs; int raw_active; TYPE_5__ inputs; } ;
typedef TYPE_1__ video_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_5__,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (TYPE_1__*,void (*) (void*,struct video_data*),void*) ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8(video_t *VAR_1,
        void (*VAR_2)(void *VAR_3,
           struct video_data *VAR_4),
        void *VAR_5)
{
 if (!VAR_1 || !VAR_2)
  return;

 FUNC_4(&VAR_1->input_mutex);

 size_t VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_5);
 if (VAR_6 != VAR_0) {
  FUNC_7(VAR_1->inputs.array + VAR_6);
  FUNC_0(VAR_1->inputs, VAR_6);

  if (VAR_1->inputs.num == 0) {
   FUNC_3(&VAR_1->raw_active, 0);
   if (!FUNC_2(&VAR_1->gpu_refs)) {
    FUNC_1(VAR_1);
   }
  }
 }

 FUNC_5(&VAR_1->input_mutex);
}
