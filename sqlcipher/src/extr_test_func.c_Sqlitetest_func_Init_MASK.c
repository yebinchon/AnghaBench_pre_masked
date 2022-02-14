
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_api_routines ;
typedef int sqlite3 ;
typedef int aObjCmd ;
typedef int Tcl_ObjCmdProc ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;



 scalar_t__ VAR_1 ;
 int FUNC_1 (void (*) ()) ;
 int FUNC_2 () ;

int FUNC_3(Tcl_Interp *VAR_2){
  static struct {
     char *zName;
     Tcl_ObjCmdProc *xProc;
  } VAR_3[] = {
     { "autoinstall_test_functions", 129 },
     { "abuse_create_function", 130 },
     { "install_fts3_rank_function", 128 },
  };
  int VAR_4;
  extern int FUNC_4(sqlite3 *, char **, const sqlite3_api_routines *);

  for(VAR_4=0; VAR_4<sizeof(VAR_3)/sizeof(VAR_3[0]); VAR_4++){
    FUNC_0(VAR_2, VAR_3[VAR_4].zName, VAR_3[VAR_4].xProc, 0, 0);
  }
  FUNC_2();
  FUNC_1((void(*)(void))VAR_1);
  FUNC_1((void(*)(void))FUNC_4);
  return VAR_0;
}
