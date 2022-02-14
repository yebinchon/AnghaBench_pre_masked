
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int * latch; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_4__ {TYPE_1__* walsnds; } ;
typedef int Latch ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

void
FUNC_3(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  Latch *VAR_3;
  WalSnd *VAR_4 = &VAR_0->walsnds[VAR_2];





  FUNC_1(&VAR_4->mutex);
  VAR_3 = VAR_4->latch;
  FUNC_2(&VAR_4->mutex);

  if (VAR_3 != ((void*)0))
   FUNC_0(VAR_3);
 }
}
