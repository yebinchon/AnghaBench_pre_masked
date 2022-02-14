
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int maxStmt; int db; scalar_t__ bLegacyPrepare; } ;
typedef TYPE_1__ SqliteDb ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char const*,int,int **,char const**) ;
 int FUNC_1 (int ,char const*,int,unsigned int,int **,char const**) ;

__attribute__((used)) static int FUNC_2(
  SqliteDb *VAR_1,
  const char *VAR_2,
  sqlite3_stmt **VAR_3,
  const char **VAR_4
){
  unsigned int VAR_5 = 0;
  if( VAR_1->maxStmt>5 ) VAR_5 = VAR_0;

  return FUNC_1(VAR_1->db, VAR_2, -1, VAR_5, VAR_3, VAR_4);
}
