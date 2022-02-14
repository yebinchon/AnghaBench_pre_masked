
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ imm_data; } ;
struct TYPE_7__ {int wr_id; TYPE_2__ ex; struct ib_sge* sg_list; } ;
struct rds_ib_send_work {struct ib_sge* s_sge; TYPE_3__ s_wr; int * s_op; } ;
struct TYPE_5__ {int w_nr; } ;
struct rds_ib_connection {TYPE_4__* i_pd; scalar_t__ i_send_hdrs_dma; TYPE_1__ i_send_ring; struct rds_ib_send_work* i_sends; } ;
struct rds_header {int dummy; } ;
struct ib_sge {int length; int lkey; scalar_t__ addr; } ;
struct TYPE_8__ {int local_dma_lkey; } ;



void FUNC_0(struct rds_ib_connection *VAR_0)
{
 struct rds_ib_send_work *VAR_1;
 u32 VAR_2;

 for (VAR_2 = 0, VAR_1 = VAR_0->i_sends; VAR_2 < VAR_0->i_send_ring.w_nr; VAR_2++, VAR_1++) {
  struct ib_sge *VAR_3;

  VAR_1->s_op = ((void*)0);

  VAR_1->s_wr.wr_id = VAR_2;
  VAR_1->s_wr.sg_list = VAR_1->s_sge;
  VAR_1->s_wr.ex.imm_data = 0;

  VAR_3 = &VAR_1->s_sge[0];
  VAR_3->addr = VAR_0->i_send_hdrs_dma + (VAR_2 * sizeof(struct rds_header));
  VAR_3->length = sizeof(struct rds_header);
  VAR_3->lkey = VAR_0->i_pd->local_dma_lkey;

  VAR_1->s_sge[1].lkey = VAR_0->i_pd->local_dma_lkey;
 }
}
