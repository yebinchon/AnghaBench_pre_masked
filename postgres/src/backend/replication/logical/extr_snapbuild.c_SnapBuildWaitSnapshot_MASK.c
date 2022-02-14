
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xcnt; int * xids; } ;
typedef TYPE_1__ xl_running_xacts ;
typedef int TransactionId ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,int *,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(xl_running_xacts *VAR_2, TransactionId VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->xcnt; VAR_4++)
 {
  TransactionId VAR_5 = VAR_2->xids[VAR_4];






  if (FUNC_3(VAR_5))
   FUNC_5(VAR_0, "waiting for ourselves");

  if (FUNC_2(VAR_5, VAR_3))
   continue;

  FUNC_4(VAR_5, ((void*)0), ((void*)0), VAR_1);
 }







 if (!FUNC_1())
 {
  FUNC_0();
 }
}
