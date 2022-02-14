
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relkind; int relname; int relnamespace; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,char*,int ) ;
 char* FUNC_10 (int ) ;
 char* FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(StringInfo VAR_2, Oid VAR_3)
{
 HeapTuple VAR_4;
 Form_pg_class VAR_5;
 char *VAR_6;
 char *VAR_7;

 VAR_4 = FUNC_6(VAR_1,
        FUNC_3(VAR_3));
 if (!FUNC_1(VAR_4))
  FUNC_9(VAR_0, "cache lookup failed for relation %u", VAR_3);
 VAR_5 = (Form_pg_class) FUNC_0(VAR_4);


 if (FUNC_4(VAR_3))
  VAR_6 = ((void*)0);
 else
  VAR_6 = FUNC_10(VAR_5->relnamespace);

 VAR_7 = FUNC_11(VAR_6, FUNC_2(VAR_5->relname));

 switch (VAR_5->relkind)
 {
  case 131:
  case 132:
   FUNC_8(VAR_2, FUNC_7("table %s"),
        VAR_7);
   break;
  case 135:
  case 133:
   FUNC_8(VAR_2, FUNC_7("index %s"),
        VAR_7);
   break;
  case 130:
   FUNC_8(VAR_2, FUNC_7("sequence %s"),
        VAR_7);
   break;
  case 129:
   FUNC_8(VAR_2, FUNC_7("toast table %s"),
        VAR_7);
   break;
  case 128:
   FUNC_8(VAR_2, FUNC_7("view %s"),
        VAR_7);
   break;
  case 134:
   FUNC_8(VAR_2, FUNC_7("materialized view %s"),
        VAR_7);
   break;
  case 137:
   FUNC_8(VAR_2, FUNC_7("composite type %s"),
        VAR_7);
   break;
  case 136:
   FUNC_8(VAR_2, FUNC_7("foreign table %s"),
        VAR_7);
   break;
  default:

   FUNC_8(VAR_2, FUNC_7("relation %s"),
        VAR_7);
   break;
 }

 FUNC_5(VAR_4);
}
