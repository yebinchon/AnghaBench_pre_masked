
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int aCmd ;
typedef int Tcl_ObjCmdProc ;
typedef int Tcl_Interp ;
struct TYPE_2__ {int disableTry; int disableInit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;
 int FUNC_1 (int *,char*,char*,int ) ;
 TYPE_1__ VAR_2 ;
int FUNC_2(Tcl_Interp *VAR_3){
  static struct {
    char *zName;
    Tcl_ObjCmdProc *xProc;
  } VAR_4[] = {
    { "sqlite3_shutdown", (Tcl_ObjCmdProc*)128 },
    { "sqlite3_initialize", (Tcl_ObjCmdProc*)133 },
    { "sqlite3_config", (Tcl_ObjCmdProc*)136 },

    { "enter_static_mutex", (Tcl_ObjCmdProc*)134 },
    { "leave_static_mutex", (Tcl_ObjCmdProc*)130 },

    { "enter_db_mutex", (Tcl_ObjCmdProc*)135 },
    { "leave_db_mutex", (Tcl_ObjCmdProc*)131 },

    { "alloc_dealloc_mutex", (Tcl_ObjCmdProc*)138 },
    { "install_mutex_counters", (Tcl_ObjCmdProc*)132 },
    { "read_mutex_counters", (Tcl_ObjCmdProc*)129 },
    { "clear_mutex_counters", (Tcl_ObjCmdProc*)137 },
  };
  int VAR_5;
  for(VAR_5=0; VAR_5<sizeof(VAR_4)/sizeof(VAR_4[0]); VAR_5++){
    FUNC_0(VAR_3, VAR_4[VAR_5].zName, VAR_4[VAR_5].xProc, 0, 0);
  }

  FUNC_1(VAR_3, "disable_mutex_init",
              (char*)&VAR_2.disableInit, VAR_1);
  FUNC_1(VAR_3, "disable_mutex_try",
              (char*)&VAR_2.disableTry, VAR_1);
  return VAR_0;
}
