
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ regs; scalar_t__ lp_tx_addr; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(dma_addr_t *VAR_2)
{
 *VAR_2 = VAR_1.lp_tx_addr +
  (FUNC_0(VAR_1.regs + VAR_0) & 0xffffff) * 4;
}
