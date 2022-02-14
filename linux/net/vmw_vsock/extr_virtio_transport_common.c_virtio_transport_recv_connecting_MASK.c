
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct TYPE_4__ {int op; } ;
struct virtio_vsock_pkt {TYPE_2__ hdr; } ;
struct sock {int sk_err; int (* sk_error_report ) (struct sock*) ;int sk_state; int (* sk_state_change ) (struct sock*) ;TYPE_1__* sk_socket; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct vsock_sock*,struct virtio_vsock_pkt*) ;
 int FUNC_4 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static int
FUNC_6(struct sock *VAR_6,
     struct virtio_vsock_pkt *VAR_7)
{
 struct vsock_sock *VAR_8 = FUNC_5(VAR_6);
 int VAR_9;
 int VAR_10;

 switch (FUNC_0(VAR_7->hdr.op)) {
 case 129:
  VAR_6->sk_state = VAR_5;
  VAR_6->sk_socket->state = VAR_3;
  FUNC_4(VAR_8);
  VAR_6->sk_state_change(VAR_6);
  break;
 case 130:
  break;
 case 128:
  VAR_10 = VAR_0;
  VAR_9 = 0;
  goto destroy;
 default:
  VAR_10 = VAR_2;
  VAR_9 = -VAR_1;
  goto destroy;
 }
 return 0;

destroy:
 FUNC_3(VAR_8, VAR_7);
 VAR_6->sk_state = VAR_4;
 VAR_6->sk_err = VAR_10;
 VAR_6->sk_error_report(VAR_6);
 return VAR_9;
}
