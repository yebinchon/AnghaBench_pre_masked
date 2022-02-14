
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nFreeSlot; int bUnderPressure; scalar_t__ nReserve; scalar_t__ nSlot; int mutex; TYPE_1__* pFree; int pEnd; int pStart; } ;
struct TYPE_3__ {struct TYPE_3__* pNext; } ;
typedef TYPE_1__ PgFreeslot ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_5){
  if( VAR_5==0 ) return;
  if( FUNC_0(VAR_5, VAR_4, VAR_4) ){
    PgFreeslot *VAR_6;
    FUNC_7(VAR_4);
    FUNC_5(VAR_3, 1);
    VAR_6 = (PgFreeslot*)VAR_5;
    VAR_6->pNext = VAR_4;
    VAR_4 = VAR_6;
    VAR_4++;
    VAR_4 = VAR_4<VAR_4;
    FUNC_1( VAR_4<=VAR_4 );
    FUNC_8(VAR_4);
  }else{
    FUNC_1( FUNC_3(VAR_5, VAR_1) );
    FUNC_4(VAR_5, VAR_0);

    {
      int VAR_7 = 0;
      VAR_7 = FUNC_2(VAR_5);
      FUNC_7(VAR_4);
      FUNC_5(VAR_2, VAR_7);
      FUNC_8(VAR_4);
    }

    FUNC_6(VAR_5);
  }
}
