
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_2__ {int * db; } ;
typedef TYPE_1__ BinfoTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3 *VAR_2,
  void *VAR_3,
  int VAR_4, const char *const*VAR_5,
  sqlite3_vtab **VAR_6,
  char **VAR_7
){
  BinfoTable *VAR_8 = 0;
  int VAR_9 = VAR_1;
  VAR_9 = FUNC_1(VAR_2,
      "CREATE TABLE x(\n"
      " type TEXT,\n"
      " name TEXT,\n"
      " tbl_name TEXT,\n"
      " rootpage INT,\n"
      " sql TEXT,\n"
      " hasRowid BOOLEAN,\n"
      " nEntry INT,\n"
      " nPage INT,\n"
      " depth INT,\n"
      " szPage INT,\n"
      " zSchema TEXT HIDDEN\n"
      ")");
  if( VAR_9==VAR_1 ){
    VAR_8 = (BinfoTable *)FUNC_2(sizeof(BinfoTable));
    if( VAR_8==0 ) VAR_9 = VAR_0;
  }
  FUNC_0( VAR_9==VAR_1 || VAR_8==0 );
  if( VAR_8 ){
    VAR_8->db = VAR_2;
  }
  *VAR_6 = (sqlite3_vtab*)VAR_8;
  return VAR_9;
}
