
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_9__ {TYPE_1__* dbg; } ;
typedef TYPE_2__ mrdb_state ;
struct TYPE_10__ {int eException_class; } ;
typedef TYPE_3__ mrb_state ;
typedef int dbgcmd_state ;
struct TYPE_8__ {int xm; } ;


 int VAR_0 ;

 void* VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct RClass* FUNC_2 (TYPE_3__*,char*,int ) ;
 int FUNC_3 (TYPE_3__*,struct RClass*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;

dbgcmd_state
FUNC_5(mrb_state *VAR_4, mrdb_state *VAR_5)
{
  switch (VAR_5->dbg->xm) {
  case 129:
  case 128:
  case 130:
    while (1) {
      char VAR_6;
      int VAR_7;

      FUNC_4("The program is running.  Exit anyway? (y or n) ");
      FUNC_0(VAR_3);

      if ((VAR_7 = FUNC_1()) == VAR_2) {
        VAR_5->dbg->xm = VAR_1;
        break;
      }
      VAR_6 = VAR_7;
      while (VAR_7 != '\n' && (VAR_7 = FUNC_1()) != VAR_2) ;

      if (VAR_6 == 'y' || VAR_6 == 'Y') {
        VAR_5->dbg->xm = VAR_1;
        break;
      }
      else if (VAR_6 == 'n' || VAR_6 == 'N') {
        break;
      }
      else {
        FUNC_4("Please answer y or n.\n");
      }
    }
    break;
  default:
    VAR_5->dbg->xm = VAR_1;
    break;
  }

  if (VAR_5->dbg->xm == VAR_1) {
    struct RClass *VAR_8;
    VAR_8 = FUNC_2(VAR_4, "DebuggerExit", VAR_4->eException_class);
    FUNC_3(VAR_4, VAR_8, "Exit mrdb.");
  }
  return VAR_0;
}
