
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int sqlite3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (int *,int) ;

char *FUNC_3(sqlite3 *VAR_0, const char *VAR_1, u64 VAR_2){
  char *VAR_3;
  FUNC_0( VAR_0!=0 );
  if( VAR_1==0 ){
    return 0;
  }
  FUNC_0( (VAR_2&0x7fffffff)==VAR_2 );
  VAR_3 = FUNC_2(VAR_0, VAR_2+1);
  if( VAR_3 ){
    FUNC_1(VAR_3, VAR_1, (size_t)VAR_2);
    VAR_3[VAR_2] = 0;
  }
  return VAR_3;
}
