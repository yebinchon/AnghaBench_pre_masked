
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sqlerrmc; int sqlerrml; } ;
struct sqlca_t {int sqlcode; TYPE_1__ sqlerrm; int sqlstate; } ;
 int FUNC_0 () ;
 struct sqlca_t* FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int) ;

void
FUNC_7(int VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct sqlca_t *VAR_4 = FUNC_1();

 if (VAR_4 == ((void*)0))
 {
  FUNC_3("out of memory");
  FUNC_0();
  return;
 }

 VAR_4->sqlcode = VAR_1;
 FUNC_6(VAR_4->sqlstate, VAR_2, sizeof(VAR_4->sqlstate));

 switch (VAR_1)
 {
  case 140:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("no data found on line %d"), VAR_0);
   break;

  case 137:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("out of memory on line %d"), VAR_0);
   break;

  case 130:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("unsupported type \"%s\" on line %d"), VAR_3, VAR_0);
   break;

  case 135:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("too many arguments on line %d"), VAR_0);
   break;

  case 136:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("too few arguments on line %d"), VAR_0);
   break;

  case 145:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("invalid input syntax for type int: \"%s\", on line %d"), VAR_3, VAR_0);
   break;

  case 133:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("invalid input syntax for type unsigned int: \"%s\", on line %d"), VAR_3, VAR_0);
   break;

  case 146:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("invalid input syntax for floating-point type: \"%s\", on line %d"), VAR_3, VAR_0);
   break;

  case 149:
   if (VAR_3)
    FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


       FUNC_2("invalid syntax for type boolean: \"%s\", on line %d"), VAR_3, VAR_0);
   else
    FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


       FUNC_2("could not convert boolean value: size mismatch, on line %d"), VAR_0);
   break;

  case 147:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("empty query on line %d"), VAR_0);
   break;

  case 142:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("null value without indicator on line %d"), VAR_0);
   break;

  case 139:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("variable does not have an array type on line %d"), VAR_0);
   break;

  case 148:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("data read from server is not an array on line %d"), VAR_0);
   break;

  case 151:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("inserting an array of variables is not supported on line %d"), VAR_0);
   break;

  case 138:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("connection \"%s\" does not exist on line %d"), VAR_3, VAR_0);
   break;

  case 141:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("not connected to connection \"%s\" on line %d"), VAR_3, VAR_0);
   break;

  case 143:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("invalid statement name \"%s\" on line %d"), VAR_3, VAR_0);
   break;

  case 132:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("descriptor \"%s\" not found on line %d"), VAR_3, VAR_0);
   break;

  case 144:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("descriptor index out of range on line %d"), VAR_0);
   break;

  case 131:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("unrecognized descriptor item \"%s\" on line %d"), VAR_3, VAR_0);
   break;

  case 128:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("variable does not have a numeric type on line %d"), VAR_0);
   break;

  case 129:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("variable does not have a character type on line %d"), VAR_0);
   break;

  case 134:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("error in transaction processing on line %d"), VAR_0);
   break;

  case 150:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("could not connect to database \"%s\" on line %d"), VAR_3, VAR_0);
   break;

  default:
   FUNC_4(VAR_4->sqlerrm.sqlerrmc, sizeof(VAR_4->sqlerrm.sqlerrmc),


      FUNC_2("SQL error %d on line %d"), VAR_1, VAR_0);
   break;
 }

 VAR_4->sqlerrm.sqlerrml = FUNC_5(VAR_4->sqlerrm.sqlerrmc);
 FUNC_3("raising sqlcode %d on line %d: %s\n", VAR_1, VAR_0, VAR_4->sqlerrm.sqlerrmc);


 FUNC_0();
}
