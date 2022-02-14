
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smcd_dmb {int dmb_len; int dma_addr; int cpu_addr; int sba_idx; int dmb_tok; } ;
struct smcd_dev {TYPE_1__* ops; } ;
struct smc_buf_desc {int len; int dma_addr; int cpu_addr; int sba_idx; int token; } ;
typedef int dmb ;
struct TYPE_2__ {int (* unregister_dmb ) (struct smcd_dev*,struct smcd_dmb*) ;} ;


 int FUNC_0 (struct smcd_dmb*,int ,int) ;
 int FUNC_1 (struct smcd_dev*,struct smcd_dmb*) ;

int FUNC_2(struct smcd_dev *VAR_0, struct smc_buf_desc *VAR_1)
{
 struct smcd_dmb VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.dmb_tok = VAR_1->token;
 VAR_2.sba_idx = VAR_1->sba_idx;
 VAR_2.cpu_addr = VAR_1->cpu_addr;
 VAR_2.dma_addr = VAR_1->dma_addr;
 VAR_2.dmb_len = VAR_1->len;
 return VAR_0->ops->unregister_dmb(VAR_0, &VAR_2);
}
