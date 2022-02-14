
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(
  sqlite3 *VAR_2,
  void *VAR_3,
  int VAR_4, const char *const*VAR_5,
  sqlite3_vtab **VAR_6,
  char **VAR_7
){
  sqlite3_vtab *VAR_8;
  int VAR_9;
  FUNC_0(VAR_7);
  FUNC_0(VAR_5);
  FUNC_0(VAR_4);
  FUNC_0(VAR_3);
  VAR_9 = FUNC_2(VAR_2,
     "CREATE TABLE x(key,value,type,atom,id,parent,fullkey,path,"
                    "json HIDDEN,root HIDDEN)");
  if( VAR_9==VAR_1 ){
    VAR_8 = *VAR_6 = FUNC_3( sizeof(*VAR_8) );
    if( VAR_8==0 ) return VAR_0;
    FUNC_1(VAR_8, 0, sizeof(*VAR_8));
  }
  return VAR_9;
}
