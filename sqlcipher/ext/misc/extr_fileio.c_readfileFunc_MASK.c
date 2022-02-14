
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const char *VAR_3;
  (void)(VAR_1);
  VAR_3 = (const char*)FUNC_1(VAR_2[0]);
  if( VAR_3==0 ) return;
  FUNC_0(VAR_0, VAR_3);
}
