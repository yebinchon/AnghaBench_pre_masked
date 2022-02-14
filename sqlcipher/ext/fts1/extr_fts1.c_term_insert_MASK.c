
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
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,char const*,int,int ) ;

__attribute__((used)) static int FUNC_7(fulltext_vtab *VAR_3, sqlite_int64 *VAR_4,
                       const char *VAR_5, int VAR_6,
                       int VAR_7, DocList *VAR_8){
  sqlite3_stmt *VAR_9;
  int VAR_10 = FUNC_0(VAR_3, VAR_2, &VAR_9);
  if( VAR_10!=VAR_0 ) return VAR_10;

  if( VAR_4==((void*)0) ){
    VAR_10 = FUNC_5(VAR_9, 1);
  }else{
    VAR_10 = FUNC_4(VAR_9, 1, *VAR_4);
  }
  if( VAR_10!=VAR_0 ) return VAR_10;

  VAR_10 = FUNC_6(VAR_9, 2, VAR_5, VAR_6, VAR_1);
  if( VAR_10!=VAR_0 ) return VAR_10;

  VAR_10 = FUNC_3(VAR_9, 3, VAR_7);
  if( VAR_10!=VAR_0 ) return VAR_10;

  VAR_10 = FUNC_2(VAR_9, 4, VAR_8->pData, VAR_8->nData, VAR_1);
  if( VAR_10!=VAR_0 ) return VAR_10;

  return FUNC_1(VAR_3, VAR_2, &VAR_9);
}
