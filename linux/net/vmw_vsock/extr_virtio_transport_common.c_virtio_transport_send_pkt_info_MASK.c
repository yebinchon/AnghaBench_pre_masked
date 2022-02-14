
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ svm_cid; scalar_t__ svm_port; } ;
struct TYPE_4__ {scalar_t__ svm_port; } ;
struct vsock_sock {struct virtio_vsock_sock* trans; TYPE_2__ remote_addr; TYPE_1__ local_addr; } ;
struct virtio_vsock_sock {int dummy; } ;
struct virtio_vsock_pkt_info {scalar_t__ pkt_len; scalar_t__ remote_cid; scalar_t__ remote_port; scalar_t__ op; } ;
struct virtio_vsock_pkt {int dummy; } ;
struct TYPE_6__ {int (* send_pkt ) (struct virtio_vsock_pkt*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct virtio_vsock_pkt*) ;
 struct virtio_vsock_pkt* FUNC_1 (struct virtio_vsock_pkt_info*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct virtio_vsock_sock*,scalar_t__) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (struct virtio_vsock_sock*,struct virtio_vsock_pkt*) ;
 int FUNC_5 (struct virtio_vsock_sock*,scalar_t__) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct vsock_sock *VAR_3,
       struct virtio_vsock_pkt_info *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 struct virtio_vsock_sock *VAR_9;
 struct virtio_vsock_pkt *VAR_10;
 u32 VAR_11 = VAR_4->pkt_len;

 VAR_5 = FUNC_6();
 VAR_6 = VAR_3->local_addr.svm_port;
 if (!VAR_4->remote_cid) {
  VAR_7 = VAR_3->remote_addr.svm_cid;
  VAR_8 = VAR_3->remote_addr.svm_port;
 } else {
  VAR_7 = VAR_4->remote_cid;
  VAR_8 = VAR_4->remote_port;
 }

 VAR_9 = VAR_3->trans;


 if (VAR_11 > VAR_1)
  VAR_11 = VAR_1;


 VAR_11 = FUNC_2(VAR_9, VAR_11);


 if (VAR_11 == 0 && VAR_4->op == VAR_2)
  return VAR_11;

 VAR_10 = FUNC_1(VAR_4, VAR_11,
      VAR_5, VAR_6,
      VAR_7, VAR_8);
 if (!VAR_10) {
  FUNC_5(VAR_9, VAR_11);
  return -VAR_0;
 }

 FUNC_4(VAR_9, VAR_10);

 return FUNC_3()->send_pkt(VAR_10);
}
