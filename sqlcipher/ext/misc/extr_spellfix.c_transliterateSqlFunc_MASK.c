
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *) ;
 unsigned char* FUNC_3 (int *) ;
 unsigned char* FUNC_4 (unsigned char const*,int) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const unsigned char *VAR_4 = FUNC_3(VAR_3[0]);
  int VAR_5 = FUNC_2(VAR_3[0]);
  unsigned char *VAR_6 = FUNC_4(VAR_4, VAR_5);
  if( VAR_6==0 ){
    FUNC_0(VAR_1);
  }else{
    FUNC_1(VAR_1, (char*)VAR_6, -1, VAR_0);
  }
}
