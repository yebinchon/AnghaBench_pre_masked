
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nData; } ;
struct TYPE_5__ {int nPtr; TYPE_1__ key; int * aPtr; int * apTreeCsr; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(MultiCursor *VAR_1){
  int VAR_2;
  FUNC_0(VAR_1->apTreeCsr[0]);
  FUNC_0(VAR_1->apTreeCsr[1]);
  for(VAR_2=0; VAR_2<VAR_1->nPtr; VAR_2++){
    FUNC_1(&VAR_1->aPtr[VAR_2], VAR_0);
  }
  VAR_1->key.nData = 0;
}
