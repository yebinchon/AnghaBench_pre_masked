
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attnotnull; } ;
typedef int Relation ;
typedef int LOCKMODE ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int AlteredTableInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void
FUNC_11(AlteredTableInfo *VAR_3, Relation VAR_4,
       const char *VAR_5, LOCKMODE VAR_6)
{
 HeapTuple VAR_7;

 VAR_7 = FUNC_5(FUNC_3(VAR_4), VAR_5);

 if (!FUNC_1(VAR_7))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_10("column \"%s\" of relation \"%s\" does not exist",
      VAR_5, FUNC_2(VAR_4))));

 if (!((Form_pg_attribute) FUNC_0(VAR_7))->attnotnull)
  FUNC_6(VAR_2,
    (FUNC_7(VAR_0),
     FUNC_10("constraint must be added to child tables too"),
     FUNC_8("Column \"%s\" of relation \"%s\" is not already NOT NULL.",
         VAR_5, FUNC_2(VAR_4)),
     FUNC_9("Do not specify the ONLY keyword.")));

 FUNC_4(VAR_7);
}
