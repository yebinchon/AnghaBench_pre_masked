
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fe_tx_dma {int txd2; int txd4; int txd3; int txd1; } ;



__attribute__((used)) static inline void FUNC_0(struct fe_tx_dma *VAR_0, struct fe_tx_dma *VAR_1)
{
 VAR_1->txd1 = VAR_0->txd1;
 VAR_1->txd3 = VAR_0->txd3;
 VAR_1->txd4 = VAR_0->txd4;

 VAR_1->txd2 = VAR_0->txd2;
}
