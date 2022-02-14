
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct rpc_xprt {TYPE_1__* ops; } ;
struct rpc_clnt {int dummy; } ;
struct TYPE_2__ {int (* print_stats ) (struct rpc_xprt*,struct seq_file*) ;} ;


 int FUNC_0 (struct rpc_xprt*,struct seq_file*) ;

__attribute__((used)) static int FUNC_1(struct rpc_clnt *VAR_0, struct rpc_xprt *VAR_1, void *VAR_2)
{
 struct seq_file *VAR_3 = VAR_2;

 VAR_1->ops->print_stats(VAR_1, VAR_3);
 return 0;
}
