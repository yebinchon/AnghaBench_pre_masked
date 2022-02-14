
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const u8 *VAR_3;
  int VAR_4;
  int VAR_5 = 0;
  u32 VAR_6 = 0;

  if( VAR_1!=1 && VAR_1!=2 ){
    FUNC_1(
        VAR_0, "wrong number of arguments to function sqlite_readint32()", -1
    );
    return;
  }
  if( VAR_1==2 ){
    VAR_5 = FUNC_5(VAR_2[1]);
  }

  VAR_3 = FUNC_3(VAR_2[0]);
  VAR_4 = FUNC_4(VAR_2[0]);

  if( VAR_4>=(VAR_5+4) ){
    VAR_6 = FUNC_0(&VAR_3[VAR_5]);
  }

  FUNC_2(VAR_0, (sqlite3_int64)VAR_6);
}
