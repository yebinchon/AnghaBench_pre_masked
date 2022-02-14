
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_6__ {TYPE_1__* pConfig; } ;
struct TYPE_5__ {int nCol; int bColumnsize; } ;
typedef TYPE_2__ Fts5Storage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*,int,int const*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int **,int ) ;
 int FUNC_3 (int *,int,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

int FUNC_8(Fts5Storage *VAR_4, i64 VAR_5, int *VAR_6){
  int VAR_7 = VAR_4->pConfig->nCol;
  sqlite3_stmt *VAR_8 = 0;
  int VAR_9;

  FUNC_0( VAR_4->pConfig->bColumnsize );
  VAR_9 = FUNC_2(VAR_4, VAR_1, &VAR_8, 0);
  if( VAR_9==VAR_2 ){
    int VAR_10 = 1;
    FUNC_3(VAR_8, 1, VAR_5);
    if( VAR_3==FUNC_7(VAR_8) ){
      const u8 *VAR_11 = FUNC_4(VAR_8, 0);
      int VAR_12 = FUNC_5(VAR_8, 0);
      if( 0==FUNC_1(VAR_6, VAR_7, VAR_11, VAR_12) ){
        VAR_10 = 0;
      }
    }
    VAR_9 = FUNC_6(VAR_8);
    if( VAR_10 && VAR_9==VAR_2 ){
      VAR_9 = VAR_0;
    }
  }

  return VAR_9;
}
