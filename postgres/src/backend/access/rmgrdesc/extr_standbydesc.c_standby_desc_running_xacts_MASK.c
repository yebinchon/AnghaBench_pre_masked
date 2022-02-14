
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xcnt; int* xids; scalar_t__ subxid_overflow; int oldestRunningXid; int latestCompletedXid; int nextXid; } ;
typedef TYPE_1__ xl_running_xacts ;
typedef int StringInfo ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(StringInfo VAR_0, xl_running_xacts *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, "nextXid %u latestCompletedXid %u oldestRunningXid %u",
      VAR_1->nextXid,
      VAR_1->latestCompletedXid,
      VAR_1->oldestRunningXid);
 if (VAR_1->xcnt > 0)
 {
  FUNC_0(VAR_0, "; %d xacts:", VAR_1->xcnt);
  for (VAR_2 = 0; VAR_2 < VAR_1->xcnt; VAR_2++)
   FUNC_0(VAR_0, " %u", VAR_1->xids[VAR_2]);
 }

 if (VAR_1->subxid_overflow)
  FUNC_1(VAR_0, "; subxid ovf");
}
