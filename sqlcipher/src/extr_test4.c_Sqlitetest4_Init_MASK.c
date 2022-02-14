
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aCmd ;
typedef int Tcl_Interp ;
typedef int Tcl_CmdProc ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;
int FUNC_1(Tcl_Interp *VAR_1){
  static struct {
     char *zName;
     Tcl_CmdProc *xProc;
  } VAR_2[] = {
     { "thread_create", (Tcl_CmdProc*)138 },
     { "thread_wait", (Tcl_CmdProc*)128 },
     { "thread_halt", (Tcl_CmdProc*)133 },
     { "thread_argc", (Tcl_CmdProc*)142 },
     { "thread_argv", (Tcl_CmdProc*)141 },
     { "thread_colname", (Tcl_CmdProc*)140 },
     { "thread_result", (Tcl_CmdProc*)132 },
     { "thread_error", (Tcl_CmdProc*)135 },
     { "thread_compile", (Tcl_CmdProc*)139 },
     { "thread_step", (Tcl_CmdProc*)131 },
     { "thread_finalize", (Tcl_CmdProc*)134 },
     { "thread_swap", (Tcl_CmdProc*)129 },
     { "thread_db_get", (Tcl_CmdProc*)137 },
     { "thread_db_put", (Tcl_CmdProc*)136 },
     { "thread_stmt_get", (Tcl_CmdProc*)130 },
  };
  int VAR_3;

  for(VAR_3=0; VAR_3<sizeof(VAR_2)/sizeof(VAR_2[0]); VAR_3++){
    FUNC_0(VAR_1, VAR_2[VAR_3].zName, VAR_2[VAR_3].xProc, 0, 0);
  }
  return VAR_0;
}
