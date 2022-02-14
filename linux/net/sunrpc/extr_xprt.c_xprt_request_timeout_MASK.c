
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {unsigned long rq_timeout; unsigned long rq_majortimeo; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(const struct rpc_rqst *VAR_1)
{
 unsigned long VAR_2 = VAR_0 + VAR_1->rq_timeout;

 if (FUNC_0(VAR_2, VAR_1->rq_majortimeo))
  return VAR_2;
 return VAR_1->rq_majortimeo;
}
