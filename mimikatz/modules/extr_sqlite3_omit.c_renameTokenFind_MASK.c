
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct RenameCtx {int nList; TYPE_1__* pList; } ;
struct TYPE_5__ {TYPE_1__* pRename; } ;
struct TYPE_4__ {void* p; struct TYPE_4__* pNext; } ;
typedef TYPE_1__ RenameToken ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(Parse *VAR_0, struct RenameCtx *VAR_1, void *VAR_2){
  RenameToken **VAR_3;
  FUNC_0( VAR_2!=0 );
  for(VAR_3=&VAR_0->pRename; (*VAR_3); VAR_3=&(*VAR_3)->pNext){
    if( (*VAR_3)->p==VAR_2 ){
      RenameToken *VAR_4 = *VAR_3;
      *VAR_3 = VAR_4->pNext;
      VAR_4->pNext = VAR_1->pList;
      VAR_1->pList = VAR_4;
      VAR_1->nList++;
      break;
    }
  }
}
