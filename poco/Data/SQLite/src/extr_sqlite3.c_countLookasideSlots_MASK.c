
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {struct TYPE_3__* pNext; } ;
typedef TYPE_1__ LookasideSlot ;



__attribute__((used)) static u32 FUNC_0(LookasideSlot *VAR_0){
  u32 VAR_1 = 0;
  while( VAR_0 ){
    VAR_0 = VAR_0->pNext;
    VAR_1++;
  }
  return VAR_1;
}
