
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct rpc_clnt {int dummy; } ;
struct connect_timeout_data {int reconnect_timeout; int connect_timeout; } ;
struct TYPE_2__ {int (* set_connect_timeout ) (struct rpc_xprt*,int ,int ) ;} ;


 int FUNC_0 (struct rpc_xprt*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct rpc_clnt *VAR_0,
  struct rpc_xprt *VAR_1,
  void *VAR_2)
{
 struct connect_timeout_data *VAR_3 = VAR_2;

 if (VAR_1->ops->set_connect_timeout)
  VAR_1->ops->set_connect_timeout(VAR_1,
    VAR_3->connect_timeout,
    VAR_3->reconnect_timeout);
 return 0;
}
