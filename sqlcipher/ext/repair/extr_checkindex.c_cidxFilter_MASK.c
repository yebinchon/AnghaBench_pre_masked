
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_4__ {int iRowid; scalar_t__ pStmt; int zAfterKey; int zIdxName; } ;
typedef TYPE_1__ CidxCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,char const*,char**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int*,TYPE_1__*,char*,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  int VAR_6 = VAR_0;
  CidxCursor *VAR_7 = (CidxCursor*)VAR_1;
  const char *VAR_8 = 0;
  const char *VAR_9 = 0;

  FUNC_5(VAR_7->zIdxName);
  VAR_7->zIdxName = 0;
  FUNC_5(VAR_7->zAfterKey);
  VAR_7->zAfterKey = 0;
  FUNC_4(VAR_7->pStmt);
  VAR_7->pStmt = 0;

  if( VAR_4>0 ){
    VAR_8 = (const char*)FUNC_7(VAR_5[0]);
    if( VAR_4>1 ){
      VAR_9 = (const char*)FUNC_7(VAR_5[1]);
    }
  }

  if( VAR_8 ){
    char *VAR_10 = 0;
    VAR_7->zIdxName = FUNC_6("%s", VAR_8);
    VAR_7->zAfterKey = VAR_9 ? FUNC_6("%s", VAR_9) : 0;
    VAR_6 = FUNC_1(VAR_7, VAR_8, VAR_9, &VAR_10);
    if( VAR_10 ){
      VAR_7->pStmt = FUNC_3(&VAR_6, VAR_7, "%z", VAR_10);
    }
  }

  if( VAR_7->pStmt ){
    FUNC_0( VAR_6==VAR_0 );
    VAR_6 = FUNC_2(VAR_1);
  }
  VAR_7->iRowid = 1;
  return VAR_6;
}
