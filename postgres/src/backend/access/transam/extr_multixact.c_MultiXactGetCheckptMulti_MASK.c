
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oldestMultiXactDB; int oldestMultiXactId; int nextOffset; int nextMXact; } ;
typedef int Oid ;
typedef int MultiXactOffset ;
typedef int MultiXactId ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;

void
FUNC_3(bool VAR_4,
       MultiXactId *VAR_5,
       MultiXactOffset *VAR_6,
       MultiXactId *VAR_7,
       Oid *VAR_8)
{
 FUNC_0(VAR_2, VAR_1);
 *VAR_5 = VAR_3->nextMXact;
 *VAR_6 = VAR_3->nextOffset;
 *VAR_7 = VAR_3->oldestMultiXactId;
 *VAR_8 = VAR_3->oldestMultiXactDB;
 FUNC_1(VAR_2);

 FUNC_2(VAR_0,
    "MultiXact: checkpoint is nextMulti %u, nextOffset %u, oldestMulti %u in DB %u",
    *VAR_5, *VAR_6, *VAR_7, *VAR_8);
}
