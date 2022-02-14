
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {TYPE_3__* pFS; } ;
typedef TYPE_1__ lsm_db ;
typedef scalar_t__ i64 ;
struct TYPE_11__ {scalar_t__ nMapLimit; scalar_t__ pMap; } ;
struct TYPE_10__ {int * aData; } ;
typedef TYPE_2__ MetaPage ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int*) ;
 int FUNC_2 (TYPE_3__*,int ,int,TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;

int FUNC_5(lsm_db *VAR_2, int VAR_3, i64 *VAR_4){
  FileSystem *VAR_5 = VAR_2->pFS;
  int VAR_6 = VAR_1;

  FUNC_0( VAR_3==1 || VAR_3==2 );
  if( VAR_5->nMapLimit>0 ){
    FUNC_1(VAR_5, VAR_3*VAR_0, &VAR_6);
    if( VAR_6==VAR_1 ){
      *VAR_4 = (i64)FUNC_4(&((u8 *)VAR_5->pMap)[(VAR_3-1)*VAR_0]);
    }
  }else{
    MetaPage *VAR_7 = 0;
    VAR_6 = FUNC_2(VAR_5, 0, VAR_3, &VAR_7);
    if( VAR_6==VAR_1 ){
      *VAR_4 = (i64)FUNC_4(VAR_7->aData);
      FUNC_3(VAR_7);
    }
  }

  return VAR_6;
}
