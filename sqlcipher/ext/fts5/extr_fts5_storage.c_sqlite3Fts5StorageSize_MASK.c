
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_6__ {scalar_t__* aTotalSize; TYPE_1__* pConfig; } ;
struct TYPE_5__ {int nCol; } ;
typedef TYPE_2__ Fts5Storage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

int FUNC_1(Fts5Storage *VAR_2, int VAR_3, i64 *VAR_4){
  int VAR_5 = FUNC_0(VAR_2, 0);
  if( VAR_5==VAR_0 ){
    *VAR_4 = 0;
    if( VAR_3<0 ){
      int VAR_6;
      for(VAR_6=0; VAR_6<VAR_2->pConfig->nCol; VAR_6++){
        *VAR_4 += VAR_2->aTotalSize[VAR_6];
      }
    }else if( VAR_3<VAR_2->pConfig->nCol ){
      *VAR_4 = VAR_2->aTotalSize[VAR_3];
    }else{
      VAR_5 = VAR_1;
    }
  }
  return VAR_5;
}
