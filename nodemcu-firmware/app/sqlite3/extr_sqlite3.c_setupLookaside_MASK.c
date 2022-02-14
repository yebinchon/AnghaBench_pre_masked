
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int bMalloced; int bDisable; TYPE_2__* pEnd; TYPE_2__* pStart; TYPE_2__* pFree; scalar_t__ sz; scalar_t__ nOut; } ;
struct TYPE_7__ {TYPE_1__ lookaside; struct TYPE_7__* pNext; } ;
typedef TYPE_2__ sqlite3 ;
typedef TYPE_2__ LookasideSlot ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(sqlite3 *VAR_2, void *VAR_3, int VAR_4, int VAR_5){

  void *VAR_6;
  if( VAR_2->lookaside.nOut ){
    return VAR_0;
  }




  if( VAR_2->lookaside.bMalloced ){
    FUNC_6(VAR_2->lookaside.pStart);
  }



  VAR_4 = FUNC_0(VAR_4);
  if( VAR_4<=(int)sizeof(LookasideSlot*) ) VAR_4 = 0;
  if( VAR_5<0 ) VAR_5 = 0;
  if( VAR_4==0 || VAR_5==0 ){
    VAR_4 = 0;
    VAR_6 = 0;
  }else if( VAR_3==0 ){
    FUNC_2();
    VAR_6 = FUNC_4( VAR_4*VAR_5 );
    FUNC_3();
    if( VAR_6 ) VAR_5 = FUNC_5(VAR_6)/VAR_4;
  }else{
    VAR_6 = VAR_3;
  }
  VAR_2->lookaside.pStart = VAR_6;
  VAR_2->lookaside.pFree = 0;
  VAR_2->lookaside.sz = (u16)VAR_4;
  if( VAR_6 ){
    int VAR_7;
    LookasideSlot *VAR_8;
    FUNC_1( VAR_4 > (int)sizeof(LookasideSlot*) );
    VAR_8 = (LookasideSlot*)VAR_6;
    for(VAR_7=VAR_5-1; VAR_7>=0; VAR_7--){
      VAR_8->pNext = VAR_2->lookaside.pFree;
      VAR_2->lookaside.pFree = VAR_8;
      VAR_8 = (LookasideSlot*)&((u8*)VAR_8)[VAR_4];
    }
    VAR_2->lookaside.pEnd = VAR_8;
    VAR_2->lookaside.bDisable = 0;
    VAR_2->lookaside.bMalloced = VAR_3==0 ?1:0;
  }else{
    VAR_2->lookaside.pStart = VAR_2;
    VAR_2->lookaside.pEnd = VAR_2;
    VAR_2->lookaside.bDisable = 1;
    VAR_2->lookaside.bMalloced = 0;
  }

  return VAR_1;
}
