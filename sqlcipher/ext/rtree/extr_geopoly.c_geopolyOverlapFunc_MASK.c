
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int GeoPoly ;


 int * FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  GeoPoly *VAR_3 = FUNC_0(VAR_0, VAR_2[0], 0);
  GeoPoly *VAR_4 = FUNC_0(VAR_0, VAR_2[1], 0);
  if( VAR_3 && VAR_4 ){
    int VAR_5 = FUNC_1(VAR_3, VAR_4);
    if( VAR_5<0 ){
      FUNC_3(VAR_0);
    }else{
      FUNC_4(VAR_0, VAR_5);
    }
  }
  FUNC_2(VAR_3);
  FUNC_2(VAR_4);
}
