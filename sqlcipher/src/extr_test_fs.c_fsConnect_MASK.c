
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_2__ {char* zTbl; char* zDb; int base; int * db; } ;
typedef TYPE_1__ fs_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5, const char *const*VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8
){
  fs_vtab *VAR_9;
  int VAR_10;
  const char *VAR_11;
  const char *VAR_12 = VAR_6[1];

  if( VAR_5!=4 ){
    *VAR_8 = FUNC_3("wrong number of arguments");
    return VAR_0;
  }
  VAR_11 = VAR_6[3];

  VAR_10 = sizeof(fs_vtab) + (int)FUNC_4(VAR_11) + 1 + (int)FUNC_4(VAR_12) + 1;
  VAR_9 = (fs_vtab *)FUNC_1( VAR_10 );
  if( !VAR_9 ) return VAR_1;

  VAR_9->zTbl = (char *)&VAR_9[1];
  VAR_9->zDb = &VAR_9->zTbl[FUNC_4(VAR_11)+1];
  VAR_9->db = VAR_3;
  FUNC_0(VAR_9->zTbl, VAR_11, FUNC_4(VAR_11));
  FUNC_0(VAR_9->zDb, VAR_12, FUNC_4(VAR_12));
  *VAR_7 = &VAR_9->base;
  FUNC_2(VAR_3, "CREATE TABLE x(path TEXT, data TEXT)");

  return VAR_2;
}
