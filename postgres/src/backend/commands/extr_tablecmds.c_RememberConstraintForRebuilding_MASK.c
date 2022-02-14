
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int changedConstraintDefs; int changedConstraintOids; } ;
typedef int Oid ;
typedef TYPE_1__ AlteredTableInfo ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(Oid VAR_0, AlteredTableInfo *VAR_1)
{







 if (!FUNC_2(VAR_1->changedConstraintOids, VAR_0))
 {

  char *VAR_2 = FUNC_3(VAR_0);

  VAR_1->changedConstraintOids = FUNC_1(VAR_1->changedConstraintOids,
             VAR_0);
  VAR_1->changedConstraintDefs = FUNC_0(VAR_1->changedConstraintDefs,
            VAR_2);
 }
}
