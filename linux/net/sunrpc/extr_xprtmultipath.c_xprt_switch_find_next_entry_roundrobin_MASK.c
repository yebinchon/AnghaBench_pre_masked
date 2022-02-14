
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct rpc_xprt_switch {int xps_nactive; int xps_queuelen; struct list_head xps_xprt_list; } ;
struct rpc_xprt {int queuelen; } ;


 unsigned int FUNC_0 (int ) ;
 struct rpc_xprt* FUNC_1 (struct list_head*,struct rpc_xprt const*) ;
 unsigned long FUNC_2 (int *) ;

__attribute__((used)) static
struct rpc_xprt *FUNC_3(struct rpc_xprt_switch *VAR_0,
  const struct rpc_xprt *VAR_1)
{
 struct list_head *VAR_2 = &VAR_0->xps_xprt_list;
 struct rpc_xprt *VAR_3;
 unsigned int VAR_4;

 for (;;) {
  unsigned long VAR_5, VAR_6;

  VAR_3 = FUNC_1(VAR_2, VAR_1);
  if (!VAR_3)
   break;
  VAR_5 = FUNC_2(&VAR_3->queuelen);
  VAR_6 = FUNC_2(&VAR_0->xps_queuelen);
  VAR_4 = FUNC_0(VAR_0->xps_nactive);

  if (VAR_5 * VAR_4 <= VAR_6)
   break;
  VAR_1 = VAR_3;
 }
 return VAR_3;
}
