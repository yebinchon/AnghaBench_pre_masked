
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_connection {scalar_t__ rtoken_idx; int lgr; } ;
struct smc_clc_msg_accept_confirm {int rmb_rkey; int rmb_dma_addr; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;

int FUNC_1(struct smc_connection *VAR_0,
       struct smc_clc_msg_accept_confirm *VAR_1)
{
 VAR_0->rtoken_idx = FUNC_0(VAR_0->lgr, VAR_1->rmb_dma_addr,
       VAR_1->rmb_rkey);
 if (VAR_0->rtoken_idx < 0)
  return VAR_0->rtoken_idx;
 return 0;
}
