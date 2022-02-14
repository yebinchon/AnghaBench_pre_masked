
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int updstatus; int lockstatus; } ;
typedef int MultiXactStatus ;
typedef size_t LockTupleMode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static MultiXactStatus
FUNC_1(LockTupleMode VAR_2, bool VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_4 = VAR_1[VAR_2].updstatus;
 else
  VAR_4 = VAR_1[VAR_2].lockstatus;

 if (VAR_4 == -1)
  FUNC_0(VAR_0, "invalid lock tuple mode %d/%s", VAR_2,
    VAR_3 ? "true" : "false");

 return (MultiXactStatus) VAR_4;
}
