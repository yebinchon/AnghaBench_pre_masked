
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
struct TYPE_4__ {int bIgnoreSavepoint; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int **,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
  Fts3Table *VAR_5,
  sqlite3_int64 VAR_6
){
  int VAR_7;
  int *VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11;
  sqlite3_stmt *VAR_12 = 0;
  sqlite3_stmt *VAR_13 = 0;

  VAR_7 = FUNC_1(VAR_5, VAR_3, &VAR_12, 0);
  if( VAR_7==VAR_1 ){
    int VAR_14;
    FUNC_3(VAR_12, 1, VAR_6);
    while( VAR_2==FUNC_8(VAR_12) ){
      if( VAR_9>=VAR_10 ){
        int *VAR_15;
        VAR_10 += 16;
        VAR_15 = FUNC_6(VAR_8, VAR_10*sizeof(int));
        if( !VAR_15 ){
          VAR_7 = VAR_0;
          break;
        }
        VAR_8 = VAR_15;
      }
      VAR_8[VAR_9++] = FUNC_4(VAR_12, 0);
    }
    VAR_14 = FUNC_7(VAR_12);
    if( VAR_7==VAR_1 ) VAR_7 = VAR_14;
  }

  if( VAR_7==VAR_1 ){
    VAR_7 = FUNC_1(VAR_5, VAR_4, &VAR_13, 0);
  }
  if( VAR_7==VAR_1 ){
    FUNC_3(VAR_13, 2, VAR_6);
  }

  FUNC_0( VAR_5->bIgnoreSavepoint==0 );
  VAR_5->bIgnoreSavepoint = 1;
  for(VAR_11=0; VAR_7==VAR_1 && VAR_11<VAR_9; VAR_11++){
    if( VAR_8[VAR_11]!=VAR_11 ){
      FUNC_2(VAR_13, 3, VAR_8[VAR_11]);
      FUNC_2(VAR_13, 1, VAR_11);
      FUNC_8(VAR_13);
      VAR_7 = FUNC_7(VAR_13);
    }
  }
  VAR_5->bIgnoreSavepoint = 0;

  FUNC_5(VAR_8);
  return VAR_7;
}
