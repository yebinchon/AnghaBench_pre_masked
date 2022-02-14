
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pAux; void (* xDelete ) (void*) ;void* pPtr; struct TYPE_4__* pNext; } ;
struct TYPE_3__ {scalar_t__ pAux; TYPE_2__* pAuxdata; } ;
typedef TYPE_1__ Fts5Cursor ;
typedef int Fts5Context ;
typedef TYPE_2__ Fts5Auxdata ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int) ;
 void FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(
  Fts5Context *VAR_1,
  void *VAR_2,
  void(*VAR_3)(void*)
){
  Fts5Cursor *VAR_4 = (Fts5Cursor*)VAR_1;
  Fts5Auxdata *VAR_5;



  for(VAR_5=VAR_4->pAuxdata; VAR_5; VAR_5=VAR_5->pNext){
    if( VAR_5->pAux==VAR_4->pAux ) break;
  }

  if( VAR_5 ){
    if( VAR_5->xDelete ){
      VAR_5->xDelete(VAR_5->pPtr);
    }
  }else{
    int VAR_6 = VAR_0;
    VAR_5 = (Fts5Auxdata*)FUNC_0(&VAR_6, sizeof(Fts5Auxdata));
    if( VAR_5==0 ){
      if( VAR_3 ) VAR_3(VAR_2);
      return VAR_6;
    }
    VAR_5->pAux = VAR_4->pAux;
    VAR_5->pNext = VAR_4->pAuxdata;
    VAR_4->pAuxdata = VAR_5;
  }

  VAR_5->xDelete = VAR_3;
  VAR_5->pPtr = VAR_2;
  return VAR_0;
}
