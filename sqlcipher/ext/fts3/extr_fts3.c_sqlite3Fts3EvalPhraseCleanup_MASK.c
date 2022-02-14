
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int aAll; } ;
struct TYPE_7__ {int nToken; TYPE_1__* aToken; TYPE_4__ doclist; } ;
struct TYPE_6__ {scalar_t__ pSegcsr; } ;
typedef TYPE_2__ Fts3Phrase ;
typedef int Fts3Doclist ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(Fts3Phrase *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    FUNC_3(VAR_0->doclist.aAll);
    FUNC_0(VAR_0);
    FUNC_2(&VAR_0->doclist, 0, sizeof(Fts3Doclist));
    for(VAR_1=0; VAR_1<VAR_0->nToken; VAR_1++){
      FUNC_1(VAR_0->aToken[VAR_1].pSegcsr);
      VAR_0->aToken[VAR_1].pSegcsr = 0;
    }
  }
}
