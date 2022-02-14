
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int cl_nodename; int cl_nodelen; } ;


 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_1(struct rpc_clnt *VAR_0, const char *VAR_1)
{
 VAR_0->cl_nodelen = FUNC_0(VAR_0->cl_nodename,
   VAR_1, sizeof(VAR_0->cl_nodename));
}
