
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int* aMatchinfo; int nElem; scalar_t__* aRef; } ;
typedef TYPE_1__ MatchinfoBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0){
  MatchinfoBuffer *VAR_1 = (MatchinfoBuffer*)((u8*)VAR_0 - ((u32*)VAR_0)[-1]);

  FUNC_0( (u32*)VAR_0==&VAR_1->aMatchinfo[1]
       || (u32*)VAR_0==&VAR_1->aMatchinfo[VAR_1->nElem+2]
  );
  if( (u32*)VAR_0==&VAR_1->aMatchinfo[1] ){
    VAR_1->aRef[1] = 0;
  }else{
    VAR_1->aRef[2] = 0;
  }

  if( VAR_1->aRef[0]==0 && VAR_1->aRef[1]==0 && VAR_1->aRef[2]==0 ){
    FUNC_1(VAR_1);
  }
}
