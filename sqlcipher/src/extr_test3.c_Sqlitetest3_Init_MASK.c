
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aCmd ;
typedef int Tcl_Interp ;
typedef int Tcl_CmdProc ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;







 int VAR_1 ;
int FUNC_2(Tcl_Interp *VAR_2){
  static struct {
     char *zName;
     Tcl_CmdProc *xProc;
  } VAR_3[] = {
     { "btree_open", (Tcl_CmdProc*)132 },
     { "btree_close", (Tcl_CmdProc*)140 },
     { "btree_begin_transaction", (Tcl_CmdProc*)141 },
     { "btree_pager_stats", (Tcl_CmdProc*)131 },
     { "btree_cursor", (Tcl_CmdProc*)138 },
     { "btree_close_cursor", (Tcl_CmdProc*)139 },
     { "btree_next", (Tcl_CmdProc*)133 },
     { "btree_eof", (Tcl_CmdProc*)137 },
     { "btree_payload_size", (Tcl_CmdProc*)130 },
     { "btree_first", (Tcl_CmdProc*)136 },
     { "btree_varint_test", (Tcl_CmdProc*)128 },
     { "btree_from_db", (Tcl_CmdProc*)135 },
     { "btree_ismemdb", (Tcl_CmdProc*)134 },
     { "btree_set_cache_size", (Tcl_CmdProc*)129 }
  };
  int VAR_4;

  for(VAR_4=0; VAR_4<sizeof(VAR_3)/sizeof(VAR_3[0]); VAR_4++){
    FUNC_0(VAR_2, VAR_3[VAR_4].zName, VAR_3[VAR_4].xProc, 0, 0);
  }

  FUNC_1(VAR_2, "btree_insert", VAR_1, 0, 0);

  return VAR_0;
}
