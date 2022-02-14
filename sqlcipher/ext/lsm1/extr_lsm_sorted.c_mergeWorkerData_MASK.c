
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int iOutputOff; } ;
struct TYPE_7__ {int pPage; TYPE_1__* pLevel; } ;
struct TYPE_6__ {TYPE_3__* pMerge; } ;
typedef TYPE_2__ MergeWorker ;
typedef TYPE_3__ Merge ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(
  MergeWorker *VAR_1,
  int VAR_2,
  int VAR_3,
  u8 *VAR_4,
  int VAR_5
){
  int VAR_6 = VAR_0;
  int VAR_7 = VAR_5;

  while( VAR_6==VAR_0 && VAR_7>0 ){
    Merge *VAR_8 = VAR_1->pLevel->pMerge;
    int VAR_9;
    u8 *VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;

    FUNC_2( FUNC_4(VAR_1->pPage) );

    VAR_10 = FUNC_3(VAR_1->pPage, &VAR_11);
    VAR_12 = FUNC_7(VAR_10, VAR_11);
    VAR_13 = VAR_8->iOutputOff;
    VAR_9 = FUNC_0(VAR_7, FUNC_1(VAR_11, VAR_12) - VAR_13);

    FUNC_5(&VAR_10[VAR_13], &VAR_4[VAR_5-VAR_7], VAR_9);
    VAR_7 -= VAR_9;

    if( VAR_7>0 ){
      VAR_6 = FUNC_6(VAR_1, VAR_3);
    }else{
      VAR_8->iOutputOff = VAR_13 + VAR_9;
    }
  }

  return VAR_6;
}
