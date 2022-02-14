
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {TYPE_3__* pFree; int sz; } ;
struct TYPE_8__ {TYPE_1__ lookaside; scalar_t__ pnBytesFreed; int mutex; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_9__ {struct TYPE_9__* pNext; } ;
typedef TYPE_3__ LookasideSlot ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (TYPE_2__*,void*) ;
 int FUNC_3 (void*,int,int ) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (void*,int) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(sqlite3 *VAR_2, void *VAR_3){
  FUNC_0( VAR_2==0 || FUNC_8(VAR_2->mutex) );
  FUNC_0( VAR_3!=0 );
  if( VAR_2 ){
    if( VAR_2->pnBytesFreed ){
      FUNC_2(VAR_2, VAR_3);
      return;
    }
    if( FUNC_1(VAR_2, VAR_3) ){
      LookasideSlot *VAR_4 = (LookasideSlot*)VAR_3;




      VAR_4->pNext = VAR_2->lookaside.pFree;
      VAR_2->lookaside.pFree = VAR_4;
      return;
    }
  }
  FUNC_0( FUNC_4(VAR_3, (VAR_1|VAR_0)) );
  FUNC_0( FUNC_5(VAR_3, (u8)~(VAR_1|VAR_0)) );
  FUNC_0( VAR_2!=0 || FUNC_5(VAR_3, VAR_1) );
  FUNC_6(VAR_3, VAR_0);
  FUNC_7(VAR_3);
}
