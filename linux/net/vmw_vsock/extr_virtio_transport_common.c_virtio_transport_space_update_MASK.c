
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {int tx_lock; void* peer_fwd_cnt; void* peer_buf_alloc; } ;
struct TYPE_2__ {int fwd_cnt; int buf_alloc; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;
struct sock {int dummy; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static bool FUNC_5(struct sock *VAR_0,
       struct virtio_vsock_pkt *VAR_1)
{
 struct vsock_sock *VAR_2 = FUNC_4(VAR_0);
 struct virtio_vsock_sock *VAR_3 = VAR_2->trans;
 bool VAR_4;


 FUNC_1(&VAR_3->tx_lock);
 VAR_3->peer_buf_alloc = FUNC_0(VAR_1->hdr.buf_alloc);
 VAR_3->peer_fwd_cnt = FUNC_0(VAR_1->hdr.fwd_cnt);
 VAR_4 = FUNC_3(VAR_2);
 FUNC_2(&VAR_3->tx_lock);
 return VAR_4;
}
