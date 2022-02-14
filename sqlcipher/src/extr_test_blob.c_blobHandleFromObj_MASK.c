
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_blob ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
typedef int Tcl_Channel ;
typedef scalar_t__ ClientData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int *,int*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(
  Tcl_Interp *VAR_3,
  Tcl_Obj *VAR_4,
  sqlite3_blob **VAR_5
){
  char *VAR_6;
  int VAR_7;

  VAR_6 = FUNC_3(VAR_4, &VAR_7);
  if( VAR_7==0 ){
    *VAR_5 = 0;
  }else if( VAR_7>9 && 0==FUNC_5("incrblob_", VAR_6, 9) ){
    int VAR_8;
    Tcl_Channel VAR_9;
    ClientData VAR_10;

    VAR_9 = FUNC_1(VAR_3, VAR_6, &VAR_8);
    if( !VAR_9 ) return VAR_1;

    FUNC_0(VAR_9);
    FUNC_4(VAR_9, 0, VAR_0);

    VAR_10 = FUNC_2(VAR_9);
    *VAR_5 = *((sqlite3_blob **)VAR_10);
  }else{
    *VAR_5 = (sqlite3_blob*)FUNC_6(VAR_6);
  }

  return VAR_2;
}
