
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int blockState; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int ) ;

void
FUNC_5(void)
{
 TransactionState VAR_3 = VAR_1;

 switch (VAR_3->blockState)
 {




  case 143:
   FUNC_3();
   VAR_3->blockState = 137;
   break;
  case 140:
  case 141:
  case 130:
   break;
  case 147:
  case 136:
   break;


  case 137:
  case 144:
  case 139:
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
   FUNC_4(VAR_2, "StartTransactionCommand: unexpected state %s",
     FUNC_1(VAR_3->blockState));
   break;
 }





 FUNC_0(VAR_0 != ((void*)0));
 FUNC_2(VAR_0);
}
