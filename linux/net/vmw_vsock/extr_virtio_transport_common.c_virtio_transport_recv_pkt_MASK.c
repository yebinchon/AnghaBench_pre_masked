
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int svm_cid; } ;
struct vsock_sock {TYPE_2__ local_addr; } ;
struct TYPE_3__ {int type; int fwd_cnt; int buf_alloc; int flags; int op; int len; int dst_port; int dst_cid; int src_port; int src_cid; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;
struct sockaddr_vm {int svm_cid; int svm_port; } ;
struct sock {int sk_state; int (* sk_write_space ) (struct sock*) ;} ;






 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_8 (struct virtio_vsock_pkt*) ;
 int FUNC_9 (struct sock*,struct virtio_vsock_pkt*) ;
 int FUNC_10 (struct sock*,struct virtio_vsock_pkt*) ;
 int FUNC_11 (struct sock*,struct virtio_vsock_pkt*) ;
 int FUNC_12 (struct sock*,struct virtio_vsock_pkt*) ;
 int FUNC_13 (struct virtio_vsock_pkt*) ;
 int FUNC_14 (struct sock*,struct virtio_vsock_pkt*) ;
 int FUNC_15 (struct sockaddr_vm*,int ,int ) ;
 struct sock* FUNC_16 (struct sockaddr_vm*) ;
 struct sock* FUNC_17 (struct sockaddr_vm*,struct sockaddr_vm*) ;
 struct vsock_sock* FUNC_18 (struct sock*) ;

void FUNC_19(struct virtio_vsock_pkt *VAR_1)
{
 struct sockaddr_vm VAR_2, VAR_3;
 struct vsock_sock *VAR_4;
 struct sock *VAR_5;
 bool VAR_6;

 FUNC_15(&VAR_2, FUNC_2(VAR_1->hdr.src_cid),
   FUNC_1(VAR_1->hdr.src_port));
 FUNC_15(&VAR_3, FUNC_2(VAR_1->hdr.dst_cid),
   FUNC_1(VAR_1->hdr.dst_port));

 FUNC_7(VAR_2.svm_cid, VAR_2.svm_port,
     VAR_3.svm_cid, VAR_3.svm_port,
     FUNC_1(VAR_1->hdr.len),
     FUNC_0(VAR_1->hdr.type),
     FUNC_0(VAR_1->hdr.op),
     FUNC_1(VAR_1->hdr.flags),
     FUNC_1(VAR_1->hdr.buf_alloc),
     FUNC_1(VAR_1->hdr.fwd_cnt));

 if (FUNC_0(VAR_1->hdr.type) != VAR_0) {
  (void)FUNC_13(VAR_1);
  goto free_pkt;
 }




 VAR_5 = FUNC_17(&VAR_2, &VAR_3);
 if (!VAR_5) {
  VAR_5 = FUNC_16(&VAR_3);
  if (!VAR_5) {
   (void)FUNC_13(VAR_1);
   goto free_pkt;
  }
 }

 VAR_4 = FUNC_18(VAR_5);

 VAR_6 = FUNC_14(VAR_5, VAR_1);

 FUNC_3(VAR_5);


 VAR_4->local_addr.svm_cid = VAR_3.svm_cid;

 if (VAR_6)
  VAR_5->sk_write_space(VAR_5);

 switch (VAR_5->sk_state) {
 case 129:
  FUNC_12(VAR_5, VAR_1);
  FUNC_8(VAR_1);
  break;
 case 128:
  FUNC_10(VAR_5, VAR_1);
  FUNC_8(VAR_1);
  break;
 case 130:
  FUNC_9(VAR_5, VAR_1);
  break;
 case 131:
  FUNC_11(VAR_5, VAR_1);
  FUNC_8(VAR_1);
  break;
 default:
  FUNC_8(VAR_1);
  break;
 }
 FUNC_4(VAR_5);




 FUNC_5(VAR_5);
 return;

free_pkt:
 FUNC_8(VAR_1);
}
