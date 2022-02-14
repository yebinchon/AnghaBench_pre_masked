
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct TYPE_2__ {int op; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vsock_sock*,int) ;
 struct vsock_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void
FUNC_3(struct sock *VAR_1,
        struct virtio_vsock_pkt *VAR_2)
{
 struct vsock_sock *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_2->hdr.op) == VAR_0)
  FUNC_1(VAR_3, 1);
}
