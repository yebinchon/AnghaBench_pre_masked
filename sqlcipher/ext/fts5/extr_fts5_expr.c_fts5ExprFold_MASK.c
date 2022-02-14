
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  if( VAR_1!=1 && VAR_1!=2 ){
    FUNC_1(VAR_0,
        "wrong number of arguments to function fts5_fold", -1
    );
  }else{
    int VAR_3;
    int VAR_4 = 0;
    VAR_3 = FUNC_3(VAR_2[0]);
    if( VAR_1==2 ) VAR_4 = FUNC_3(VAR_2[1]);
    FUNC_2(VAR_0, FUNC_0(VAR_3, VAR_4));
  }
}
