
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct rpc_clnt {struct rpc_clnt* cl_parent; } ;


 int FUNC_0 (struct rpc_clnt*,unsigned long,struct super_block*) ;
 int FUNC_1 (struct rpc_clnt*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct rpc_clnt *VAR_0, unsigned long VAR_1,
    struct super_block *VAR_2)
{
 int VAR_3 = 0;

 for (;; VAR_0 = VAR_0->cl_parent) {
  if (!FUNC_1(VAR_0, VAR_1))
   VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_3 || VAR_0 == VAR_0->cl_parent)
   break;
 }
 return VAR_3;
}
