
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct sockaddr_vm {int dummy; } ;
struct TYPE_2__ {int (* dgram_bind ) (struct vsock_sock*,struct sockaddr_vm*) ;} ;


 int FUNC_0 (struct vsock_sock*,struct sockaddr_vm*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct vsock_sock *VAR_1,
         struct sockaddr_vm *VAR_2)
{
 return VAR_0->dgram_bind(VAR_1, VAR_2);
}
