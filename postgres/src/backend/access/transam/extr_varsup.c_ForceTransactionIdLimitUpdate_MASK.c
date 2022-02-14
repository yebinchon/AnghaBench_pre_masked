
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int oldestXidDB; int oldestXid; int xidVacLimit; int nextFullXid; } ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;

bool
FUNC_8(void)
{
 TransactionId VAR_4;
 TransactionId VAR_5;
 TransactionId VAR_6;
 Oid VAR_7;


 FUNC_0(VAR_3, VAR_1);
 VAR_4 = FUNC_7(VAR_2->nextFullXid);
 VAR_5 = VAR_2->xidVacLimit;
 VAR_6 = VAR_2->oldestXid;
 VAR_7 = VAR_2->oldestXidDB;
 FUNC_1(VAR_3);

 if (!FUNC_5(VAR_6))
  return 1;
 if (!FUNC_6(VAR_5))
  return 1;
 if (FUNC_4(VAR_4, VAR_5))
  return 1;
 if (!FUNC_3(VAR_0, FUNC_2(VAR_7)))
  return 1;
 return 0;
}
