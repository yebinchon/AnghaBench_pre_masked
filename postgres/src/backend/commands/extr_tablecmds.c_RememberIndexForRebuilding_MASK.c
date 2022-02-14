
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int changedIndexDefs; int changedIndexOids; } ;
typedef int Oid ;
typedef TYPE_1__ AlteredTableInfo ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(Oid VAR_0, AlteredTableInfo *VAR_1)
{







 if (!FUNC_5(VAR_1->changedIndexOids, VAR_0))
 {
  Oid VAR_2 = FUNC_2(VAR_0);

  if (FUNC_0(VAR_2))
  {
   FUNC_1(VAR_2, VAR_1);
  }
  else
  {

   char *VAR_3 = FUNC_6(VAR_0);

   VAR_1->changedIndexOids = FUNC_4(VAR_1->changedIndexOids,
            VAR_0);
   VAR_1->changedIndexDefs = FUNC_3(VAR_1->changedIndexDefs,
           VAR_3);
  }
 }
}
