
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_iostats {int om_lock; } ;
struct rpc_clnt {int cl_maxproc; } ;


 int VAR_0 ;
 struct rpc_iostats* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;

struct rpc_iostats *FUNC_2(struct rpc_clnt *VAR_1)
{
 struct rpc_iostats *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1->cl_maxproc, sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  for (VAR_3 = 0; VAR_3 < VAR_1->cl_maxproc; VAR_3++)
   FUNC_1(&VAR_2[VAR_3].om_lock);
 }
 return VAR_2;
}
