
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  sqlite3_int64 VAR_3, VAR_4[63];
  int VAR_5, VAR_6;
  VAR_3 = 0;
  for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
    VAR_4[VAR_5] = FUNC_2(VAR_2[VAR_5]);
  }
  if( VAR_1>0 ){
    for(VAR_5=0; VAR_5<63; VAR_5++){
      VAR_6 = VAR_5%VAR_1;
      VAR_3 |= (VAR_4[VAR_6]&1)<<VAR_5;
      VAR_4[VAR_6] >>= 1;
    }
  }
  FUNC_1(VAR_0, VAR_3);
  for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
    if( VAR_4[VAR_5] ){
      FUNC_0(VAR_0, "parameter too large", -1);
    }
  }
}
