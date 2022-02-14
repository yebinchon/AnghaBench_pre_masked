
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_timeout {unsigned long to_retries; unsigned long to_increment; unsigned long to_maxval; scalar_t__ to_exponential; } ;
struct rpc_rqst {unsigned long rq_timeout; TYPE_2__* rq_task; } ;
struct TYPE_4__ {TYPE_1__* tk_client; } ;
struct TYPE_3__ {struct rpc_timeout* cl_timeout; } ;



__attribute__((used)) static unsigned long FUNC_0(struct rpc_rqst *VAR_0)
{
 const struct rpc_timeout *VAR_1 = VAR_0->rq_task->tk_client->cl_timeout;
 unsigned long VAR_2 = VAR_0->rq_timeout;

 if (VAR_1->to_exponential)
  VAR_2 <<= VAR_1->to_retries;
 else
  VAR_2 += VAR_1->to_increment * VAR_1->to_retries;
 if (VAR_2 > VAR_1->to_maxval || VAR_2 == 0)
  VAR_2 = VAR_1->to_maxval;
 return VAR_2;
}
