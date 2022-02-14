
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_pcache_page ;
struct TYPE_3__ {scalar_t__ pPCache; scalar_t__ hasHeldSharedLock; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ Pager ;
typedef int DbPage ;


 int FUNC_0 (int) ;
 int * FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int * FUNC_2 (scalar_t__,scalar_t__,int *) ;

DbPage *FUNC_3(Pager *VAR_0, Pgno VAR_1){
  sqlite3_pcache_page *VAR_2;
  FUNC_0( VAR_0!=0 );
  FUNC_0( VAR_1!=0 );
  FUNC_0( VAR_0->pPCache!=0 );
  VAR_2 = FUNC_1(VAR_0->pPCache, VAR_1, 0);
  FUNC_0( VAR_2==0 || VAR_0->hasHeldSharedLock );
  if( VAR_2==0 ) return 0;
  return FUNC_2(VAR_0->pPCache, VAR_1, VAR_2);
}
