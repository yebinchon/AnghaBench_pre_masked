
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dbg; int srcpath; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
struct TYPE_10__ {char* filename; int line_max; int line_min; } ;
typedef TYPE_2__ listcmd_parser_state ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 char* FUNC_2 (int *,TYPE_1__*,int ,char*) ;
 int FUNC_3 (int *,int ,char*,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,TYPE_2__*) ;

dbgcmd_state
FUNC_6(mrb_state *VAR_1, mrdb_state *VAR_2)
{
  char *VAR_3;
  listcmd_parser_state *VAR_4 = FUNC_1(VAR_1);

  if (FUNC_5(VAR_1, VAR_2, VAR_4)) {
    if ((VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_2->srcpath, VAR_4->filename)) == ((void*)0)) {
      VAR_3 = VAR_4->filename;
    }
    FUNC_3(VAR_1, VAR_2->dbg, VAR_3, VAR_4->line_min, VAR_4->line_max);

    if (VAR_3 != ((void*)0) && VAR_3 != VAR_4->filename) {
      FUNC_4(VAR_1, VAR_3);
    }
    FUNC_0(VAR_1, VAR_4);
  }

  return VAR_0;
}
