
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {scalar_t__ num_reqs; scalar_t__ max_reqs; int reserve_lock; } ;
struct rpc_rqst {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpc_rqst* FUNC_0 (int ) ;
 int VAR_2 ;
 struct rpc_rqst* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct rpc_rqst *FUNC_4(struct rpc_xprt *VAR_3)
{
 struct rpc_rqst *VAR_4 = FUNC_0(-VAR_0);

 if (VAR_3->num_reqs >= VAR_3->max_reqs)
  goto out;
 ++VAR_3->num_reqs;
 FUNC_3(&VAR_3->reserve_lock);
 VAR_4 = FUNC_1(sizeof(struct rpc_rqst), VAR_2);
 FUNC_2(&VAR_3->reserve_lock);
 if (VAR_4 != ((void*)0))
  goto out;
 --VAR_3->num_reqs;
 VAR_4 = FUNC_0(-VAR_1);
out:
 return VAR_4;
}
