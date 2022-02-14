
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct svc_serv {int sv_cb_lock; int sv_cb_waitq; int sv_cb_list; } ;
struct rpc_xprt {int bc_pa_lock; int bc_alloc_count; struct svc_serv* bc_serv; } ;
struct TYPE_2__ {int len; } ;
struct rpc_rqst {int rq_bc_list; int rq_bc_pa_state; TYPE_1__ rq_private_buf; int rq_bc_pa_list; struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rpc_xprt*) ;

void FUNC_8(struct rpc_rqst *VAR_1, uint32_t VAR_2)
{
 struct rpc_xprt *VAR_3 = VAR_1->rq_xprt;
 struct svc_serv *VAR_4 = VAR_3->bc_serv;

 FUNC_4(&VAR_3->bc_pa_lock);
 FUNC_2(&VAR_1->rq_bc_pa_list);
 VAR_3->bc_alloc_count--;
 FUNC_5(&VAR_3->bc_pa_lock);

 VAR_1->rq_private_buf.len = VAR_2;
 FUNC_3(VAR_0, &VAR_1->rq_bc_pa_state);

 FUNC_0("RPC:       add callback request to list\n");
 FUNC_7(VAR_3);
 FUNC_4(&VAR_4->sv_cb_lock);
 FUNC_1(&VAR_1->rq_bc_list, &VAR_4->sv_cb_list);
 FUNC_6(&VAR_4->sv_cb_waitq);
 FUNC_5(&VAR_4->sv_cb_lock);
}
