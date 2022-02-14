
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  FUNC_0(VAR_2);
  if( FUNC_6(VAR_3[0])!=VAR_0
   || FUNC_5(VAR_3[0])<2
  ){
    FUNC_2(VAR_1, "Invalid argument to rtreedepth()", -1);
  }else{
    u8 *VAR_4 = (u8 *)FUNC_4(VAR_3[0]);
    FUNC_3(VAR_1, FUNC_1(VAR_4));
  }
}
