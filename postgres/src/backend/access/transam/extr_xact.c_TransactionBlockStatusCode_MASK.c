
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int blockState; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;

char
FUNC_2(void)
{
 TransactionState VAR_2 = VAR_0;

 switch (VAR_2->blockState)
 {
  case 143:
  case 137:
   return 'I';
  case 144:
  case 132:
  case 140:
  case 141:
  case 139:
  case 130:
  case 142:
  case 129:
  case 131:
  case 138:
   return 'T';
  case 147:
  case 136:
  case 146:
  case 135:
  case 145:
  case 134:
  case 128:
  case 133:
   return 'E';
 }


 FUNC_1(VAR_1, "invalid transaction block state: %s",
   FUNC_0(VAR_2->blockState));
 return 0;
}
