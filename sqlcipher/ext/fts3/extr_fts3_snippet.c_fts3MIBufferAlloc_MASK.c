
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* aRef; int nElem; int * aMatchinfo; scalar_t__ bGlobal; } ;
typedef TYPE_1__ MatchinfoBuffer ;


 void FUNC_0 (void*) ;
 int FUNC_1 (int *,int *,int) ;
 void FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void (*FUNC_4(MatchinfoBuffer *VAR_0, u32 **VAR_1))(void*){
  void (*VAR_2)(void*) = 0;
  u32 *VAR_3 = 0;

  if( VAR_0->aRef[1]==0 ){
    VAR_0->aRef[1] = 1;
    VAR_3 = &VAR_0->aMatchinfo[1];
    VAR_2 = FUNC_0;
  }
  else if( VAR_0->aRef[2]==0 ){
    VAR_0->aRef[2] = 1;
    VAR_3 = &VAR_0->aMatchinfo[VAR_0->nElem+2];
    VAR_2 = FUNC_0;
  }else{
    VAR_3 = (u32*)FUNC_3(VAR_0->nElem * sizeof(u32));
    if( VAR_3 ){
      VAR_2 = FUNC_2;
      if( VAR_0->bGlobal ) FUNC_1(VAR_3, &VAR_0->aMatchinfo[1], VAR_0->nElem*sizeof(u32));
    }
  }

  *VAR_1 = VAR_3;
  return VAR_2;
}
