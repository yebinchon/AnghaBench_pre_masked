
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int blockState; int name; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;

void
FUNC_8(const char *VAR_6)
{
 TransactionState VAR_7 = VAR_0;
 if (FUNC_1())
  FUNC_5(VAR_3,
    (FUNC_6(VAR_1),
     FUNC_7("cannot define savepoints during a parallel operation")));

 switch (VAR_7->blockState)
 {
  case 140:
  case 130:

   FUNC_3();
   VAR_7 = VAR_0;





   if (VAR_6)
    VAR_7->name = FUNC_2(VAR_5, VAR_6);
   break;
  case 141:
   FUNC_5(VAR_3,
     (FUNC_6(VAR_2),

      FUNC_7("%s can only be used in transaction blocks",
       "SAVEPOINT")));
   break;


  case 143:
  case 137:
  case 144:
  case 139:
  case 132:
  case 142:
  case 129:
  case 131:
  case 147:
  case 136:
  case 146:
  case 135:
  case 145:
  case 134:
  case 128:
  case 133:
  case 138:
   FUNC_4(VAR_4, "DefineSavepoint: unexpected state %s",
     FUNC_0(VAR_7->blockState));
   break;
 }
}
