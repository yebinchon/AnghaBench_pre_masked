
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int wcnt; int print_no; int dbg; int * words; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*,unsigned long) ;
 int FUNC_10 (char,int ) ;
 int FUNC_11 (char*) ;
 int VAR_1 ;

dbgcmd_state
FUNC_12(mrb_state *VAR_2, mrdb_state *VAR_3)
{
  mrb_value VAR_4;
  mrb_value VAR_5;
  uint8_t VAR_6;
  int VAR_7;

  if (VAR_3->wcnt <= 1) {
    FUNC_11("Parameter not specified.");
    return VAR_0;
  }

  VAR_7 = FUNC_5(VAR_2);


  VAR_4 = FUNC_8(VAR_2, ((void*)0));
  for (VAR_6=1; VAR_6<VAR_3->wcnt; VAR_6++) {
    VAR_4 = FUNC_7(VAR_2, VAR_4, " ");
    VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_3->words[VAR_6]);
  }

  VAR_5 = FUNC_3(VAR_2, VAR_3->dbg, FUNC_1(VAR_4), FUNC_0(VAR_4), ((void*)0), 0);


  FUNC_9("$%lu = ", (unsigned long)VAR_3->print_no++);
  FUNC_2(FUNC_1(VAR_5), FUNC_0(VAR_5), 1, VAR_1);
  FUNC_10('\n', VAR_1);

  if (VAR_3->print_no == 0) {
    VAR_3->print_no = 1;
  }

  FUNC_4(VAR_2, VAR_7);

  return VAR_0;
}
