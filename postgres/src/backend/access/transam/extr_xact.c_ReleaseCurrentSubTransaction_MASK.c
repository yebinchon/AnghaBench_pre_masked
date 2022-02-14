
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {scalar_t__ blockState; scalar_t__ state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

void
FUNC_9(void)
{
 TransactionState VAR_6 = VAR_1;
 if (FUNC_3())
  FUNC_6(VAR_3,
    (FUNC_7(VAR_2),
     FUNC_8("cannot commit subtransactions during a parallel operation")));

 if (VAR_6->blockState != VAR_4)
  FUNC_5(VAR_3, "ReleaseCurrentSubTransaction: unexpected state %s",
    FUNC_1(VAR_6->blockState));
 FUNC_0(VAR_6->state == VAR_5);
 FUNC_4(VAR_0);
 FUNC_2();
 VAR_6 = VAR_1;
 FUNC_0(VAR_6->state == VAR_5);
}
