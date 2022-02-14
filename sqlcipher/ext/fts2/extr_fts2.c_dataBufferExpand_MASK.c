
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nData; scalar_t__ nCapacity; int pData; } ;
typedef TYPE_1__ DataBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(DataBuffer *VAR_0, int VAR_1){
  FUNC_0( VAR_1>0 );




  if( VAR_0->nData+VAR_1>VAR_0->nCapacity ){
    VAR_0->nCapacity = VAR_0->nData+VAR_1;
    VAR_0->pData = FUNC_1(VAR_0->pData, VAR_0->nCapacity);
  }
}
