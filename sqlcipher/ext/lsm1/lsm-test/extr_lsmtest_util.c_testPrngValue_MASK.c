
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* aRand1; unsigned int* aRand2; unsigned int* aRand3; } ;


 TYPE_1__ VAR_0 ;

unsigned int FUNC_0(unsigned int VAR_1){
  return
    VAR_0.aRand1[VAR_1 & 0x000007FF] ^
    VAR_0.aRand2[(VAR_1>>11) & 0x000007FF] ^
    VAR_0.aRand3[(VAR_1>>22) & 0x000003FF]
  ;
}
