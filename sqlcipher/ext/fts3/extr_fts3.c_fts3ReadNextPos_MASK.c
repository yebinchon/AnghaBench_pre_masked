
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;


 int VAR_0 ;
 int FUNC_0 (char**,int*) ;

__attribute__((used)) static void FUNC_1(
  char **VAR_1,
  sqlite3_int64 *VAR_2
){
  if( (**VAR_1)&0xFE ){
    FUNC_0(VAR_1, VAR_2);
    *VAR_2 -= 2;
  }else{
    *VAR_2 = VAR_0;
  }
}
