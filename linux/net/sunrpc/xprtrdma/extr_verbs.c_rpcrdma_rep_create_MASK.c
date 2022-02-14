
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rep_inline_recv; } ;
struct rpcrdma_xprt {TYPE_1__ rx_ep; } ;
struct TYPE_9__ {int num_sge; int * sg_list; TYPE_2__* wr_cqe; int * next; } ;
struct TYPE_8__ {int done; } ;
struct rpcrdma_rep {int rr_temp; TYPE_3__ rr_recv_wr; TYPE_4__* rr_rdmabuf; TYPE_2__ rr_cqe; struct rpcrdma_xprt* rr_rxprt; int rr_hdrbuf; } ;
struct TYPE_10__ {int rg_iov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpcrdma_rep*) ;
 struct rpcrdma_rep* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static struct rpcrdma_rep *FUNC_6(struct rpcrdma_xprt *VAR_3,
           bool VAR_4)
{
 struct rpcrdma_rep *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  goto out;

 VAR_5->rr_rdmabuf = FUNC_4(VAR_3->rx_ep.rep_inline_recv,
            VAR_0, VAR_1);
 if (!VAR_5->rr_rdmabuf)
  goto out_free;

 FUNC_5(&VAR_5->rr_hdrbuf, FUNC_2(VAR_5->rr_rdmabuf),
       FUNC_3(VAR_5->rr_rdmabuf));
 VAR_5->rr_cqe.done = VAR_2;
 VAR_5->rr_rxprt = VAR_3;
 VAR_5->rr_recv_wr.next = ((void*)0);
 VAR_5->rr_recv_wr.wr_cqe = &VAR_5->rr_cqe;
 VAR_5->rr_recv_wr.sg_list = &VAR_5->rr_rdmabuf->rg_iov;
 VAR_5->rr_recv_wr.num_sge = 1;
 VAR_5->rr_temp = VAR_4;
 return VAR_5;

out_free:
 FUNC_0(VAR_5);
out:
 return ((void*)0);
}
