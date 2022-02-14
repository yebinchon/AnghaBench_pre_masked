
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int collnamespace; int collname; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_collation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ,char*,int ) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(StringInfo VAR_3, Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_collation VAR_6;
 char *VAR_7;
 char VAR_8[VAR_2];


 if (!FUNC_4(VAR_4))
  return;

 VAR_5 = FUNC_6(VAR_0, FUNC_3(VAR_4));
 if (!FUNC_1(VAR_5))
  FUNC_8(VAR_1, "cache lookup failed for collation %u", VAR_4);
 VAR_6 = (Form_pg_collation) FUNC_0(VAR_5);
 VAR_7 = FUNC_2(VAR_6->collname);





 FUNC_10(VAR_8, FUNC_9(VAR_6->collnamespace));
 FUNC_7(VAR_3, " COLLATE %s", VAR_8);
 FUNC_10(VAR_8, VAR_7);
 FUNC_7(VAR_3, ".%s", VAR_8);

 FUNC_5(VAR_5);
}
