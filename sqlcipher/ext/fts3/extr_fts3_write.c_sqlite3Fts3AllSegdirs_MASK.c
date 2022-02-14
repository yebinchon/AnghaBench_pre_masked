
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {int nIndex; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int **,int ) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (int *,int,int ) ;

int FUNC_4(
  Fts3Table *VAR_5,
  int VAR_6,
  int VAR_7,
  int VAR_8,
  sqlite3_stmt **VAR_9
){
  int VAR_10;
  sqlite3_stmt *VAR_11 = 0;

  FUNC_0( VAR_8==VAR_0 || VAR_8>=0 );
  FUNC_0( VAR_8<VAR_1 );
  FUNC_0( VAR_7>=0 && VAR_7<VAR_5->nIndex );

  if( VAR_8<0 ){

    VAR_10 = FUNC_1(VAR_5, VAR_4, &VAR_11, 0);
    if( VAR_10==VAR_2 ){
      FUNC_3(VAR_11, 1, FUNC_2(VAR_5, VAR_6, VAR_7, 0));
      FUNC_3(VAR_11, 2,
          FUNC_2(VAR_5, VAR_6, VAR_7, VAR_1-1)
      );
    }
  }else{

    VAR_10 = FUNC_1(VAR_5, VAR_3, &VAR_11, 0);
    if( VAR_10==VAR_2 ){
      FUNC_3(VAR_11, 1, FUNC_2(VAR_5, VAR_6, VAR_7,VAR_8));
    }
  }
  *VAR_9 = VAR_11;
  return VAR_10;
}
