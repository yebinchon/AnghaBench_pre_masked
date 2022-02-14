
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nSeg; int xSetOutputs; int * pIndex; int * aSeg; int * aFirst; } ;
typedef int Fts5SegIter ;
typedef TYPE_1__ Fts5Iter ;
typedef int Fts5Index ;
typedef int Fts5CResult ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static Fts5Iter *FUNC_1(
  Fts5Index *VAR_1,
  int VAR_2
){
  Fts5Iter *VAR_3;
  int VAR_4;

  for(VAR_4=2; VAR_4<VAR_2; VAR_4=VAR_4*2);
  VAR_3 = FUNC_0(VAR_1,
      sizeof(Fts5Iter) +
      sizeof(Fts5SegIter) * (VAR_4-1) +
      sizeof(Fts5CResult) * VAR_4
  );
  if( VAR_3 ){
    VAR_3->nSeg = VAR_4;
    VAR_3->aFirst = (Fts5CResult*)&VAR_3->aSeg[VAR_4];
    VAR_3->pIndex = VAR_1;
    VAR_3->xSetOutputs = VAR_0;
  }
  return VAR_3;
}
