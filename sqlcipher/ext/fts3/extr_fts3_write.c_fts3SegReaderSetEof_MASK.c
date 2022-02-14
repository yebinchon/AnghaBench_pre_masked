
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aNode; scalar_t__ pBlob; } ;
typedef TYPE_1__ Fts3SegReader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(Fts3SegReader *VAR_0){
  if( !FUNC_0(VAR_0) ){
    FUNC_2(VAR_0->aNode);
    FUNC_1(VAR_0->pBlob);
    VAR_0->pBlob = 0;
  }
  VAR_0->aNode = 0;
}
