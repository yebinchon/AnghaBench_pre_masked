
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int CSR1; int CR3; } ;
struct TYPE_5__ {int CFGR; int D1CFGR; int D2CFGR; int D3CFGR; int PLLCKSELR; int D1CCIPR; int D2CCIP1R; int D2CCIP2R; int D3CCIPR; int CIR; int CIER; int CR; int PLLCFGR; } ;
struct TYPE_4__ {int CCR; int VTOR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;

void FUNC_0(void) {
    VAR_7->CR |= VAR_0;


    VAR_7->CFGR = 0x00000000;


    VAR_7->CR &= ~VAR_1;


    VAR_7->PLLCFGR = VAR_2;
    VAR_7->CR &= (uint32_t)0xFFFBFFFF;
    VAR_8->VTOR = VAR_3;


    VAR_8->CCR |= VAR_9;
}
