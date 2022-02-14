
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WalSndState ;
struct TYPE_3__ {scalar_t__ state; int mutex; } ;
typedef TYPE_1__ WalSnd ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void
FUNC_3(WalSndState VAR_2)
{
 WalSnd *VAR_3 = VAR_0;

 FUNC_0(VAR_1);

 if (VAR_3->state == VAR_2)
  return;

 FUNC_1(&VAR_3->mutex);
 VAR_3->state = VAR_2;
 FUNC_2(&VAR_3->mutex);
}
