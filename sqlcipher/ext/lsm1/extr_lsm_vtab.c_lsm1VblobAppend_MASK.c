
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_4__ {scalar_t__ n; scalar_t__ nAlloc; scalar_t__ a; } ;
typedef TYPE_1__ lsm1_vblob ;


 int FUNC_0 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_1 (scalar_t__,int const*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(lsm1_vblob *VAR_0, const u8 *VAR_1, u32 VAR_2){
  sqlite3_int64 VAR_3 = VAR_0->n;
  if( VAR_3+VAR_2>VAR_0->nAlloc ){
    FUNC_0(VAR_0, VAR_1, VAR_2);
  }else{
    VAR_0->n += VAR_2;
    FUNC_1(VAR_0->a+VAR_3, VAR_1, VAR_2);
  }
}
