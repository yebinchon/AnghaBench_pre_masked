
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {long connect_timeout; int connect_work; int remote_addr; } ;
struct socket {int state; struct sock* sk; } ;
struct sockaddr_vm {int svm_port; int svm_cid; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_err; } ;
struct TYPE_2__ {int (* connect ) (struct vsock_sock*) ;int (* stream_allow ) (int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,struct sockaddr_vm*,int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *,long) ;
 long FUNC_7 (long) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (long) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct vsock_sock*) ;
 TYPE_1__* VAR_14 ;
 int FUNC_14 (struct sockaddr*,int,struct sockaddr_vm**) ;
 int FUNC_15 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_16 (struct sock*) ;
 int FUNC_17 (struct vsock_sock*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_18(struct socket *VAR_16, struct sockaddr *VAR_17,
    int VAR_18, int VAR_19)
{
 int VAR_20;
 struct sock *VAR_21;
 struct vsock_sock *VAR_22;
 struct sockaddr_vm *VAR_23;
 long VAR_24;
 FUNC_0(VAR_15);

 VAR_20 = 0;
 VAR_21 = VAR_16->sk;
 VAR_22 = FUNC_16(VAR_21);

 FUNC_2(VAR_21);


 switch (VAR_16->state) {
 case 130:
  VAR_20 = -VAR_3;
  goto out;
 case 128:
  VAR_20 = -VAR_2;
  goto out;
 case 129:






  VAR_20 = -VAR_0;
  break;
 default:
  if ((VAR_21->sk_state == VAR_11) ||
      FUNC_14(VAR_17, VAR_18, &VAR_23) != 0) {
   VAR_20 = -VAR_2;
   goto out;
  }




  if (!VAR_14->stream_allow(VAR_23->svm_cid,
          VAR_23->svm_port)) {
   VAR_20 = -VAR_4;
   goto out;
  }


  FUNC_3(&VAR_22->remote_addr, VAR_23,
         sizeof(VAR_22->remote_addr));

  VAR_20 = FUNC_15(VAR_22);
  if (VAR_20)
   goto out;

  VAR_21->sk_state = VAR_12;

  VAR_20 = VAR_14->connect(VAR_22);
  if (VAR_20 < 0)
   goto out;




  VAR_16->state = 129;
  VAR_20 = -VAR_1;
 }





 VAR_24 = VAR_22->connect_timeout;
 FUNC_4(FUNC_9(VAR_21), &VAR_15, VAR_8);

 while (VAR_21->sk_state != VAR_10 && VAR_21->sk_err == 0) {
  if (VAR_19 & VAR_6) {






   FUNC_10(VAR_21);
   FUNC_6(&VAR_22->connect_work, VAR_24);


   goto out_wait;
  }

  FUNC_5(VAR_21);
  VAR_24 = FUNC_7(VAR_24);
  FUNC_2(VAR_21);

  if (FUNC_8(VAR_13)) {
   VAR_20 = FUNC_11(VAR_24);
   VAR_21->sk_state = VAR_9;
   VAR_16->state = VAR_7;
   FUNC_17(VAR_22);
   goto out_wait;
  } else if (VAR_24 == 0) {
   VAR_20 = -VAR_5;
   VAR_21->sk_state = VAR_9;
   VAR_16->state = VAR_7;
   FUNC_17(VAR_22);
   goto out_wait;
  }

  FUNC_4(FUNC_9(VAR_21), &VAR_15, VAR_8);
 }

 if (VAR_21->sk_err) {
  VAR_20 = -VAR_21->sk_err;
  VAR_21->sk_state = VAR_9;
  VAR_16->state = VAR_7;
 } else {
  VAR_20 = 0;
 }

out_wait:
 FUNC_1(FUNC_9(VAR_21), &VAR_15);
out:
 FUNC_5(VAR_21);
 return VAR_20;
}
