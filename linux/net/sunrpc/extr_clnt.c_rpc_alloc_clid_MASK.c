
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int cl_clid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct rpc_clnt *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1, 0, 0, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_2->cl_clid = VAR_3;
 return 0;
}
