
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_buf {int dummy; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {int length; TYPE_1__ common; } ;
struct smc_llc_msg_confirm_rkey {TYPE_4__* rtoken; TYPE_2__ hd; } ;
struct smc_link {int dummy; } ;
struct smc_buf_desc {TYPE_5__* sgt; TYPE_3__** mr_rx; } ;
struct TYPE_10__ {int sgl; } ;
struct TYPE_9__ {int rmb_vaddr; int rmb_key; } ;
struct TYPE_8__ {int rkey; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct smc_llc_msg_confirm_rkey*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct smc_link*,struct smc_wr_buf**,struct smc_wr_tx_pend_priv**) ;
 int FUNC_5 (struct smc_link*,struct smc_wr_tx_pend_priv*) ;

__attribute__((used)) static int FUNC_6(struct smc_link *VAR_2,
         struct smc_buf_desc *VAR_3)
{
 struct smc_llc_msg_confirm_rkey *VAR_4;
 struct smc_wr_tx_pend_priv *VAR_5;
 struct smc_wr_buf *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, &VAR_6, &VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_4 = (struct smc_llc_msg_confirm_rkey *)VAR_6;
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->hd.common.type = VAR_0;
 VAR_4->hd.length = sizeof(struct smc_llc_msg_confirm_rkey);
 VAR_4->rtoken[0].rmb_key =
  FUNC_1(VAR_3->mr_rx[VAR_1]->rkey);
 VAR_4->rtoken[0].rmb_vaddr = FUNC_0(
  (u64)FUNC_3(VAR_3->sgt[VAR_1].sgl));

 VAR_7 = FUNC_5(VAR_2, VAR_5);
 return VAR_7;
}
