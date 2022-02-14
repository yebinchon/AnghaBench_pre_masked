
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ n; scalar_t__ nAlloc; int errNoMem; scalar_t__ a; } ;
typedef TYPE_1__ lsm1_vblob ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(lsm1_vblob *VAR_0, u32 VAR_1){
  if( VAR_0->n+VAR_1>VAR_0->nAlloc ){
    if( VAR_0->errNoMem ) return 1;
    VAR_0->nAlloc += VAR_1 + (VAR_0->nAlloc ? VAR_0->nAlloc : VAR_1);
    VAR_0->a = FUNC_1(VAR_0->a, VAR_0->nAlloc);
    if( VAR_0->a==0 ){
      VAR_0->n = 0;
      VAR_0->nAlloc = 0;
      VAR_0->errNoMem = 1;
      return 1;
    }
    VAR_0->nAlloc = FUNC_0(VAR_0->a);
  }
  return 0;
}
