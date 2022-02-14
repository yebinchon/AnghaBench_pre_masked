
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct TYPE_2__ {int (* cancel_pkt ) (struct vsock_sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct vsock_sock*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct vsock_sock *VAR_2)
{
 if (!VAR_1->cancel_pkt)
  return -VAR_0;

 return VAR_1->cancel_pkt(VAR_2);
}
