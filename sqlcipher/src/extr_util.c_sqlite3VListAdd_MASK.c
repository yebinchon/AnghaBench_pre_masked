
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;
typedef int sqlite3 ;
typedef int VList ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int* FUNC_2 (int *,int*,int) ;

VList *FUNC_3(
  sqlite3 *VAR_0,
  VList *VAR_1,
  const char *VAR_2,
  int VAR_3,
  int VAR_4
){
  int VAR_5;
  char *VAR_6;
  int VAR_7;

  VAR_5 = VAR_3/4 + 3;
  FUNC_0( VAR_1==0 || VAR_1[0]>=3 );
  if( VAR_1==0 || VAR_1[1]+VAR_5 > VAR_1[0] ){

    sqlite3_int64 VAR_8 = (VAR_1 ? 2*(sqlite3_int64)VAR_1[0] : 10) + VAR_5;
    VList *VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_8*sizeof(int));
    if( VAR_9==0 ) return VAR_1;
    if( VAR_1==0 ) VAR_9[1] = 2;
    VAR_1 = VAR_9;
    VAR_1[0] = VAR_8;
  }
  VAR_7 = VAR_1[1];
  VAR_1[VAR_7] = VAR_4;
  VAR_1[VAR_7+1] = VAR_5;
  VAR_6 = (char*)&VAR_1[VAR_7+2];
  VAR_1[1] = VAR_7+VAR_5;
  FUNC_0( VAR_1[1]<=VAR_1[0] );
  FUNC_1(VAR_6, VAR_2, VAR_3);
  VAR_6[VAR_3] = 0;
  return VAR_1;
}
