
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct virtio_vsock_sock {int tx_lock; int tx_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct virtio_vsock_sock *VAR_0, u32 VAR_1)
{
 FUNC_0(&VAR_0->tx_lock);
 VAR_0->tx_cnt -= VAR_1;
 FUNC_1(&VAR_0->tx_lock);
}
