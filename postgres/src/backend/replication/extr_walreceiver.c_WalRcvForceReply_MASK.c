
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int force_reply; int mutex; int * latch; } ;
typedef int Latch ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

void
FUNC_3(void)
{
 Latch *VAR_1;

 VAR_0->force_reply = 1;

 FUNC_1(&VAR_0->mutex);
 VAR_1 = VAR_0->latch;
 FUNC_2(&VAR_0->mutex);
 if (VAR_1)
  FUNC_0(VAR_1);
}
