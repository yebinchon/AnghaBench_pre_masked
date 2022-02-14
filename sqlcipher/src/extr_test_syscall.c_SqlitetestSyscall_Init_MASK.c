
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aCmd ;
typedef int Tcl_ObjCmdProc ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int *,int ,int ) ;
 int VAR_1 ;

int FUNC_1(Tcl_Interp *VAR_2){
  struct SyscallCmd {
    const char *zName;
    Tcl_ObjCmdProc *xCmd;
  } VAR_3[] = {
    { "test_syscall", &VAR_1},
  };
  int VAR_4;

  for(VAR_4=0; VAR_4<sizeof(VAR_3)/sizeof(VAR_3[0]); VAR_4++){
    FUNC_0(VAR_2, VAR_3[VAR_4].zName, VAR_3[VAR_4].xCmd, 0, 0);
  }
  return VAR_0;
}
