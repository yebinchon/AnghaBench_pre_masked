
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 TransactionState VAR_4 = VAR_0;

 switch (VAR_4->blockState)
 {



  case 137:
   VAR_4->blockState = 144;
   break;






  case 141:
   VAR_4->blockState = 144;
   break;




  case 140:
  case 139:
  case 130:
  case 147:
  case 136:
   FUNC_2(VAR_3,
     (FUNC_3(VAR_1),
      FUNC_4("there is already a transaction in progress")));
   break;


  case 143:
  case 144:
  case 132:
  case 142:
  case 129:
  case 131:
  case 146:
  case 135:
  case 145:
  case 134:
  case 128:
  case 133:
  case 138:
   FUNC_1(VAR_2, "BeginTransactionBlock: unexpected state %s",
     FUNC_0(VAR_4->blockState));
   break;
 }
}
