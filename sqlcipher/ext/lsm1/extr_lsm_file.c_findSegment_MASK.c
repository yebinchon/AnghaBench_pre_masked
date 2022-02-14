
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nRight; int * aRhs; int lhs; struct TYPE_3__* pNext; } ;
typedef int Snapshot ;
typedef int Segment ;
typedef int LsmPgno ;
typedef TYPE_1__ Level ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static Segment *FUNC_2(Snapshot *VAR_0, LsmPgno VAR_1){
  Level *VAR_2;
  Segment *VAR_3 = 0;

  for(VAR_2=FUNC_0(VAR_0); VAR_2 && VAR_3==0; VAR_2=VAR_2->pNext){
    if( 0==(VAR_3 = FUNC_1(&VAR_2->lhs, VAR_1)) ){
      int VAR_4;
      for(VAR_4=0; VAR_4<VAR_2->nRight; VAR_4++){
        if( (VAR_3 = FUNC_1(&VAR_2->aRhs[VAR_4], VAR_1)) ) break;
      }
    }
  }

  return VAR_3;
}
