
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_4__ {int idxNum; } ;
typedef TYPE_1__ spellfix1_cursor ;


 int FUNC_0 (TYPE_1__*,int,int **) ;
 int FUNC_1 (TYPE_1__*,int,int **) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab_cursor *VAR_0,
  int VAR_1, const char *VAR_2,
  int VAR_3, sqlite3_value **VAR_4
){
  spellfix1_cursor *VAR_5 = (spellfix1_cursor *)VAR_0;
  int VAR_6;
  VAR_5->idxNum = VAR_1;
  if( VAR_1 & 1 ){
    VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
  }else{
    VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4);
  }
  return VAR_6;
}
