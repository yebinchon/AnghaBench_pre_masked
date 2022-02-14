
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int direction; int how_many; scalar_t__ expr; } ;
typedef TYPE_1__ PLpgSQL_stmt_fetch ;






 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(PLpgSQL_stmt_fetch *VAR_1)
{
 VAR_0 += 2;
 FUNC_1();
 switch (VAR_1->direction)
 {
  case 129:
   FUNC_2("    FORWARD ");
   break;
  case 130:
   FUNC_2("    BACKWARD ");
   break;
  case 131:
   FUNC_2("    ABSOLUTE ");
   break;
  case 128:
   FUNC_2("    RELATIVE ");
   break;
  default:
   FUNC_2("??? unknown cursor direction %d", VAR_1->direction);
 }

 if (VAR_1->expr)
 {
  FUNC_0(VAR_1->expr);
  FUNC_2("\n");
 }
 else
  FUNC_2("%ld\n", VAR_1->how_many);

 VAR_0 -= 2;
}
