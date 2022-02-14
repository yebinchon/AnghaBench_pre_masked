
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buf ;
struct TYPE_9__ {int p; int n; } ;
struct TYPE_8__ {int pIndex; int * aTotalSize; int nTotalRow; TYPE_1__* pConfig; } ;
struct TYPE_7__ {int nCol; } ;
typedef TYPE_2__ Fts5Storage ;
typedef TYPE_3__ Fts5Buffer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int*,TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(Fts5Storage *VAR_1){
  int VAR_2 = VAR_1->pConfig->nCol;
  int VAR_3;
  Fts5Buffer VAR_4;
  int VAR_5 = VAR_0;
  FUNC_0(&VAR_4, 0, sizeof(VAR_4));

  FUNC_1(&VAR_5, &VAR_4, VAR_1->nTotalRow);
  for(VAR_3=0; VAR_3<VAR_2; VAR_3++){
    FUNC_1(&VAR_5, &VAR_4, VAR_1->aTotalSize[VAR_3]);
  }
  if( VAR_5==VAR_0 ){
    VAR_5 = FUNC_2(VAR_1->pIndex, VAR_4.p, VAR_4.n);
  }
  FUNC_3(VAR_4.p);

  return VAR_5;
}
