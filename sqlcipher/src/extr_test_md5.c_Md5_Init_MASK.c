
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tcl_Interp ;
typedef int Tcl_CmdProc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_1(Tcl_Interp *VAR_5){
  FUNC_0(VAR_5, "md5", (Tcl_CmdProc*)VAR_3,
                    VAR_1, 0);
  FUNC_0(VAR_5, "md5-10x8", (Tcl_CmdProc*)VAR_3,
                    VAR_0, 0);
  FUNC_0(VAR_5, "md5file", (Tcl_CmdProc*)VAR_4,
                    VAR_1, 0);
  FUNC_0(VAR_5, "md5file-10x8", (Tcl_CmdProc*)VAR_4,
                    VAR_0, 0);
  return VAR_2;
}
