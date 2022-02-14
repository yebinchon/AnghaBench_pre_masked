
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {int rx_queue; int tx_lock; int rx_lock; int buf_size; int buf_alloc; int buf_size_max; int buf_size_min; int peer_buf_alloc; struct vsock_sock* vsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct virtio_vsock_sock* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct vsock_sock *VAR_5,
        struct vsock_sock *VAR_6)
{
 struct virtio_vsock_sock *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_5->trans = VAR_7;
 VAR_7->vsk = VAR_5;
 if (VAR_6) {
  struct virtio_vsock_sock *VAR_8 = VAR_6->trans;

  VAR_7->buf_size = VAR_8->buf_size;
  VAR_7->buf_size_min = VAR_8->buf_size_min;
  VAR_7->buf_size_max = VAR_8->buf_size_max;
  VAR_7->peer_buf_alloc = VAR_8->peer_buf_alloc;
 } else {
  VAR_7->buf_size = VAR_2;
  VAR_7->buf_size_min = VAR_4;
  VAR_7->buf_size_max = VAR_3;
 }

 VAR_7->buf_alloc = VAR_7->buf_size;

 FUNC_2(&VAR_7->rx_lock);
 FUNC_2(&VAR_7->tx_lock);
 FUNC_0(&VAR_7->rx_queue);

 return 0;
}
