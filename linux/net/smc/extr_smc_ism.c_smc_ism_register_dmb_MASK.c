
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smcd_dmb {int dmb_len; int dma_addr; int cpu_addr; int dmb_tok; int sba_idx; int rgid; int vlan_id; } ;
struct smc_link_group {TYPE_2__* smcd; int peer_gid; int vlan_id; } ;
struct smc_buf_desc {int len; int dma_addr; int cpu_addr; int token; int sba_idx; } ;
typedef int dmb ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* register_dmb ) (TYPE_2__*,struct smcd_dmb*) ;} ;


 int FUNC_0 (struct smcd_dmb*,int ,int) ;
 int FUNC_1 (TYPE_2__*,struct smcd_dmb*) ;

int FUNC_2(struct smc_link_group *VAR_0, int VAR_1,
    struct smc_buf_desc *VAR_2)
{
 struct smcd_dmb VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.dmb_len = VAR_1;
 VAR_3.sba_idx = VAR_2->sba_idx;
 VAR_3.vlan_id = VAR_0->vlan_id;
 VAR_3.rgid = VAR_0->peer_gid;
 VAR_4 = VAR_0->smcd->ops->register_dmb(VAR_0->smcd, &VAR_3);
 if (!VAR_4) {
  VAR_2->sba_idx = VAR_3.sba_idx;
  VAR_2->token = VAR_3.dmb_tok;
  VAR_2->cpu_addr = VAR_3.cpu_addr;
  VAR_2->dma_addr = VAR_3.dma_addr;
  VAR_2->len = VAR_3.dmb_len;
 }
 return VAR_4;
}
