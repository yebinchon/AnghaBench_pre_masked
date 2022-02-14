
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int raw_active; int gpu_refs; } ;
typedef TYPE_1__ video_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(video_t *VAR_0)
{
 if (FUNC_0(&VAR_0->gpu_refs) == 1 &&
     !FUNC_1(&VAR_0->raw_active)) {
  FUNC_2(VAR_0);
 }
}
