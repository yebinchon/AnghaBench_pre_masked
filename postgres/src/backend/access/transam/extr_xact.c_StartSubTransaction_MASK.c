
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* TransactionState ;
struct TYPE_5__ {scalar_t__ state; TYPE_1__* parent; int subTransactionId; } ;
struct TYPE_4__ {int subTransactionId; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
 TransactionState VAR_6 = VAR_0;

 if (VAR_6->state != VAR_2)
  FUNC_6(VAR_5, "StartSubTransaction while in %s state",
    FUNC_5(VAR_6->state));

 VAR_6->state = VAR_4;






 FUNC_1();
 FUNC_2();
 FUNC_0();

 VAR_6->state = VAR_3;




 FUNC_3(VAR_1, VAR_6->subTransactionId,
       VAR_6->parent->subTransactionId);

 FUNC_4("StartSubTransaction");
}
