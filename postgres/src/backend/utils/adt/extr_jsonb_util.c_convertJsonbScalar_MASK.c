
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tz; int typid; int value; } ;
struct TYPE_6__ {char* val; size_t len; } ;
struct TYPE_8__ {TYPE_2__ datetime; int boolean; scalar_t__ numeric; TYPE_1__ string; } ;
struct TYPE_9__ {int type; TYPE_3__ val; } ;
typedef int StringInfo ;
typedef TYPE_4__ JsonbValue ;
typedef int JEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 int FUNC_0 (char*,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int ,char*) ;





 int FUNC_4 (scalar_t__) ;
 short FUNC_5 (int ) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_6, JEntry *VAR_7, JsonbValue *VAR_8)
{
 int VAR_9;
 short VAR_10;

 switch (VAR_8->type)
 {
  case 130:
   *VAR_7 = VAR_3;
   break;

  case 128:
   FUNC_2(VAR_6, VAR_8->val.string.val, VAR_8->val.string.len);

   *VAR_7 = VAR_8->val.string.len;
   break;

  case 129:

   if (FUNC_4(VAR_8->val.numeric))
   {
    FUNC_2(VAR_6, "NaN", 3);
    *VAR_7 = 3;
    break;
   }

   VAR_9 = FUNC_1(VAR_8->val.numeric);
   VAR_10 = FUNC_5(VAR_6);

   FUNC_2(VAR_6, (char *) VAR_8->val.numeric, VAR_9);

   *VAR_7 = VAR_4 | (VAR_10 + VAR_9);
   break;

  case 132:
   *VAR_7 = (VAR_8->val.boolean) ?
    VAR_2 : VAR_1;
   break;

  case 131:
   {
    char VAR_11[VAR_5 + 1];
    size_t VAR_12;

    FUNC_0(VAR_11,
           VAR_8->val.datetime.value,
           VAR_8->val.datetime.typid,
           &VAR_8->val.datetime.tz);
    VAR_12 = FUNC_6(VAR_11);
    FUNC_2(VAR_6, VAR_11, VAR_12);

    *VAR_7 = VAR_12;
   }
   break;

  default:
   FUNC_3(VAR_0, "invalid jsonb scalar type");
 }
}
