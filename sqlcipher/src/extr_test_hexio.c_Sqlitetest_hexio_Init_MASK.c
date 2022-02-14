
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aObjCmd ;
typedef int Tcl_ObjCmdProc ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;
int FUNC_1(Tcl_Interp *VAR_1){
  static struct {
     char *zName;
     Tcl_ObjCmdProc *xProc;
  } VAR_2[] = {
     { "hexio_read", 133 },
     { "hexio_write", 130 },
     { "hexio_get_int", 134 },
     { "hexio_render_int16", 132 },
     { "hexio_render_int32", 131 },
     { "utf8_to_utf8", 128 },
     { "read_fts3varint", 129 },
  };
  int VAR_3;
  for(VAR_3=0; VAR_3<sizeof(VAR_2)/sizeof(VAR_2[0]); VAR_3++){
    FUNC_0(VAR_1, VAR_2[VAR_3].zName, VAR_2[VAR_3].xProc, 0, 0);
  }
  return VAR_0;
}
