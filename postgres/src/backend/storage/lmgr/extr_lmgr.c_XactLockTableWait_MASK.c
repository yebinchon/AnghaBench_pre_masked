
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ oper; int ctid; int rel; } ;
typedef TYPE_1__ XactLockTableWaitInfo ;
typedef scalar_t__ XLTW_Oper ;
typedef int TransactionId ;
struct TYPE_5__ {struct TYPE_5__* previous; TYPE_1__* arg; int callback; } ;
typedef int Relation ;
typedef int LOCKTAG ;
typedef int ItemPointer ;
typedef TYPE_2__ ErrorContextCallback ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_11 (long) ;

void
FUNC_12(TransactionId VAR_4, Relation VAR_5, ItemPointer VAR_6,
      XLTW_Oper VAR_7)
{
 LOCKTAG VAR_8;
 XactLockTableWaitInfo VAR_9;
 ErrorContextCallback VAR_10;
 bool VAR_11 = 1;





 if (VAR_7 != VAR_1)
 {
  FUNC_0(FUNC_5(VAR_5));
  FUNC_0(FUNC_2(VAR_6));

  VAR_9.rel = VAR_5;
  VAR_9.ctid = VAR_6;
  VAR_9.oper = VAR_7;

  VAR_10.callback = VAR_2;
  VAR_10.arg = &VAR_9;
  VAR_10.previous = VAR_3;
  VAR_3 = &VAR_10;
 }

 for (;;)
 {
  FUNC_0(FUNC_10(VAR_4));
  FUNC_0(!FUNC_8(VAR_4, FUNC_1()));

  FUNC_6(VAR_8, VAR_4);

  (void) FUNC_3(&VAR_8, VAR_0, 0, 0);

  FUNC_4(&VAR_8, VAR_0, 0);

  if (!FUNC_9(VAR_4))
   break;
  if (!VAR_11)
   FUNC_11(1000L);
  VAR_11 = 0;
  VAR_4 = FUNC_7(VAR_4);
 }

 if (VAR_7 != VAR_1)
  VAR_3 = VAR_10.previous;
}
