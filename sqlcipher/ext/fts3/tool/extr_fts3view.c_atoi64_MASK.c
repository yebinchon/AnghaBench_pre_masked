
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;



__attribute__((used)) static sqlite3_int64 FUNC_0(const char *VAR_0){
  sqlite3_int64 VAR_1 = 0;
  while( VAR_0[0]>='0' && VAR_0[0]<='9' ){
     VAR_1 = VAR_1*10 + VAR_0[0] - '0';
     VAR_0++;
  }
  return VAR_1;
}
