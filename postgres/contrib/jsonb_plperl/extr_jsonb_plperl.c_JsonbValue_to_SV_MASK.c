
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int val; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_8__ {int boolean; TYPE_1__ string; int numeric; TYPE_2__ binary; } ;
struct TYPE_9__ {int type; TYPE_3__ val; } ;
typedef int SV ;
typedef TYPE_4__ JsonbValue ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int) ;





 int * FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int ,int ) ;

__attribute__((used)) static SV *
FUNC_11(JsonbValue *VAR_5)
{
 VAR_3;

 switch (VAR_5->type)
 {
  case 132:
   return FUNC_2(VAR_5->val.binary.data);

  case 129:
   {
    char *VAR_6 = FUNC_0(FUNC_1(VAR_4,
                   FUNC_3(VAR_5->val.numeric)));
    SV *VAR_7 = FUNC_8(FUNC_4(FUNC_5(VAR_6)));

    FUNC_9(VAR_6);
    return VAR_7;
   }

  case 128:
   {
    char *VAR_8 = FUNC_10(VAR_5->val.string.val,
             VAR_5->val.string.len);
    SV *VAR_9 = FUNC_5(VAR_8);

    FUNC_9(VAR_8);
    return VAR_9;
   }

  case 131:
   return FUNC_8(FUNC_4(VAR_5->val.boolean ? &VAR_2 : &VAR_1));

  case 130:
   return FUNC_7(0);

  default:
   FUNC_6(VAR_0, "unexpected jsonb value type: %d", VAR_5->type);
   return ((void*)0);
 }
}
