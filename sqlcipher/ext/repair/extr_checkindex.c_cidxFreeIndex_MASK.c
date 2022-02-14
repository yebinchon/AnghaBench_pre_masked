
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nCol; struct TYPE_6__* zWhere; TYPE_1__* aCol; } ;
struct TYPE_5__ {TYPE_2__* zExpr; } ;
typedef TYPE_2__ CidxIndex ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(CidxIndex *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nCol; VAR_1++){
      FUNC_0(VAR_0->aCol[VAR_1].zExpr);
    }
    FUNC_0(VAR_0->zWhere);
    FUNC_0(VAR_0);
  }
}
