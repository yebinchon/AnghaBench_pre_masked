
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int blockState; int chain; struct TYPE_3__* parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

void
FUNC_6(bool VAR_6)
{
 TransactionState VAR_7 = VAR_0;

 switch (VAR_7->blockState)
 {





  case 140:
   VAR_7->blockState = 145;
   break;







  case 147:
   VAR_7->blockState = 146;
   break;





  case 130:
  case 136:
   while (VAR_7->parent != ((void*)0))
   {
    if (VAR_7->blockState == 130)
     VAR_7->blockState = 134;
    else if (VAR_7->blockState == 136)
     VAR_7->blockState = 135;
    else
     FUNC_2(VAR_4, "UserAbortTransactionBlock: unexpected state %s",
       FUNC_1(VAR_7->blockState));
    VAR_7 = VAR_7->parent;
   }
   if (VAR_7->blockState == 140)
    VAR_7->blockState = 145;
   else if (VAR_7->blockState == 147)
    VAR_7->blockState = 146;
   else
    FUNC_2(VAR_4, "UserAbortTransactionBlock: unexpected state %s",
      FUNC_1(VAR_7->blockState));
   break;
  case 137:
  case 141:
   if (VAR_6)
    FUNC_3(VAR_3,
      (FUNC_4(VAR_2),

       FUNC_5("%s can only be used in transaction blocks",
        "ROLLBACK AND CHAIN")));
   else
    FUNC_3(VAR_5,
      (FUNC_4(VAR_2),
       FUNC_5("there is no transaction in progress")));
   VAR_7->blockState = 145;
   break;





  case 139:
   FUNC_3(VAR_4,
     (FUNC_4(VAR_1),
      FUNC_5("cannot abort during a parallel operation")));
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
   FUNC_2(VAR_4, "UserAbortTransactionBlock: unexpected state %s",
     FUNC_1(VAR_7->blockState));
   break;
 }

 FUNC_0(VAR_7->blockState == 146 ||
     VAR_7->blockState == 145);

 VAR_7->chain = VAR_6;
}
