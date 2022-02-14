
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_value ;
struct TYPE_7__ {int nColumn; scalar_t__ zContentTbl; scalar_t__ bHasDocsize; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int*,TYPE_1__*,int *,int *,int*) ;
 int FUNC_2 (TYPE_1__*,int *,int*) ;
 int FUNC_3 (int*,TYPE_1__*,int ,int **) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(
  Fts3Table *VAR_3,
  sqlite3_value *VAR_4,
  int *VAR_5,
  u32 *VAR_6
){
  int VAR_7 = VAR_0;
  int VAR_8 = 0;

  FUNC_1(&VAR_7, VAR_3, VAR_4, VAR_6, &VAR_8);
  if( VAR_8 && VAR_7==VAR_0 ){
    int VAR_9 = 0;
    VAR_7 = FUNC_2(VAR_3, VAR_4, &VAR_9);
    if( VAR_7==VAR_0 ){
      if( VAR_9 ){



        VAR_7 = FUNC_0(VAR_3, 1);
        *VAR_5 = 0;
        FUNC_4(VAR_6, 0, sizeof(u32) * (VAR_3->nColumn+1) * 2);
      }else{
        *VAR_5 = *VAR_5 - 1;
        if( VAR_3->zContentTbl==0 ){
          FUNC_3(&VAR_7, VAR_3, VAR_1, &VAR_4);
        }
        if( VAR_3->bHasDocsize ){
          FUNC_3(&VAR_7, VAR_3, VAR_2, &VAR_4);
        }
      }
    }
  }

  return VAR_7;
}
