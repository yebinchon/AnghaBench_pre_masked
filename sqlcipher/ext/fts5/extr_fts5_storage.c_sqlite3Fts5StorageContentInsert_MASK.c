
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_7__ {scalar_t__ eContent; int nCol; int db; } ;
struct TYPE_6__ {TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5Config ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int **,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

int FUNC_8(
  Fts5Storage *VAR_4,
  sqlite3_value **VAR_5,
  i64 *VAR_6
){
  Fts5Config *VAR_7 = VAR_4->pConfig;
  int VAR_8 = VAR_3;


  if( VAR_7->eContent!=VAR_0 ){
    if( FUNC_7(VAR_5[1])==VAR_2 ){
      *VAR_6 = FUNC_6(VAR_5[1]);
    }else{
      VAR_8 = FUNC_1(VAR_4, VAR_6);
    }
  }else{
    sqlite3_stmt *VAR_9 = 0;
    int VAR_10;
    VAR_8 = FUNC_0(VAR_4, VAR_1, &VAR_9, 0);
    for(VAR_10=1; VAR_8==VAR_3 && VAR_10<=VAR_7->nCol+1; VAR_10++){
      VAR_8 = FUNC_2(VAR_9, VAR_10, VAR_5[VAR_10]);
    }
    if( VAR_8==VAR_3 ){
      FUNC_5(VAR_9);
      VAR_8 = FUNC_4(VAR_9);
    }
    *VAR_6 = FUNC_3(VAR_7->db);
  }

  return VAR_8;
}
