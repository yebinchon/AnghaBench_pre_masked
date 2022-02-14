
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {int pExplain; int zSql; } ;
typedef TYPE_1__ explain_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab_cursor *VAR_3,
  sqlite3_context *VAR_4,
  int VAR_5
){
  explain_cursor *VAR_6 = (explain_cursor*)VAR_3;
  if( VAR_5==VAR_0 ){
    FUNC_1(VAR_4, VAR_6->zSql, -1, VAR_2);
  }else{
    FUNC_2(VAR_4, FUNC_0(VAR_6->pExplain, VAR_5));
  }
  return VAR_1;
}
