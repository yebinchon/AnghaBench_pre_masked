
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fe_rx_dma {int rxd4; int rxd3; int rxd2; int rxd1; } ;



__attribute__((used)) static inline void FUNC_0(struct fe_rx_dma *VAR_0, struct fe_rx_dma *VAR_1)
{
 VAR_0->rxd1 = VAR_1->rxd1;
 VAR_0->rxd2 = VAR_1->rxd2;
 VAR_0->rxd3 = VAR_1->rxd3;
 VAR_0->rxd4 = VAR_1->rxd4;
}
