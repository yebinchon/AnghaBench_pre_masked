
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int blockState; int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

void
FUNC_10(const char *VAR_5)
{
 TransactionState VAR_6 = VAR_0;
 if (FUNC_2())
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_9("cannot start subtransactions during a parallel operation")));

 switch (VAR_6->blockState)
 {
  case 137:
  case 140:
  case 141:
  case 142:
  case 138:
  case 130:

   FUNC_4();
   VAR_6 = VAR_0;





   if (VAR_5)
    VAR_6->name = FUNC_3(VAR_4, VAR_5);
   break;


  case 143:
  case 144:
  case 139:
  case 132:
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
   FUNC_6(VAR_3, "BeginInternalSubTransaction: unexpected state %s",
     FUNC_0(VAR_6->blockState));
   break;
 }

 FUNC_1();
 FUNC_5();
}
