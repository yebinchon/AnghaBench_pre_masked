
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int peer_shutdown; } ;
struct TYPE_2__ {int flags; int op; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int (* sk_write_space ) (struct sock*) ;int (* sk_data_ready ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct vsock_sock*,int) ;
 int FUNC_7 (struct virtio_vsock_pkt*) ;
 int FUNC_8 (struct vsock_sock*,struct virtio_vsock_pkt*) ;
 int FUNC_9 (struct vsock_sock*,int *) ;
 struct vsock_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct vsock_sock*) ;

__attribute__((used)) static int
FUNC_12(struct sock *VAR_7,
    struct virtio_vsock_pkt *VAR_8)
{
 struct vsock_sock *VAR_9 = FUNC_10(VAR_7);
 int VAR_10 = 0;

 switch (FUNC_0(VAR_8->hdr.op)) {
 case 129:
  FUNC_8(VAR_9, VAR_8);
  VAR_7->sk_data_ready(VAR_7);
  return VAR_10;
 case 131:
  VAR_7->sk_write_space(VAR_7);
  break;
 case 128:
  if (FUNC_1(VAR_8->hdr.flags) & VAR_5)
   VAR_9->peer_shutdown |= VAR_1;
  if (FUNC_1(VAR_8->hdr.flags) & VAR_6)
   VAR_9->peer_shutdown |= VAR_2;
  if (VAR_9->peer_shutdown == VAR_3 &&
      FUNC_11(VAR_9) <= 0 &&
      !FUNC_2(VAR_7, VAR_4)) {
   (void)FUNC_9(VAR_9, ((void*)0));

   FUNC_6(VAR_9, 1);
  }
  if (FUNC_1(VAR_8->hdr.flags))
   VAR_7->sk_state_change(VAR_7);
  break;
 case 130:
  FUNC_6(VAR_9, 1);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }

 FUNC_7(VAR_8);
 return VAR_10;
}
