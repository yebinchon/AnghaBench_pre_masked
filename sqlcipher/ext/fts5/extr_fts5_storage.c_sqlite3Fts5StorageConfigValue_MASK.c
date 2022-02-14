
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
struct TYPE_6__ {TYPE_1__* pConfig; int pIndex; } ;
struct TYPE_5__ {int iCookie; } ;
typedef TYPE_2__ Fts5Storage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int **,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,char const*,int,int ) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(
  Fts5Storage *VAR_3,
  const char *VAR_4,
  sqlite3_value *VAR_5,
  int VAR_6
){
  sqlite3_stmt *VAR_7 = 0;
  int VAR_8 = FUNC_0(VAR_3, VAR_0, &VAR_7, 0);
  if( VAR_8==VAR_1 ){
    FUNC_4(VAR_7, 1, VAR_4, -1, VAR_2);
    if( VAR_5 ){
      FUNC_5(VAR_7, 2, VAR_5);
    }else{
      FUNC_2(VAR_7, 2, VAR_6);
    }
    FUNC_7(VAR_7);
    VAR_8 = FUNC_6(VAR_7);
    FUNC_3(VAR_7, 1);
  }
  if( VAR_8==VAR_1 && VAR_5 ){
    int VAR_9 = VAR_3->pConfig->iCookie + 1;
    VAR_8 = FUNC_1(VAR_3->pIndex, VAR_9);
    if( VAR_8==VAR_1 ){
      VAR_3->pConfig->iCookie = VAR_9;
    }
  }
  return VAR_8;
}
