
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_10__ {scalar_t__ bEof; int iStartOff; int * aFile; int pTask; } ;
struct TYPE_9__ {scalar_t__ iReadOff; scalar_t__ iEof; int nKey; int aKey; TYPE_2__* pIncr; } ;
typedef TYPE_1__ PmaReader ;
typedef TYPE_2__ IncrMerger ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_6(PmaReader *VAR_1){
  int VAR_2 = VAR_0;
  u64 VAR_3 = 0;


  if( VAR_1->iReadOff>=VAR_1->iEof ){
    IncrMerger *VAR_4 = VAR_1->pIncr;
    int VAR_5 = 1;
    if( VAR_4 ){
      VAR_2 = FUNC_1(VAR_4);
      if( VAR_2==VAR_0 && VAR_4->bEof==0 ){
        VAR_2 = FUNC_5(
            VAR_4->pTask, VAR_1, &VAR_4->aFile[0], VAR_4->iStartOff
        );
        VAR_5 = 0;
      }
    }

    if( VAR_5 ){

      FUNC_4(VAR_1);
      FUNC_0( VAR_2!=VAR_0 );
      return VAR_2;
    }
  }

  if( VAR_2==VAR_0 ){
    VAR_2 = FUNC_3(VAR_1, &VAR_3);
  }
  if( VAR_2==VAR_0 ){
    VAR_1->nKey = (int)VAR_3;
    VAR_2 = FUNC_2(VAR_1, (int)VAR_3, &VAR_1->aKey);
    FUNC_0( VAR_2!=VAR_0 );
  }

  return VAR_2;
}
