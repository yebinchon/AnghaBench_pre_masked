
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
 int FUNC_4 (int *,int,char const*,int,int ) ;

__attribute__((used)) static int FUNC_5(fulltext_vtab *VAR_3, const char *VAR_4, int VAR_5,
                       sqlite_int64 VAR_6, DocList *VAR_7){
  sqlite3_stmt *VAR_8;
  int VAR_9 = FUNC_0(VAR_3, VAR_2, &VAR_8);
  if( VAR_9!=VAR_0 ) return VAR_9;

  VAR_9 = FUNC_4(VAR_8, 1, VAR_4, VAR_5, VAR_1);
  if( VAR_9!=VAR_0 ) return VAR_9;

  VAR_9 = FUNC_3(VAR_8, 2, VAR_6);
  if( VAR_9!=VAR_0 ) return VAR_9;

  VAR_9 = FUNC_2(VAR_8, 3, VAR_7->pData, VAR_7->nData, VAR_1);
  if( VAR_9!=VAR_0 ) return VAR_9;

  return FUNC_1(VAR_3, VAR_2, &VAR_8);
}
