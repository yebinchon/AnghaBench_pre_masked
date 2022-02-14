
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {int pStmt; } ;
typedef TYPE_1__ fulltext_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,char const*,int,int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_2,
                          sqlite3_context *VAR_3, int VAR_4){
  fulltext_cursor *VAR_5 = (fulltext_cursor *) VAR_2;
  const char *VAR_6;

  FUNC_0( VAR_4==0 );
  VAR_6 = (const char *) FUNC_1(VAR_5->pStmt, 1);
  FUNC_2(VAR_3, VAR_6, -1, VAR_1);

  return VAR_0;
}
