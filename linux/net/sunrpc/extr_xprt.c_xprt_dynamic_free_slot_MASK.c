
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {scalar_t__ num_reqs; scalar_t__ min_reqs; } ;
struct rpc_rqst {int dummy; } ;


 int FUNC_0 (struct rpc_rqst*) ;

__attribute__((used)) static bool FUNC_1(struct rpc_xprt *VAR_0, struct rpc_rqst *VAR_1)
{
 if (VAR_0->num_reqs > VAR_0->min_reqs) {
  --VAR_0->num_reqs;
  FUNC_0(VAR_1);
  return 1;
 }
 return 0;
}
