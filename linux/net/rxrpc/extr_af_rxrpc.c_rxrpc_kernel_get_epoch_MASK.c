
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct socket {int dummy; } ;
struct rxrpc_call {TYPE_2__* conn; } ;
struct TYPE_3__ {int epoch; } ;
struct TYPE_4__ {TYPE_1__ proto; } ;



u32 FUNC_0(struct socket *VAR_0, struct rxrpc_call *VAR_1)
{
 return VAR_1->conn->proto.epoch;
}
