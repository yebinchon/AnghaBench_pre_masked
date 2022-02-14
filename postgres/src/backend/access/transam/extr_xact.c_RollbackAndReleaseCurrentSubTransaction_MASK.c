
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int blockState; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int ) ;

void
FUNC_5(void)
{
 TransactionState VAR_2 = VAR_0;
 switch (VAR_2->blockState)
 {

  case 130:
  case 136:
   break;


  case 143:
  case 137:
  case 144:
  case 141:
  case 139:
  case 132:
  case 140:
  case 142:
  case 129:
  case 131:
  case 147:
  case 146:
  case 135:
  case 145:
  case 134:
  case 128:
  case 133:
  case 138:
   FUNC_4(VAR_1, "RollbackAndReleaseCurrentSubTransaction: unexpected state %s",
     FUNC_2(VAR_2->blockState));
   break;
 }




 if (VAR_2->blockState == 130)
  FUNC_0();


 FUNC_3();

 VAR_2 = VAR_0;
 FUNC_1(VAR_2->blockState == 130 ||
    VAR_2->blockState == 140 ||
    VAR_2->blockState == 141 ||
    VAR_2->blockState == 137);
}
