
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pFS; } ;
typedef TYPE_1__ lsm_db ;
typedef scalar_t__ i64 ;
typedef int MetaPage ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int,int*) ;
 int FUNC_3 (int ,int ,int,int **) ;
 int FUNC_4 (int *) ;

int FUNC_5(lsm_db *VAR_1){
  int VAR_2 = VAR_0;
  i64 VAR_3;
  i64 VAR_4;
  int VAR_5 = 0;
  int VAR_6;
  MetaPage *VAR_7[2] = {0, 0};

  VAR_2 = FUNC_3(VAR_1->pFS, 0, 1, &VAR_7[0]);
  if( VAR_2==VAR_0 ) VAR_2 = FUNC_3(VAR_1->pFS, 0, 2, &VAR_7[1]);

  VAR_3 = FUNC_1(VAR_7[0]);
  VAR_4 = FUNC_1(VAR_7[1]);
  VAR_6 = (VAR_4 > VAR_3);
  VAR_5 = FUNC_2(VAR_1, VAR_7[VAR_6?1:0], (VAR_6?2:1), &VAR_2);
  if( VAR_5==0 ){
    VAR_5 = FUNC_2(VAR_1, VAR_7[VAR_6?0:1], (VAR_6?1:2), &VAR_2);
  }



  if( VAR_5==0 ){
    FUNC_0(VAR_1);
  }

  FUNC_4(VAR_7[0]);
  FUNC_4(VAR_7[1]);

  return VAR_2;
}
