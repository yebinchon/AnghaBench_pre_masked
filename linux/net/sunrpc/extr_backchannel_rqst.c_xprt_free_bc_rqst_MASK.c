
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int bc_pa_lock; int bc_slot_count; int bc_alloc_count; int bc_pa_list; scalar_t__ connect_cookie; } ;
struct rpc_rqst {int rq_bc_pa_list; int rq_bc_pa_state; scalar_t__ rq_connect_cookie; struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,struct rpc_rqst*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rpc_rqst*) ;
 scalar_t__ FUNC_9 (struct rpc_xprt*) ;
 int FUNC_10 (struct rpc_xprt*) ;

void FUNC_11(struct rpc_rqst *VAR_1)
{
 struct rpc_xprt *VAR_2 = VAR_1->rq_xprt;

 FUNC_2("RPC:       free backchannel req=%p\n", VAR_1);

 VAR_1->rq_connect_cookie = VAR_2->connect_cookie - 1;
 FUNC_5();
 FUNC_1(VAR_0, &VAR_1->rq_bc_pa_state);
 FUNC_4();





 FUNC_6(&VAR_2->bc_pa_lock);
 if (FUNC_9(VAR_2)) {
  FUNC_3(&VAR_1->rq_bc_pa_list, &VAR_2->bc_pa_list);
  VAR_2->bc_alloc_count++;
  FUNC_0(&VAR_2->bc_slot_count);
  VAR_1 = ((void*)0);
 }
 FUNC_7(&VAR_2->bc_pa_lock);
 if (VAR_1 != ((void*)0)) {






  FUNC_2("RPC:       Last session removed req=%p\n", VAR_1);
  FUNC_8(VAR_1);
 }
 FUNC_10(VAR_2);
}
