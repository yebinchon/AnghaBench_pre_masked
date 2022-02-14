
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_req {TYPE_1__* rq_xprt; } ;
struct rpc_msg {int dummy; } ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;
struct TYPE_2__ {int * xp_auth; } ;


 int VAR_0 ;
 int VAR_1 ;

enum auth_stat
FUNC_0(struct svc_req *VAR_2, struct rpc_msg *VAR_3)
{
 VAR_2->rq_xprt->xp_auth = &VAR_1;

 return (VAR_0);
}
