
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_8__ {scalar_t__ eContent; scalar_t__ bColumnsize; } ;
struct TYPE_7__ {TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5Config ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int **) ;
 int FUNC_2 (TYPE_1__*,int ,int **,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(Fts5Storage *VAR_4, i64 VAR_5, sqlite3_value **VAR_6){
  Fts5Config *VAR_7 = VAR_4->pConfig;
  int VAR_8;
  sqlite3_stmt *VAR_9 = 0;

  FUNC_0( VAR_7->eContent!=VAR_0 || VAR_6==0 );
  VAR_8 = FUNC_3(VAR_4, 1);


  if( VAR_8==VAR_3 ){
    VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);
  }


  if( VAR_8==VAR_3 && VAR_7->bColumnsize ){
    VAR_8 = FUNC_2(VAR_4, VAR_2, &VAR_9, 0);
    if( VAR_8==VAR_3 ){
      FUNC_4(VAR_9, 1, VAR_5);
      FUNC_6(VAR_9);
      VAR_8 = FUNC_5(VAR_9);
    }
  }


  if( VAR_7->eContent==VAR_0 ){
    if( VAR_8==VAR_3 ){
      VAR_8 = FUNC_2(VAR_4, VAR_1, &VAR_9, 0);
    }
    if( VAR_8==VAR_3 ){
      FUNC_4(VAR_9, 1, VAR_5);
      FUNC_6(VAR_9);
      VAR_8 = FUNC_5(VAR_9);
    }
  }

  return VAR_8;
}
