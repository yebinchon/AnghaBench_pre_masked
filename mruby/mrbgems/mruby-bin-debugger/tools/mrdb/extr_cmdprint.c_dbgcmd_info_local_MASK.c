
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int print_no; int dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int ,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (char*,unsigned long,int ) ;

dbgcmd_state
FUNC_6(mrb_state *VAR_1, mrdb_state *VAR_2)
{
  mrb_value VAR_3;
  mrb_value VAR_4;
  int VAR_5;

  VAR_5 = FUNC_3(VAR_1);

  VAR_3 = FUNC_1(VAR_1, VAR_2->dbg, "local_variables", 0, ((void*)0), 1);

  VAR_4 = FUNC_4(VAR_1, VAR_3, "\0");
  FUNC_5("$%lu = %s\n", (unsigned long)VAR_2->print_no++, FUNC_0(VAR_4));

  if (VAR_2->print_no == 0) {
    VAR_2->print_no = 1;
  }

  FUNC_2(VAR_1, VAR_5);

  return VAR_0;
}
