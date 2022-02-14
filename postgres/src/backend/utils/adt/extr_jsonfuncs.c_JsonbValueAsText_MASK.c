
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int text ;
struct TYPE_10__ {int len; int data; } ;
struct TYPE_9__ {char* val; int len; } ;
struct TYPE_11__ {TYPE_2__ binary; int numeric; TYPE_1__ string; int boolean; } ;
struct TYPE_13__ {int type; TYPE_3__ val; } ;
struct TYPE_12__ {char* data; int len; } ;
typedef TYPE_4__ StringInfoData ;
typedef TYPE_5__ JsonbValue ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (char*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (TYPE_4__*) ;





 int VAR_1 ;

__attribute__((used)) static text *
FUNC_8(JsonbValue *VAR_2)
{
 switch (VAR_2->type)
 {
  case 130:
   return ((void*)0);

  case 131:
   return VAR_2->val.boolean ?
    FUNC_5("true", 4) :
    FUNC_5("false", 5);

  case 128:
   return FUNC_5(VAR_2->val.string.val,
           VAR_2->val.string.len);

  case 129:
   {
    Datum VAR_3;

    VAR_3 = FUNC_1(VAR_1,
             FUNC_3(VAR_2->val.numeric));

    return FUNC_4(FUNC_0(VAR_3));
   }

  case 132:
   {
    StringInfoData VAR_4;

    FUNC_7(&VAR_4);
    (void) FUNC_2(&VAR_4, VAR_2->val.binary.data,
           VAR_2->val.binary.len);

    return FUNC_5(VAR_4.data, VAR_4.len);
   }

  default:
   FUNC_6(VAR_0, "unrecognized jsonb type: %d", (int) VAR_2->type);
   return ((void*)0);
 }
}
