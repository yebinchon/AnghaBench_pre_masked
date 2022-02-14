
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {int pageSize; int cksumInit; } ;
typedef TYPE_1__ Pager ;



__attribute__((used)) static u32 FUNC_0(Pager *VAR_0, const u8 *VAR_1){
  u32 VAR_2 = VAR_0->cksumInit;
  int VAR_3 = VAR_0->pageSize-200;
  while( VAR_3>0 ){
    VAR_2 += VAR_1[VAR_3];
    VAR_3 -= 200;
  }
  return VAR_2;
}
