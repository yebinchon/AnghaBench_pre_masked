
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_module ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
  const sqlite3_module *VAR_3,
  sqlite3_module **VAR_4
){
  sqlite3_module *VAR_5;
  if( !VAR_3 || !VAR_4 ) return VAR_0;
  VAR_5 = FUNC_1( sizeof(*VAR_5) );
  if( VAR_5==0 ) return VAR_1;
  FUNC_0(VAR_5, VAR_3, sizeof(*VAR_5));
  *VAR_4 = VAR_5;
  return VAR_2;
}
