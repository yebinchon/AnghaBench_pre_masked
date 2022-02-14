
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  int VAR_3 = FUNC_3(VAR_2[0]);
  unsigned char *VAR_4 = (unsigned char*)FUNC_2(VAR_2[0]);
  FUNC_1(VAR_0, VAR_4!=0 && VAR_3>0 && FUNC_0(VAR_4,VAR_3));
}
