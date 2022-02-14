
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aObjCmd ;
typedef int Tcl_ObjCmdProc ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,void*,int ) ;




int FUNC_1(Tcl_Interp *VAR_1){
  static struct {
     char *zName;
     Tcl_ObjCmdProc *xProc;
     void *clientData;
  } VAR_2[] = {
     { "c_misuse_test", 129, 0 },
     { "c_realloc_test", 128, 0 },
     { "c_collation_test", 130, 0 },
  };
  int VAR_3;
  for(VAR_3=0; VAR_3<sizeof(VAR_2)/sizeof(VAR_2[0]); VAR_3++){
    FUNC_0(VAR_1, VAR_2[VAR_3].zName,
        VAR_2[VAR_3].xProc, VAR_2[VAR_3].clientData, 0);
  }
  return VAR_0;
}
