
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int nSlot; int pFree; int pInit; } ;
struct TYPE_5__ {TYPE_1__ lookaside; } ;
typedef TYPE_2__ sqlite3 ;


 int FUNC_0 (int ) ;

int FUNC_1(sqlite3 *VAR_0, int *VAR_1){
  u32 VAR_2 = FUNC_0(VAR_0->lookaside.pInit);
  u32 VAR_3 = FUNC_0(VAR_0->lookaside.pFree);
  if( VAR_1 ) *VAR_1 = VAR_0->lookaside.nSlot - VAR_2;
  return VAR_0->lookaside.nSlot - (VAR_2+VAR_3);
}
