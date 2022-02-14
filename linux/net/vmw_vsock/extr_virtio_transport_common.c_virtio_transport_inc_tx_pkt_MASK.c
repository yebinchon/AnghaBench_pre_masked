
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_vsock_sock {int rx_lock; int buf_alloc; int fwd_cnt; int last_fwd_cnt; } ;
struct TYPE_2__ {void* buf_alloc; void* fwd_cnt; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct virtio_vsock_sock *VAR_0, struct virtio_vsock_pkt *VAR_1)
{
 FUNC_1(&VAR_0->rx_lock);
 VAR_0->last_fwd_cnt = VAR_0->fwd_cnt;
 VAR_1->hdr.fwd_cnt = FUNC_0(VAR_0->fwd_cnt);
 VAR_1->hdr.buf_alloc = FUNC_0(VAR_0->buf_alloc);
 FUNC_2(&VAR_0->rx_lock);
}
