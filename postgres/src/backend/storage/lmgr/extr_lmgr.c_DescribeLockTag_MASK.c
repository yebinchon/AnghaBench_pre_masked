
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int locktag_field1; scalar_t__ locktag_type; int locktag_field4; int locktag_field3; int locktag_field2; } ;
typedef int StringInfo ;
typedef int LockTagType ;
typedef TYPE_1__ LOCKTAG ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,...) ;

void
FUNC_2(StringInfo VAR_0, const LOCKTAG *VAR_1)
{
 switch ((LockTagType) VAR_1->locktag_type)
 {
  case 134:
   FUNC_1(VAR_0,
        FUNC_0("relation %u of database %u"),
        VAR_1->locktag_field2,
        VAR_1->locktag_field1);
   break;
  case 133:
   FUNC_1(VAR_0,
        FUNC_0("extension of relation %u of database %u"),
        VAR_1->locktag_field2,
        VAR_1->locktag_field1);
   break;
  case 135:
   FUNC_1(VAR_0,
        FUNC_0("page %u of relation %u of database %u"),
        VAR_1->locktag_field3,
        VAR_1->locktag_field2,
        VAR_1->locktag_field1);
   break;
  case 130:
   FUNC_1(VAR_0,
        FUNC_0("tuple (%u,%u) of relation %u of database %u"),
        VAR_1->locktag_field3,
        VAR_1->locktag_field4,
        VAR_1->locktag_field2,
        VAR_1->locktag_field1);
   break;
  case 131:
   FUNC_1(VAR_0,
        FUNC_0("transaction %u"),
        VAR_1->locktag_field1);
   break;
  case 128:
   FUNC_1(VAR_0,
        FUNC_0("virtual transaction %d/%u"),
        VAR_1->locktag_field1,
        VAR_1->locktag_field2);
   break;
  case 132:
   FUNC_1(VAR_0,
        FUNC_0("speculative token %u of transaction %u"),
        VAR_1->locktag_field2,
        VAR_1->locktag_field1);
   break;
  case 136:
   FUNC_1(VAR_0,
        FUNC_0("object %u of class %u of database %u"),
        VAR_1->locktag_field3,
        VAR_1->locktag_field2,
        VAR_1->locktag_field1);
   break;
  case 129:

   FUNC_1(VAR_0,
        FUNC_0("user lock [%u,%u,%u]"),
        VAR_1->locktag_field1,
        VAR_1->locktag_field2,
        VAR_1->locktag_field3);
   break;
  case 137:
   FUNC_1(VAR_0,
        FUNC_0("advisory lock [%u,%u,%u,%u]"),
        VAR_1->locktag_field1,
        VAR_1->locktag_field2,
        VAR_1->locktag_field3,
        VAR_1->locktag_field4);
   break;
  default:
   FUNC_1(VAR_0,
        FUNC_0("unrecognized locktag type %d"),
        (int) VAR_1->locktag_type);
   break;
 }
}
