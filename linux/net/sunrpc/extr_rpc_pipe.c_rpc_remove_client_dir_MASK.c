
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* pdh_dentry; } ;
struct rpc_clnt {TYPE_1__ cl_pipedir_objects; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct dentry*,int ) ;

int FUNC_2(struct rpc_clnt *VAR_1)
{
 struct dentry *VAR_2 = VAR_1->cl_pipedir_objects.pdh_dentry;

 if (VAR_2 == ((void*)0))
  return 0;
 FUNC_0(&VAR_1->cl_pipedir_objects);
 VAR_1->cl_pipedir_objects.pdh_dentry = ((void*)0);
 return FUNC_1(VAR_2, VAR_0);
}
