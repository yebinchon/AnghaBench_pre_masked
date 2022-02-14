
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_6__ {scalar_t__ bDisable; scalar_t__ sz; int * anStat; TYPE_3__* pInit; TYPE_3__* pFree; } ;
struct TYPE_7__ {scalar_t__ pnBytesFreed; scalar_t__ mallocFailed; int mutex; TYPE_1__ lookaside; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_8__ {struct TYPE_8__* pNext; } ;
typedef TYPE_3__ LookasideSlot ;


 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int ) ;

void *FUNC_3(sqlite3 *VAR_0, u64 VAR_1){

  LookasideSlot *VAR_2;
  FUNC_0( VAR_0!=0 );
  FUNC_0( FUNC_2(VAR_0->mutex) );
  FUNC_0( VAR_0->pnBytesFreed==0 );
  if( VAR_0->lookaside.bDisable==0 ){
    FUNC_0( VAR_0->mallocFailed==0 );
    if( VAR_1>VAR_0->lookaside.sz ){
      VAR_0->lookaside.anStat[1]++;
    }else if( (VAR_2 = VAR_0->lookaside.pFree)!=0 ){
      VAR_0->lookaside.pFree = VAR_2->pNext;
      VAR_0->lookaside.anStat[0]++;
      return (void*)VAR_2;
    }else if( (VAR_2 = VAR_0->lookaside.pInit)!=0 ){
      VAR_0->lookaside.pInit = VAR_2->pNext;
      VAR_0->lookaside.anStat[0]++;
      return (void*)VAR_2;
    }else{
      VAR_0->lookaside.anStat[2]++;
    }
  }else if( VAR_0->mallocFailed ){
    return 0;
  }
  return FUNC_1(VAR_0, VAR_1);
}
