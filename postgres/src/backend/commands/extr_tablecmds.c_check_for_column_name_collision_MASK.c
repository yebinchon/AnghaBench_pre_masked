
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attnum; } ;
typedef int Relation ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char const*,...) ;

__attribute__((used)) static bool
FUNC_11(Relation VAR_4, const char *VAR_5,
        bool VAR_6)
{
 HeapTuple VAR_7;
 int VAR_8;





 VAR_7 = FUNC_7(VAR_0,
          FUNC_2(FUNC_5(VAR_4)),
          FUNC_3(VAR_5));
 if (!FUNC_1(VAR_7))
  return 1;

 VAR_8 = ((Form_pg_attribute) FUNC_0(VAR_7))->attnum;
 FUNC_6(VAR_7);






 if (VAR_8 <= 0)
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_10("column name \"%s\" conflicts with a system column name",
      VAR_5)));
 else
 {
  if (VAR_6)
  {
   FUNC_8(VAR_3,
     (FUNC_9(VAR_1),
      FUNC_10("column \"%s\" of relation \"%s\" already exists, skipping",
       VAR_5, FUNC_4(VAR_4))));
   return 0;
  }

  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_10("column \"%s\" of relation \"%s\" already exists",
      VAR_5, FUNC_4(VAR_4))));
 }

 return 1;
}
