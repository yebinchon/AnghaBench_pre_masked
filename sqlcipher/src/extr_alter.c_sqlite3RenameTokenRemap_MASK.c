
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pRename; } ;
struct TYPE_5__ {void* p; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ RenameToken ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (TYPE_2__*,void*) ;

void FUNC_1(Parse *VAR_0, void *VAR_1, void *VAR_2){
  RenameToken *VAR_3;
  FUNC_0(VAR_0, VAR_1);
  for(VAR_3=VAR_0->pRename; VAR_3; VAR_3=VAR_3->pNext){
    if( VAR_3->p==VAR_2 ){
      VAR_3->p = VAR_1;
      break;
    }
  }
}
