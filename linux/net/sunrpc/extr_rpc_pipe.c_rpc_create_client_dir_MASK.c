
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* pdh_dentry; } ;
struct rpc_clnt {TYPE_1__ cl_pipedir_objects; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 struct dentry* FUNC_2 (struct dentry*,char const*,int,int *,int ,struct rpc_clnt*) ;

struct dentry *FUNC_3(struct dentry *VAR_1,
       const char *VAR_2,
       struct rpc_clnt *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, 0555, ((void*)0),
     VAR_0, VAR_3);
 if (!FUNC_0(VAR_4)) {
  VAR_3->cl_pipedir_objects.pdh_dentry = VAR_4;
  FUNC_1(&VAR_3->cl_pipedir_objects);
 }
 return VAR_4;
}
