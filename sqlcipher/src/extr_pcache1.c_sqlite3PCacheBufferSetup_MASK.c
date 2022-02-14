
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int szSlot; int nSlot; int nFreeSlot; int nReserve; void* pEnd; TYPE_1__* pFree; scalar_t__ bUnderPressure; void* pStart; scalar_t__ isInit; } ;
struct TYPE_3__ {struct TYPE_3__* pNext; } ;
typedef TYPE_1__ PgFreeslot ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void *VAR_1, int VAR_2, int VAR_3){
  if( VAR_0 ){
    PgFreeslot *VAR_4;
    if( VAR_1==0 ) VAR_2 = VAR_3 = 0;
    if( VAR_3==0 ) VAR_2 = 0;
    VAR_2 = FUNC_0(VAR_2);
    VAR_0 = VAR_2;
    VAR_0 = VAR_0 = VAR_3;
    VAR_0 = VAR_3>90 ? 10 : (VAR_3/10 + 1);
    VAR_0 = VAR_1;
    VAR_0 = 0;
    VAR_0 = 0;
    while( VAR_3-- ){
      VAR_4 = (PgFreeslot*)VAR_1;
      VAR_4->pNext = VAR_0;
      VAR_0 = VAR_4;
      VAR_1 = (void*)&((char*)VAR_1)[VAR_2];
    }
    VAR_0 = VAR_1;
  }
}
