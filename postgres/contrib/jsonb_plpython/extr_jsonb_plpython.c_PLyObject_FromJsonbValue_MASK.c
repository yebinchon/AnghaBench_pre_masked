
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
struct TYPE_7__ {int boolean; int numeric; TYPE_1__ binary; } ;
struct TYPE_8__ {int type; TYPE_2__ val; } ;
typedef int PyObject ;
typedef TYPE_3__ JsonbValue ;
typedef int Datum ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,int) ;





 int VAR_5 ;

__attribute__((used)) static PyObject *
FUNC_7(JsonbValue *VAR_6)
{
 switch (VAR_6->type)
 {
  case 130:
   VAR_2;

  case 132:
   return FUNC_3(VAR_6->val.binary.data);

  case 129:
   {
    Datum VAR_7;
    char *VAR_8;

    VAR_7 = FUNC_2(VAR_6->val.numeric);
    VAR_8 = FUNC_0(FUNC_1(VAR_5, VAR_7));

    return FUNC_5(VAR_4, "s", VAR_8);
   }

  case 128:
   return FUNC_4(VAR_6);

  case 131:
   if (VAR_6->val.boolean)
    VAR_3;
   else
    VAR_1;

  default:
   FUNC_6(VAR_0, "unexpected jsonb value type: %d", VAR_6->type);
   return ((void*)0);
 }
}
