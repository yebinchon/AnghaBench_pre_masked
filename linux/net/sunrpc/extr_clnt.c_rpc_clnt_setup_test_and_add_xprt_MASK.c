
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt {int * address_strings; int addr; } ;
struct rpc_task {int tk_status; } ;
struct rpc_clnt {int dummy; } ;
struct rpc_add_xprt_test {int data; int (* add_xprt_test ) (struct rpc_clnt*,struct rpc_xprt*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int ) ;
 struct rpc_task* FUNC_3 (struct rpc_clnt*,struct rpc_xprt*,int *,int,int *,int *) ;
 int FUNC_4 (struct rpc_task*) ;
 scalar_t__ FUNC_5 (struct rpc_xprt_switch*,struct sockaddr*) ;
 int FUNC_6 (struct rpc_clnt*,struct rpc_xprt*,int ) ;
 struct rpc_xprt* FUNC_7 (struct rpc_xprt*) ;
 int FUNC_8 (struct rpc_xprt*) ;
 int FUNC_9 (struct rpc_xprt_switch*) ;
 int FUNC_10 (struct rpc_xprt_switch*) ;

int FUNC_11(struct rpc_clnt *VAR_5,
         struct rpc_xprt_switch *VAR_6,
         struct rpc_xprt *VAR_7,
         void *VAR_8)
{
 struct rpc_task *VAR_9;
 struct rpc_add_xprt_test *VAR_10 = (struct rpc_add_xprt_test *)VAR_8;
 int VAR_11 = -VAR_0;

 VAR_7 = FUNC_7(VAR_7);
 FUNC_9(VAR_6);

 if (FUNC_5(VAR_6, (struct sockaddr *)&VAR_7->addr))
  goto out_err;


 VAR_9 = FUNC_3(VAR_5, VAR_7, ((void*)0),
        VAR_3 | VAR_4 | VAR_2,
        ((void*)0), ((void*)0));
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto out_err;
 }
 VAR_11 = VAR_9->tk_status;
 FUNC_4(VAR_9);

 if (VAR_11 < 0)
  goto out_err;


 VAR_10->add_xprt_test(VAR_5, VAR_7, VAR_10->data);

 FUNC_8(VAR_7);
 FUNC_10(VAR_6);


 return 1;
out_err:
 FUNC_8(VAR_7);
 FUNC_10(VAR_6);
 FUNC_2("RPC:   rpc_clnt_test_xprt failed: %d addr %s not added\n",
  VAR_11, VAR_7->address_strings[VAR_1]);
 return VAR_11;
}
