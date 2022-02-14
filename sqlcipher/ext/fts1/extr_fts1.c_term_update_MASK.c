
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;
struct TYPE_3__ {int nData; int pData; } ;
typedef TYPE_1__ DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,int,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static int FUNC_4(fulltext_vtab *VAR_3, sqlite_int64 VAR_4,
                       DocList *VAR_5){
  sqlite3_stmt *VAR_6;
  int VAR_7 = FUNC_0(VAR_3, VAR_2, &VAR_6);
  if( VAR_7!=VAR_0 ) return VAR_7;

  VAR_7 = FUNC_2(VAR_6, 1, VAR_5->pData, VAR_5->nData, VAR_1);
  if( VAR_7!=VAR_0 ) return VAR_7;

  VAR_7 = FUNC_3(VAR_6, 2, VAR_4);
  if( VAR_7!=VAR_0 ) return VAR_7;

  return FUNC_1(VAR_3, VAR_2, &VAR_6);
}
