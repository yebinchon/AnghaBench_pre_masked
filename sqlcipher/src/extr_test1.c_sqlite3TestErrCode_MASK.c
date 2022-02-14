
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zBuf ;
typedef int sqlite3 ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,char*,int ,int,int ,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;

int FUNC_6(Tcl_Interp *VAR_2, sqlite3 *VAR_3, int VAR_4){
  if( FUNC_4()==0 && VAR_4!=VAR_0 && VAR_4!=VAR_1
   && FUNC_2(VAR_3)!=VAR_4 ){
    char VAR_5[200];
    int VAR_6 = FUNC_2(VAR_3);
    FUNC_3(sizeof(VAR_5), VAR_5,
       "error code %s (%d) does not match sqlite3_errcode %s (%d)",
       FUNC_5(VAR_4), VAR_4, FUNC_5(VAR_6), VAR_6);
    FUNC_1(VAR_2);
    FUNC_0(VAR_2, VAR_5, 0);
    return 1;
  }
  return 0;
}
