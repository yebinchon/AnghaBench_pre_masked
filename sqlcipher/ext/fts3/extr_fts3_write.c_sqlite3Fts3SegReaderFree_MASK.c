
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pBlob; struct TYPE_6__* aNode; struct TYPE_6__* zTerm; } ;
typedef TYPE_1__ Fts3SegReader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(Fts3SegReader *VAR_0){
  if( VAR_0 ){
    if( !FUNC_0(VAR_0) ){
      FUNC_3(VAR_0->zTerm);
    }
    if( !FUNC_1(VAR_0) ){
      FUNC_3(VAR_0->aNode);
    }
    FUNC_2(VAR_0->pBlob);
  }
  FUNC_3(VAR_0);
}
