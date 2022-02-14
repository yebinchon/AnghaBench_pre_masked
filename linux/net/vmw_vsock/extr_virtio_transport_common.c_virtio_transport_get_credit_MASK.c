
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct virtio_vsock_sock {scalar_t__ peer_buf_alloc; scalar_t__ tx_cnt; scalar_t__ peer_fwd_cnt; int tx_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u32 FUNC_2(struct virtio_vsock_sock *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 FUNC_0(&VAR_0->tx_lock);
 VAR_2 = VAR_0->peer_buf_alloc - (VAR_0->tx_cnt - VAR_0->peer_fwd_cnt);
 if (VAR_2 > VAR_1)
  VAR_2 = VAR_1;
 VAR_0->tx_cnt += VAR_2;
 FUNC_1(&VAR_0->tx_lock);

 return VAR_2;
}
