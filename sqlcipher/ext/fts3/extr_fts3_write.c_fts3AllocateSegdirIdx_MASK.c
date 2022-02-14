
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_6__ {int nIndex; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int **,int ) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
  Fts3Table *VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7,
  int *VAR_8
){
  int VAR_9;
  sqlite3_stmt *VAR_10;
  int VAR_11 = 0;

  FUNC_0( VAR_5>=0 );
  FUNC_0( VAR_4->nIndex>=1 );


  VAR_9 = FUNC_3(VAR_4, VAR_3, &VAR_10, 0);
  if( VAR_9==VAR_1 ){
    FUNC_5(
        VAR_10, 1, FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7)
    );
    if( VAR_2==FUNC_8(VAR_10) ){
      VAR_11 = FUNC_6(VAR_10, 0);
    }
    VAR_9 = FUNC_7(VAR_10);
  }

  if( VAR_9==VAR_1 ){





    if( VAR_11>=VAR_0 ){
      FUNC_1(16, FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7));
      VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
      *VAR_8 = 0;
    }else{
      *VAR_8 = VAR_11;
    }
  }

  return VAR_9;
}
