
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt_switch {int * xps_iter_ops; int xps_xprt_list; int * xps_net; int xps_queuelen; scalar_t__ xps_nactive; scalar_t__ xps_nxprts; int xps_kref; int xps_lock; } ;
struct rpc_xprt {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct rpc_xprt_switch* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rpc_xprt_switch*,struct rpc_xprt*) ;

struct rpc_xprt_switch *FUNC_6(struct rpc_xprt *VAR_1,
  gfp_t VAR_2)
{
 struct rpc_xprt_switch *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_4(&VAR_3->xps_lock);
  FUNC_3(&VAR_3->xps_kref);
  VAR_3->xps_nxprts = VAR_3->xps_nactive = 0;
  FUNC_1(&VAR_3->xps_queuelen, 0);
  VAR_3->xps_net = ((void*)0);
  FUNC_0(&VAR_3->xps_xprt_list);
  VAR_3->xps_iter_ops = &VAR_0;
  FUNC_5(VAR_3, VAR_1);
 }

 return VAR_3;
}
