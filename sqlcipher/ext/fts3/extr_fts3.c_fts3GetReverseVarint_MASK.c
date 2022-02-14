
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;


 int FUNC_0 (char*,int *) ;

__attribute__((used)) static void FUNC_1(
  char **VAR_0,
  char *VAR_1,
  sqlite3_int64 *VAR_2
){
  sqlite3_int64 VAR_3;
  char *VAR_4;




  for(VAR_4 = (*VAR_0)-2; VAR_4>=VAR_1 && *VAR_4&0x80; VAR_4--);
  VAR_4++;
  *VAR_0 = VAR_4;

  FUNC_0(VAR_4, &VAR_3);
  *VAR_2 = VAR_3;
}
