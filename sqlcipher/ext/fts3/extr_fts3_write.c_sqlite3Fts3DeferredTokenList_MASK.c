
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_5__ {TYPE_1__* pList; } ;
struct TYPE_4__ {int nData; int * aData; } ;
typedef TYPE_2__ Fts3DeferredToken ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(
  Fts3DeferredToken *VAR_2,
  char **VAR_3,
  int *VAR_4
){
  char *VAR_5;
  int VAR_6;
  sqlite3_int64 VAR_7;

  *VAR_3 = 0;
  *VAR_4 = 0;

  if( VAR_2->pList==0 ){
    return VAR_1;
  }

  VAR_5 = (char *)FUNC_2(VAR_2->pList->nData);
  if( !VAR_5 ) return VAR_0;

  VAR_6 = FUNC_1(VAR_2->pList->aData, &VAR_7);
  *VAR_4 = VAR_2->pList->nData - VAR_6;
  *VAR_3 = VAR_5;

  FUNC_0(VAR_5, &VAR_2->pList->aData[VAR_6], *VAR_4);
  return VAR_1;
}
