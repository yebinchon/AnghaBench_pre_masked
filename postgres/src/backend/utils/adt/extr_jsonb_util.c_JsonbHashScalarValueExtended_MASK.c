
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {int len; scalar_t__ val; } ;
struct TYPE_6__ {int boolean; int numeric; TYPE_1__ string; } ;
struct TYPE_7__ {int type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (unsigned char const*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;





void
FUNC_8(const JsonbValue *VAR_3, uint64 *VAR_4,
        uint64 VAR_5)
{
 uint64 VAR_6;

 switch (VAR_3->type)
 {
  case 130:
   VAR_6 = VAR_5 + 0x01;
   break;
  case 128:
   VAR_6 = FUNC_1(FUNC_7((const unsigned char *) VAR_3->val.string.val,
               VAR_3->val.string.len,
               VAR_5));
   break;
  case 129:
   VAR_6 = FUNC_1(FUNC_2(VAR_1,
              FUNC_3(VAR_3->val.numeric),
              FUNC_5(VAR_5)));
   break;
  case 131:
   if (VAR_5)
    VAR_6 = FUNC_1(FUNC_2(VAR_2,
               FUNC_0(VAR_3->val.boolean),
               FUNC_5(VAR_5)));
   else
    VAR_6 = VAR_3->val.boolean ? 0x02 : 0x04;

   break;
  default:
   FUNC_6(VAR_0, "invalid jsonb scalar type");
   break;
 }

 *VAR_4 = FUNC_4(*VAR_4);
 *VAR_4 ^= VAR_6;
}
