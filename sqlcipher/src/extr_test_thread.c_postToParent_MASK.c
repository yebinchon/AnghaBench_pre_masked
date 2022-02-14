
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Tcl_Obj ;
typedef int Tcl_Event ;
struct TYPE_5__ {int proc; scalar_t__ nextPtr; } ;
struct TYPE_7__ {char* zScript; int interp; TYPE_1__ base; } ;
struct TYPE_6__ {int parent; int interp; } ;
typedef TYPE_2__ SqlThread ;
typedef TYPE_3__ EvalEvent ;


 int VAR_0 ;
 char* FUNC_0 (int *,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(SqlThread *VAR_2, Tcl_Obj *VAR_3){
  EvalEvent *VAR_4;
  char *VAR_5;
  int VAR_6;

  VAR_5 = FUNC_0(VAR_3, &VAR_6);
  VAR_4 = (EvalEvent *)FUNC_3(sizeof(EvalEvent)+VAR_6+1);
  VAR_4->base.nextPtr = 0;
  VAR_4->base.proc = VAR_1;
  VAR_4->zScript = (char *)&VAR_4[1];
  FUNC_4(VAR_4->zScript, VAR_5, VAR_6+1);
  VAR_4->interp = VAR_2->interp;

  FUNC_2(VAR_2->parent, (Tcl_Event *)VAR_4, VAR_0);
  FUNC_1(VAR_2->parent);
}
