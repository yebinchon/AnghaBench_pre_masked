
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_trans_rdma {int excess_rc; int rq_depth; int rq_sem; int sq_depth; int sq_sem; int cm_done; int req_lock; int timeout; int privport; int port; } ;
struct p9_rdma_opts {int timeout; int rq_depth; int sq_depth; int privport; int port; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct p9_trans_rdma* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct p9_trans_rdma *FUNC_5(struct p9_rdma_opts *VAR_1)
{
 struct p9_trans_rdma *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct p9_trans_rdma), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->port = VAR_1->port;
 VAR_2->privport = VAR_1->privport;
 VAR_2->sq_depth = VAR_1->sq_depth;
 VAR_2->rq_depth = VAR_1->rq_depth;
 VAR_2->timeout = VAR_1->timeout;
 FUNC_4(&VAR_2->req_lock);
 FUNC_1(&VAR_2->cm_done);
 FUNC_3(&VAR_2->sq_sem, VAR_2->sq_depth);
 FUNC_3(&VAR_2->rq_sem, VAR_2->rq_depth);
 FUNC_0(&VAR_2->excess_rc, 0);

 return VAR_2;
}
