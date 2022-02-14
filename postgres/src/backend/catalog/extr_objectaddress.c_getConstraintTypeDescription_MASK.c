
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; int contypid; int conrelid; } ;
typedef int StringInfo ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(StringInfo VAR_4, Oid VAR_5)
{
 Relation VAR_6;
 HeapTuple VAR_7;
 Form_pg_constraint VAR_8;

 VAR_6 = FUNC_7(VAR_2, VAR_0);
 VAR_7 = FUNC_5(VAR_6, VAR_1,
            VAR_5);
 if (!FUNC_1(VAR_7))
  FUNC_4(VAR_3, "cache lookup failed for constraint %u", VAR_5);

 VAR_8 = (Form_pg_constraint) FUNC_0(VAR_7);

 if (FUNC_2(VAR_8->conrelid))
  FUNC_3(VAR_4, "table constraint");
 else if (FUNC_2(VAR_8->contypid))
  FUNC_3(VAR_4, "domain constraint");
 else
  FUNC_4(VAR_3, "invalid constraint %u", VAR_8->oid);

 FUNC_6(VAR_6, VAR_0);
}
