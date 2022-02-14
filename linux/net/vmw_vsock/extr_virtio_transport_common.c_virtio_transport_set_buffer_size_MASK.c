
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {scalar_t__ buf_size_min; scalar_t__ buf_size_max; scalar_t__ buf_alloc; scalar_t__ buf_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vsock_sock*,int ,int *) ;

void FUNC_1(struct vsock_sock *VAR_2, u64 VAR_3)
{
 struct virtio_vsock_sock *VAR_4 = VAR_2->trans;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 if (VAR_3 < VAR_4->buf_size_min)
  VAR_4->buf_size_min = VAR_3;
 if (VAR_3 > VAR_4->buf_size_max)
  VAR_4->buf_size_max = VAR_3;
 VAR_4->buf_size = VAR_3;
 VAR_4->buf_alloc = VAR_3;

 FUNC_0(VAR_2, VAR_1,
         ((void*)0));
}
