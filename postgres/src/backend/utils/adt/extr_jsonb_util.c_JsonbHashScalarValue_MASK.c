
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int len; scalar_t__ val; } ;
struct TYPE_5__ {int boolean; int numeric; TYPE_2__ string; } ;
struct TYPE_7__ {int type; TYPE_1__ val; } ;
typedef TYPE_3__ JsonbValue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (unsigned char const*,int ) ;
 int VAR_1 ;





void
FUNC_5(const JsonbValue *VAR_2, uint32 *VAR_3)
{
 uint32 VAR_4;


 switch (VAR_2->type)
 {
  case 130:
   VAR_4 = 0x01;
   break;
  case 128:
   VAR_4 = FUNC_0(FUNC_4((const unsigned char *) VAR_2->val.string.val,
            VAR_2->val.string.len));
   break;
  case 129:

   VAR_4 = FUNC_0(FUNC_1(VAR_1,
              FUNC_2(VAR_2->val.numeric)));
   break;
  case 131:
   VAR_4 = VAR_2->val.boolean ? 0x02 : 0x04;

   break;
  default:
   FUNC_3(VAR_0, "invalid jsonb scalar type");
   VAR_4 = 0;
   break;
 }






 *VAR_3 = (*VAR_3 << 1) | (*VAR_3 >> 31);
 *VAR_3 ^= VAR_4;
}
