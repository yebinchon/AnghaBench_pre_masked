
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pNext; } ;
typedef TYPE_1__ ZipfileEntry ;
struct TYPE_6__ {TYPE_1__* pFreeEntry; TYPE_1__* pCurrent; scalar_t__ pFile; scalar_t__ bEof; } ;
typedef TYPE_2__ ZipfileCsr ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(ZipfileCsr *VAR_0){
  ZipfileEntry *VAR_1;
  ZipfileEntry *VAR_2;

  VAR_0->bEof = 0;
  if( VAR_0->pFile ){
    FUNC_0(VAR_0->pFile);
    VAR_0->pFile = 0;
    FUNC_1(VAR_0->pCurrent);
    VAR_0->pCurrent = 0;
  }

  for(VAR_1=VAR_0->pFreeEntry; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_1(VAR_1);
  }
}
