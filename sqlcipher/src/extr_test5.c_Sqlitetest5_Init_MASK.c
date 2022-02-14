
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aCmd ;
typedef int Tcl_ObjCmdProc ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;





int FUNC_1(Tcl_Interp *VAR_1){
  static struct {
    char *zName;
    Tcl_ObjCmdProc *xProc;
  } VAR_2[] = {
    { "binarize", (Tcl_ObjCmdProc*)131 },
    { "test_value_overhead", (Tcl_ObjCmdProc*)128 },
    { "test_translate", (Tcl_ObjCmdProc*)130 },
    { "translate_selftest", (Tcl_ObjCmdProc*)129},
  };
  int VAR_3;
  for(VAR_3=0; VAR_3<sizeof(VAR_2)/sizeof(VAR_2[0]); VAR_3++){
    FUNC_0(VAR_1, VAR_2[VAR_3].zName, VAR_2[VAR_3].xProc, 0, 0);
  }
  return VAR_0;
}
