
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aCmd ;
typedef int Tcl_Interp ;
typedef int Tcl_CmdProc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;
 int FUNC_1 (int *,char*,char*,int) ;
 int VAR_3 ;



int FUNC_2(Tcl_Interp *VAR_4){
  extern int VAR_5;
  extern int VAR_6;
  extern int VAR_7;
  extern int VAR_8;
  extern int VAR_9;
  extern int VAR_10;
  static struct {
    char *zName;
    Tcl_CmdProc *xProc;
  } VAR_11[] = {
    { "pager_open", (Tcl_CmdProc*)137 },
    { "pager_close", (Tcl_CmdProc*)139 },
    { "pager_commit", (Tcl_CmdProc*)138 },
    { "pager_rollback", (Tcl_CmdProc*)135 },
    { "pager_stmt_begin", (Tcl_CmdProc*)133 },
    { "pager_stmt_commit", (Tcl_CmdProc*)132 },
    { "pager_stmt_rollback", (Tcl_CmdProc*)131 },
    { "pager_stats", (Tcl_CmdProc*)134 },
    { "pager_pagecount", (Tcl_CmdProc*)136 },
    { "page_get", (Tcl_CmdProc*)145 },
    { "page_lookup", (Tcl_CmdProc*)144 },
    { "page_unref", (Tcl_CmdProc*)141 },
    { "page_read", (Tcl_CmdProc*)142 },
    { "page_write", (Tcl_CmdProc*)140 },
    { "page_number", (Tcl_CmdProc*)143 },
    { "pager_truncate", (Tcl_CmdProc*)130 },

    { "fake_big_file", (Tcl_CmdProc*)147 },

    { "sqlite3BitvecBuiltinTest",(Tcl_CmdProc*)129 },
    { "sqlite3_test_control_pending_byte", (Tcl_CmdProc*)128 },
    { "sqlite3_test_control_fault_install", (Tcl_CmdProc*)146 },
  };
  int VAR_12;
  for(VAR_12=0; VAR_12<sizeof(VAR_11)/sizeof(VAR_11[0]); VAR_12++){
    FUNC_0(VAR_4, VAR_11[VAR_12].zName, VAR_11[VAR_12].xProc, 0, 0);
  }
  FUNC_1(VAR_4, "sqlite_io_error_pending",
     (char*)&VAR_6, VAR_0);
  FUNC_1(VAR_4, "sqlite_io_error_persist",
     (char*)&VAR_5, VAR_0);
  FUNC_1(VAR_4, "sqlite_io_error_hit",
     (char*)&VAR_7, VAR_0);
  FUNC_1(VAR_4, "sqlite_io_error_hardhit",
     (char*)&VAR_8, VAR_0);
  FUNC_1(VAR_4, "sqlite_diskfull_pending",
     (char*)&VAR_9, VAR_0);
  FUNC_1(VAR_4, "sqlite_diskfull",
     (char*)&VAR_10, VAR_0);

  FUNC_1(VAR_4, "sqlite_pending_byte",
     (char*)&VAR_3, VAR_0 | VAR_1);

  return VAR_2;
}
