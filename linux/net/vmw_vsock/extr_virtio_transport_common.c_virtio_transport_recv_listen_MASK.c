
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int remote_addr; int local_addr; } ;
struct TYPE_2__ {int src_port; int src_cid; int dst_port; int dst_cid; int op; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;
struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_state; int sk_ack_backlog; int sk_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sock* FUNC_0 (int ,int *,struct sock*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct vsock_sock*,struct virtio_vsock_pkt*) ;
 int FUNC_10 (struct vsock_sock*,struct virtio_vsock_pkt*) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (struct sock*,struct sock*) ;
 int FUNC_13 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_14 (struct sock*) ;

__attribute__((used)) static int
FUNC_15(struct sock *VAR_6, struct virtio_vsock_pkt *VAR_7)
{
 struct vsock_sock *VAR_8 = FUNC_14(VAR_6);
 struct vsock_sock *VAR_9;
 struct sock *VAR_10;

 if (FUNC_1(VAR_7->hdr.op) != VAR_5) {
  FUNC_9(VAR_8, VAR_7);
  return -VAR_0;
 }

 if (FUNC_6(VAR_6)) {
  FUNC_9(VAR_8, VAR_7);
  return -VAR_1;
 }

 VAR_10 = FUNC_0(FUNC_7(VAR_6), ((void*)0), VAR_6, VAR_2,
          VAR_6->sk_type, 0);
 if (!VAR_10) {
  FUNC_9(VAR_8, VAR_7);
  return -VAR_1;
 }

 VAR_6->sk_ack_backlog++;

 FUNC_4(VAR_10, VAR_3);

 VAR_10->sk_state = VAR_4;

 VAR_9 = FUNC_14(VAR_10);
 FUNC_11(&VAR_9->local_addr, FUNC_3(VAR_7->hdr.dst_cid),
   FUNC_2(VAR_7->hdr.dst_port));
 FUNC_11(&VAR_9->remote_addr, FUNC_3(VAR_7->hdr.src_cid),
   FUNC_2(VAR_7->hdr.src_port));

 FUNC_13(VAR_9);
 FUNC_12(VAR_6, VAR_10);
 FUNC_10(VAR_9, VAR_7);

 FUNC_5(VAR_10);

 VAR_6->sk_data_ready(VAR_6);
 return 0;
}
