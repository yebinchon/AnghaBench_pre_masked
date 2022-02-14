
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nColumn; scalar_t__ idxType; int* aiColumn; int * azColl; TYPE_1__* pTable; int nKeyCol; } ;
struct TYPE_5__ {int tabFlags; } ;
typedef TYPE_2__ Index ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(Index *VAR_4, int VAR_5, Index *VAR_6, int VAR_7){
  int VAR_8, VAR_9;
  FUNC_1( VAR_5<=VAR_4->nColumn );
  FUNC_1( VAR_7<FUNC_0(VAR_6->nColumn,VAR_6->nKeyCol) );
  FUNC_1( VAR_6->idxType==VAR_0 );
  FUNC_1( VAR_6->pTable->tabFlags & VAR_1 );
  FUNC_1( VAR_6->pTable==VAR_4->pTable );
  FUNC_3( VAR_6==VAR_4 );
  VAR_9 = VAR_6->aiColumn[VAR_7];
  FUNC_1( VAR_9!=VAR_3 && VAR_9!=VAR_2 );
  for(VAR_8=0; VAR_8<VAR_5; VAR_8++){
    FUNC_1( VAR_4->aiColumn[VAR_8]>=0 || VAR_9>=0 );
    if( VAR_4->aiColumn[VAR_8]==VAR_9
     && FUNC_2(VAR_4->azColl[VAR_8], VAR_6->azColl[VAR_7])==0
    ){
      return 1;
    }
  }
  return 0;
}
