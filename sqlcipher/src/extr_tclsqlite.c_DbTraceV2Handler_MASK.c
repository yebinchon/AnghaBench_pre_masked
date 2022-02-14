
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;
typedef int Tcl_WideInt ;
typedef int Tcl_Obj ;
struct TYPE_2__ {char* zTraceV2; int interp; } ;
typedef TYPE_1__ SqliteDb ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int * FUNC_4 (char*,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(
  unsigned VAR_2,
  void *VAR_3,
  void *VAR_4,
  void *VAR_5
){
  SqliteDb *VAR_6 = (SqliteDb*)VAR_3;
  Tcl_Obj *VAR_7;

  switch( VAR_2 ){
    case 128: {
      sqlite3_stmt *VAR_8 = (sqlite3_stmt *)VAR_4;
      char *VAR_9 = (char *)VAR_5;

      VAR_7 = FUNC_4(VAR_6->zTraceV2, -1);
      FUNC_2(VAR_7);
      FUNC_3(VAR_6->interp, VAR_7,
                               FUNC_5((Tcl_WideInt)VAR_8));
      FUNC_3(VAR_6->interp, VAR_7,
                               FUNC_4(VAR_9, -1));
      FUNC_1(VAR_6->interp, VAR_7, VAR_1);
      FUNC_0(VAR_7);
      FUNC_6(VAR_6->interp);
      break;
    }
    case 130: {
      sqlite3_stmt *VAR_10 = (sqlite3_stmt *)VAR_4;
      sqlite3_int64 VAR_11 = *(sqlite3_int64*)VAR_5;

      VAR_7 = FUNC_4(VAR_6->zTraceV2, -1);
      FUNC_2(VAR_7);
      FUNC_3(VAR_6->interp, VAR_7,
                               FUNC_5((Tcl_WideInt)VAR_10));
      FUNC_3(VAR_6->interp, VAR_7,
                               FUNC_5((Tcl_WideInt)VAR_11));
      FUNC_1(VAR_6->interp, VAR_7, VAR_1);
      FUNC_0(VAR_7);
      FUNC_6(VAR_6->interp);
      break;
    }
    case 129: {
      sqlite3_stmt *VAR_12 = (sqlite3_stmt *)VAR_4;

      VAR_7 = FUNC_4(VAR_6->zTraceV2, -1);
      FUNC_2(VAR_7);
      FUNC_3(VAR_6->interp, VAR_7,
                               FUNC_5((Tcl_WideInt)VAR_12));
      FUNC_1(VAR_6->interp, VAR_7, VAR_1);
      FUNC_0(VAR_7);
      FUNC_6(VAR_6->interp);
      break;
    }
    case 131: {
      sqlite3 *VAR_13 = (sqlite3 *)VAR_4;

      VAR_7 = FUNC_4(VAR_6->zTraceV2, -1);
      FUNC_2(VAR_7);
      FUNC_3(VAR_6->interp, VAR_7,
                               FUNC_5((Tcl_WideInt)VAR_13));
      FUNC_1(VAR_6->interp, VAR_7, VAR_1);
      FUNC_0(VAR_7);
      FUNC_6(VAR_6->interp);
      break;
    }
  }
  return VAR_0;
}
