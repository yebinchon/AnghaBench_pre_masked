
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_5__ {int blockState; scalar_t__ savepointLevel; struct TYPE_5__* parent; struct TYPE_5__* name; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char const*) ;

void
FUNC_9(const char *VAR_6)
{
 TransactionState VAR_7 = VAR_0;
 TransactionState VAR_8,
    VAR_9;
 if (FUNC_2())
  FUNC_5(VAR_4,
    (FUNC_6(VAR_1),
     FUNC_7("cannot rollback to savepoints during a parallel operation")));

 switch (VAR_7->blockState)
 {




  case 140:
  case 147:
   FUNC_5(VAR_4,
     (FUNC_6(VAR_3),
      FUNC_7("savepoint \"%s\" does not exist", VAR_6)));
   break;

  case 141:

   FUNC_5(VAR_4,
     (FUNC_6(VAR_2),

      FUNC_7("%s can only be used in transaction blocks",
       "ROLLBACK TO SAVEPOINT")));
   break;




  case 130:
  case 136:
   break;


  case 143:
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
   FUNC_4(VAR_5, "RollbackToSavepoint: unexpected state %s",
     FUNC_1(VAR_7->blockState));
   break;
 }

 for (VAR_8 = VAR_7; FUNC_3(VAR_8); VAR_8 = VAR_8->parent)
 {
  if (FUNC_3(VAR_8->name) && FUNC_8(VAR_8->name, VAR_6) == 0)
   break;
 }

 if (!FUNC_3(VAR_8))
  FUNC_5(VAR_4,
    (FUNC_6(VAR_3),
     FUNC_7("savepoint \"%s\" does not exist", VAR_6)));


 if (VAR_8->savepointLevel != VAR_7->savepointLevel)
  FUNC_5(VAR_4,
    (FUNC_6(VAR_3),
     FUNC_7("savepoint \"%s\" does not exist within current savepoint level", VAR_6)));






 VAR_9 = VAR_0;
 for (;;)
 {
  if (VAR_9 == VAR_8)
   break;
  if (VAR_9->blockState == 130)
   VAR_9->blockState = 134;
  else if (VAR_9->blockState == 136)
   VAR_9->blockState = 135;
  else
   FUNC_4(VAR_5, "RollbackToSavepoint: unexpected state %s",
     FUNC_1(VAR_9->blockState));
  VAR_9 = VAR_9->parent;
  FUNC_0(FUNC_3(VAR_9));
 }


 if (VAR_9->blockState == 130)
  VAR_9->blockState = 128;
 else if (VAR_9->blockState == 136)
  VAR_9->blockState = 133;
 else
  FUNC_4(VAR_5, "RollbackToSavepoint: unexpected state %s",
    FUNC_1(VAR_9->blockState));
}
