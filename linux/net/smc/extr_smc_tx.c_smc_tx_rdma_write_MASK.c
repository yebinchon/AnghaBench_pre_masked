
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smc_link_group {TYPE_1__** rtokens; struct smc_link* lnk; } ;
struct smc_link {int roce_qp; } ;
struct TYPE_6__ {int peer_conn_abort; } ;
struct TYPE_7__ {TYPE_2__ conn_state_flags; } ;
struct smc_connection {size_t rtoken_idx; TYPE_3__ local_tx_ctrl; scalar_t__ tx_off; struct smc_link_group* lgr; } ;
struct TYPE_8__ {int num_sge; int wr_id; } ;
struct ib_rdma_wr {TYPE_4__ wr; int rkey; scalar_t__ remote_addr; } ;
struct TYPE_5__ {int rkey; scalar_t__ dma_addr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*,int *) ;
 int FUNC_1 (struct smc_link_group*) ;
 int FUNC_2 (struct smc_link*) ;

__attribute__((used)) static int FUNC_3(struct smc_connection *VAR_1, int VAR_2,
        int VAR_3, struct ib_rdma_wr *VAR_4)
{
 struct smc_link_group *VAR_5 = VAR_1->lgr;
 struct smc_link *VAR_6;
 int VAR_7;

 VAR_6 = &VAR_5->lnk[VAR_0];
 VAR_4->wr.wr_id = FUNC_2(VAR_6);
 VAR_4->wr.num_sge = VAR_3;
 VAR_4->remote_addr =
  VAR_5->rtokens[VAR_1->rtoken_idx][VAR_0].dma_addr +

  VAR_1->tx_off +

  VAR_2;
 VAR_4->rkey = VAR_5->rtokens[VAR_1->rtoken_idx][VAR_0].rkey;
 VAR_7 = FUNC_0(VAR_6->roce_qp, &VAR_4->wr, ((void*)0));
 if (VAR_7) {
  VAR_1->local_tx_ctrl.conn_state_flags.peer_conn_abort = 1;
  FUNC_1(VAR_5);
 }
 return VAR_7;
}
