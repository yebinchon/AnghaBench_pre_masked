
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct TYPE_6__ {int szSlot; scalar_t__ nFreeSlot; int bUnderPressure; scalar_t__ nReserve; int mutex; TYPE_2__* pFree; TYPE_1__ grp; } ;
struct TYPE_5__ {struct TYPE_5__* pNext; } ;
typedef int PgHdr1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_4 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void *FUNC_9(int VAR_5){
  void *VAR_6 = 0;
  FUNC_0( FUNC_8(VAR_4) );
  FUNC_5(VAR_2, VAR_5);
  if( VAR_5<=VAR_4 ){
    FUNC_6(VAR_4);
    VAR_6 = (PgHdr1 *)VAR_4;
    if( VAR_6 ){
      VAR_4 = VAR_4>pNext;
      VAR_4--;
      VAR_4 = VAR_4<VAR_4;
      FUNC_0( VAR_4>=0 );
      FUNC_4(VAR_3, 1);
    }
    FUNC_7(VAR_4);
  }
  if( VAR_6==0 ){



    VAR_6 = FUNC_1(VAR_5);

    if( VAR_6 ){
      int VAR_7 = FUNC_2(VAR_6);
      FUNC_6(VAR_4);
      FUNC_4(VAR_1, VAR_7);
      FUNC_7(VAR_4);
    }

    FUNC_3(VAR_6, VAR_0);
  }
  return VAR_6;
}
