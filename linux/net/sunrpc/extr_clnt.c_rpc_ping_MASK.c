
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rpc_clnt*,struct rpc_message*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct rpc_clnt *VAR_4)
{
 struct rpc_message VAR_5 = {
  .rpc_proc = &VAR_3,
 };
 int VAR_6;
 VAR_6 = FUNC_0(VAR_4, &VAR_5, VAR_1 | VAR_2 |
       VAR_0);
 return VAR_6;
}
