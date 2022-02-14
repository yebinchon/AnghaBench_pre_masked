
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oldowner; int oldcontext; } ;
typedef TYPE_1__ PLySubtransactionData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(int VAR_4)
{
 FUNC_0(VAR_4 >= 0);

 while (FUNC_7(VAR_3) > VAR_4)
 {
  PLySubtransactionData *VAR_5;

  FUNC_0(VAR_3 != VAR_1);

  FUNC_3(VAR_2,
    (FUNC_4("forcibly aborting a subtransaction that has not been exited")));

  FUNC_2();

  VAR_5 = (PLySubtransactionData *) FUNC_5(VAR_3);
  VAR_3 = FUNC_6(VAR_3);

  FUNC_1(VAR_5->oldcontext);
  VAR_0 = VAR_5->oldowner;
  FUNC_8(VAR_5);
 }
}
