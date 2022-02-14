
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kill; int thread; int sem; int mutex; scalar_t__ thread_valid; } ;
typedef TYPE_1__ mp_media_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(mp_media_t *VAR_0)
{
 if (VAR_0->thread_valid) {
  FUNC_2(&VAR_0->mutex);
  VAR_0->kill = 1;
  FUNC_3(&VAR_0->mutex);
  FUNC_0(VAR_0->sem);

  FUNC_1(VAR_0->thread, ((void*)0));
 }
}
