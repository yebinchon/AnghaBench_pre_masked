
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct connect_timeout_data {unsigned long connect_timeout; unsigned long reconnect_timeout; } ;


 int FUNC_0 (struct rpc_clnt*,int ,struct connect_timeout_data*) ;
 int VAR_0 ;

void
FUNC_1(struct rpc_clnt *VAR_1,
  unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct connect_timeout_data VAR_4 = {
  .connect_timeout = VAR_2,
  .reconnect_timeout = VAR_3,
 };
 FUNC_0(VAR_1,
   VAR_0,
   &VAR_4);
}
