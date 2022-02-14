
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* val; int len; } ;
struct TYPE_6__ {TYPE_1__ string; int numeric; int boolean; } ;
struct TYPE_7__ {int type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;




 int FUNC_2 (int ,char*,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static Datum
FUNC_6(const JsonbValue *VAR_6, bool VAR_7)
{
 Datum VAR_8;
 char *VAR_9;

 switch (VAR_6->type)
 {
  case 130:
   FUNC_0(!VAR_7);
   VAR_8 = FUNC_2(VAR_3, "", 0);
   break;
  case 131:
   FUNC_0(!VAR_7);
   VAR_8 = FUNC_2(VAR_1,
         VAR_6->val.boolean ? "t" : "f", 1);
   break;
  case 129:
   FUNC_0(!VAR_7);
   VAR_9 = FUNC_3(VAR_6->val.numeric);
   VAR_8 = FUNC_2(VAR_4, VAR_9, FUNC_5(VAR_9));
   FUNC_4(VAR_9);
   break;
  case 128:
   VAR_8 = FUNC_2(VAR_7 ? VAR_2 : VAR_5,
         VAR_6->val.string.val,
         VAR_6->val.string.len);
   break;
  default:
   FUNC_1(VAR_0, "unrecognized jsonb scalar type: %d", VAR_6->type);
   VAR_8 = 0;
   break;
 }

 return VAR_8;
}
