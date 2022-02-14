
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rxrpc_call {TYPE_2__* conn; } ;
struct TYPE_3__ {int security_level; } ;
struct TYPE_4__ {TYPE_1__ params; } ;




 int FUNC_0 (struct rxrpc_call*,struct sk_buff*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct rxrpc_call*,struct sk_buff*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct rxrpc_call *VAR_0, struct sk_buff *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3)
{
 switch (VAR_0->conn->params.security_level) {
 case 129:
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  return;
 case 128:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  return;
 default:
  return;
 }
}
