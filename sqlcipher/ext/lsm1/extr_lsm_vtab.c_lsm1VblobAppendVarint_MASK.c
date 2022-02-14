
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_uint64 ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_4__ {scalar_t__ n; scalar_t__ nAlloc; scalar_t__ a; } ;
typedef TYPE_1__ lsm1_vblob ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(lsm1_vblob *VAR_0, sqlite3_uint64 VAR_1){
  sqlite3_int64 VAR_2 = VAR_0->n;
  if( VAR_2+9>VAR_0->nAlloc && FUNC_1(VAR_0, 9) ) return;
  VAR_0->n += FUNC_0(VAR_0->a+VAR_0->n, VAR_1);
}
