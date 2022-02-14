
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_7__ {scalar_t__ pWalHook; scalar_t__ pRollbackHook; scalar_t__ pUpdateHook; scalar_t__ pPreUpdateHook; int * db; } ;
typedef TYPE_1__ SqliteDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int FUNC_8 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(
  Tcl_Interp *VAR_4,
  SqliteDb *VAR_5,
  Tcl_Obj *VAR_6,
  Tcl_Obj **VAR_7
){
  sqlite3 *VAR_8 = VAR_5->db;

  if( *VAR_7 ){
    FUNC_3(VAR_4, *VAR_7);
    if( VAR_6 ){
      FUNC_0(*VAR_7);
      *VAR_7 = 0;
    }
  }
  if( VAR_6 ){
    FUNC_4( !(*VAR_7) );
    if( FUNC_1(VAR_6)>0 ){
      *VAR_7 = VAR_6;
      FUNC_2(*VAR_7);
    }
  }




  FUNC_7(VAR_8, (VAR_5->pUpdateHook?VAR_2:0), VAR_5);
  FUNC_6(VAR_8, (VAR_5->pRollbackHook?VAR_1:0), VAR_5);
  FUNC_8(VAR_8, (VAR_5->pWalHook?VAR_3:0), VAR_5);
}
