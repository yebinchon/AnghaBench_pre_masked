
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pageSize; scalar_t__ pTmpSpace; } ;
typedef TYPE_1__ BtShared ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(BtShared *VAR_0){
  if( !VAR_0->pTmpSpace ){
    VAR_0->pTmpSpace = FUNC_0( VAR_0->pageSize );
  }
}
