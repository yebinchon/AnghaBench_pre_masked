
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_2__ {int relkind; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_2, Oid VAR_3, int32 VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_class VAR_6;

 VAR_5 = FUNC_4(VAR_1,
        FUNC_2(VAR_3));
 if (!FUNC_1(VAR_5))
  FUNC_6(VAR_0, "cache lookup failed for relation %u", VAR_3);
 VAR_6 = (Form_pg_class) FUNC_0(VAR_5);

 switch (VAR_6->relkind)
 {
  case 131:
  case 132:
   FUNC_5(VAR_2, "table");
   break;
  case 135:
  case 133:
   FUNC_5(VAR_2, "index");
   break;
  case 130:
   FUNC_5(VAR_2, "sequence");
   break;
  case 129:
   FUNC_5(VAR_2, "toast table");
   break;
  case 128:
   FUNC_5(VAR_2, "view");
   break;
  case 134:
   FUNC_5(VAR_2, "materialized view");
   break;
  case 137:
   FUNC_5(VAR_2, "composite type");
   break;
  case 136:
   FUNC_5(VAR_2, "foreign table");
   break;
  default:

   FUNC_5(VAR_2, "relation");
   break;
 }

 if (VAR_4 != 0)
  FUNC_5(VAR_2, " column");

 FUNC_3(VAR_5);
}
