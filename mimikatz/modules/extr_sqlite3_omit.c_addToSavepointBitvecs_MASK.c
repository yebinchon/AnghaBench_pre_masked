
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nSavepoint; TYPE_1__* aSavepoint; } ;
struct TYPE_4__ {scalar_t__ nOrig; int pInSavepoint; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ PagerSavepoint ;
typedef TYPE_2__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(Pager *VAR_2, Pgno VAR_3){
  int VAR_4;
  int VAR_5 = VAR_1;

  for(VAR_4=0; VAR_4<VAR_2->nSavepoint; VAR_4++){
    PagerSavepoint *VAR_6 = &VAR_2->aSavepoint[VAR_4];
    if( VAR_3<=VAR_6->nOrig ){
      VAR_5 |= FUNC_1(VAR_6->pInSavepoint, VAR_3);
      FUNC_2( VAR_5==VAR_0 );
      FUNC_0( VAR_5==VAR_1 || VAR_5==VAR_0 );
    }
  }
  return VAR_5;
}
