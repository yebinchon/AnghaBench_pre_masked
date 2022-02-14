
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int wcnt; char** words; TYPE_1__* dbg; } ;
typedef TYPE_2__ mrdb_state ;
typedef int mrb_state ;
typedef int debug_command ;
struct TYPE_6__ {char* prvfile; int prvline; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 (int *,TYPE_2__*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

__attribute__((used)) static debug_command*
FUNC_5(mrb_state *VAR_1, mrdb_state *VAR_2)
{
  debug_command *VAR_3 = ((void*)0);
  char *VAR_4;
  int VAR_5;

  while (!VAR_3) {
    for (VAR_4=((void*)0); !VAR_4 || *VAR_4=='\0'; ) {
      FUNC_3("(%s:%d) ", VAR_2->dbg->prvfile, VAR_2->dbg->prvline);
      FUNC_0(VAR_0);
      VAR_4 = FUNC_1(VAR_1, VAR_2);
    }

    VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_4);





    if (!VAR_3) {
      FUNC_3("invalid command (");
      for (VAR_5=0; VAR_5<VAR_2->wcnt; VAR_5++) {
        if (VAR_5>0) {
          FUNC_3(" ");
        }
        FUNC_3("%s", VAR_2->words[VAR_5]);
      }
      FUNC_4(")");
    }
  }
  return VAR_3;
}
