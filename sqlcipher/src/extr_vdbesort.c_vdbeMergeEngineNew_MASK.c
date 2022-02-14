
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nTree; int* aTree; int * aReadr; scalar_t__ pTask; } ;
typedef int PmaReader ;
typedef TYPE_1__ MergeEngine ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static MergeEngine *FUNC_3(int VAR_1){
  int VAR_2 = 2;
  int VAR_3;
  MergeEngine *VAR_4;

  FUNC_0( VAR_1<=VAR_0 );

  while( VAR_2<VAR_1 ) VAR_2 += VAR_2;
  VAR_3 = sizeof(MergeEngine) + VAR_2 * (sizeof(int) + sizeof(PmaReader));

  VAR_4 = FUNC_1(100) ? 0 : (MergeEngine*)FUNC_2(VAR_3);
  if( VAR_4 ){
    VAR_4->nTree = VAR_2;
    VAR_4->pTask = 0;
    VAR_4->aReadr = (PmaReader*)&VAR_4[1];
    VAR_4->aTree = (int*)&VAR_4->aReadr[VAR_2];
  }
  return VAR_4;
}
