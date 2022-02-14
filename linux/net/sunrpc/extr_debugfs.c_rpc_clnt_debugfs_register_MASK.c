
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int cl_clid; int cl_debugfs; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,struct rpc_clnt*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rpc_clnt*,int ,int*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_3 ;

void
FUNC_4(struct rpc_clnt *VAR_4)
{
 int VAR_5;
 char VAR_6[9];
 int VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_6, sizeof(VAR_6), "%x", VAR_4->cl_clid);
 if (VAR_5 >= sizeof(VAR_6))
  return;


 VAR_4->cl_debugfs = FUNC_0(VAR_6, VAR_2);


 FUNC_1("tasks", VAR_0 | 0400, VAR_4->cl_debugfs, VAR_4,
       &VAR_3);

 FUNC_2(VAR_4, VAR_1, &VAR_7);
}
