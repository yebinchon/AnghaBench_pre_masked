
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; scalar_t__ pid; int * latch; } ;
typedef TYPE_1__ WalSnd ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, Datum VAR_2)
{
 WalSnd *VAR_3 = VAR_0;

 FUNC_0(VAR_3 != ((void*)0));

 VAR_0 = ((void*)0);

 FUNC_1(&VAR_3->mutex);

 VAR_3->latch = ((void*)0);

 VAR_3->pid = 0;
 FUNC_2(&VAR_3->mutex);
}
