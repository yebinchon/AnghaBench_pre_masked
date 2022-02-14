
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_2__ {char* zTableName; int zDbName; int * db; } ;
typedef TYPE_1__ spellfix1_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *,char*,int ,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_2, const char *VAR_3){
  spellfix1_vtab *VAR_4 = (spellfix1_vtab*)VAR_2;
  sqlite3 *VAR_5 = VAR_4->db;
  int VAR_6 = VAR_1;
  char *VAR_7 = FUNC_2("%s", VAR_3);
  if( VAR_7==0 ){
    return VAR_0;
  }
  FUNC_0(&VAR_6, VAR_5,
     "ALTER TABLE \"%w\".\"%w_vocab\" RENAME TO \"%w_vocab\"",
     VAR_4->zDbName, VAR_4->zTableName, VAR_7
  );
  if( VAR_6==VAR_1 ){
    FUNC_1(VAR_4->zTableName);
    VAR_4->zTableName = VAR_7;
  }else{
    FUNC_1(VAR_7);
  }
  return VAR_6;
}
