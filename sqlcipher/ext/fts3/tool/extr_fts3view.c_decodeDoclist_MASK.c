
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;


 scalar_t__ FUNC_0 (unsigned char const*,int*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(
  const unsigned char *VAR_0,
  int VAR_1
){
  sqlite3_int64 VAR_2 = 0;
  sqlite3_int64 VAR_3;
  sqlite3_int64 VAR_4;
  sqlite3_int64 VAR_5 = 0;
  sqlite3_int64 VAR_6;
  int VAR_7 = 0;

  while( VAR_7<VAR_1 ){
    VAR_7 += FUNC_0(VAR_0+VAR_7, &VAR_3);
    FUNC_1("docid %lld col0", VAR_3+VAR_2);
    VAR_2 += VAR_3;
    VAR_5 = 0;
    while( 1 ){
      VAR_7 += FUNC_0(VAR_0+VAR_7, &VAR_4);
      if( VAR_4==1 ){
        VAR_7 += FUNC_0(VAR_0+VAR_7, &VAR_6);
        FUNC_1(" col%lld", VAR_6);
        VAR_5 = 0;
      }else if( VAR_4==0 ){
        FUNC_1("\n");
        break;
      }else{
        VAR_5 += VAR_4 - 2;
        FUNC_1(" %lld", VAR_5);
      }
    }
  }
}
