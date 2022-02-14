
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pAux; scalar_t__ xDelete; void* pPtr; struct TYPE_4__* pNext; } ;
struct TYPE_3__ {scalar_t__ pAux; TYPE_2__* pAuxdata; } ;
typedef TYPE_1__ Fts5Cursor ;
typedef int Fts5Context ;
typedef TYPE_2__ Fts5Auxdata ;



__attribute__((used)) static void *FUNC_0(Fts5Context *VAR_0, int VAR_1){
  Fts5Cursor *VAR_2 = (Fts5Cursor*)VAR_0;
  Fts5Auxdata *VAR_3;
  void *VAR_4 = 0;

  for(VAR_3=VAR_2->pAuxdata; VAR_3; VAR_3=VAR_3->pNext){
    if( VAR_3->pAux==VAR_2->pAux ) break;
  }

  if( VAR_3 ){
    VAR_4 = VAR_3->pPtr;
    if( VAR_1 ){
      VAR_3->pPtr = 0;
      VAR_3->xDelete = 0;
    }
  }

  return VAR_4;
}
