
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int rejected; } ;
struct socket {scalar_t__ type; int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_err; int sk_ack_backlog; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 long FUNC_6 (long) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct socket*) ;
 int FUNC_10 (long) ;
 int FUNC_11 (struct sock*) ;
 long FUNC_12 (struct sock*,int) ;
 struct sock* FUNC_13 (struct sock*) ;
 struct vsock_sock* FUNC_14 (struct sock*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_15(struct socket *VAR_11, struct socket *VAR_12, int VAR_13,
   bool VAR_14)
{
 struct sock *VAR_15;
 int VAR_16;
 struct sock *VAR_17;
 struct vsock_sock *VAR_18;
 long VAR_19;
 FUNC_0(VAR_10);

 VAR_16 = 0;
 VAR_15 = VAR_11->sk;

 FUNC_2(VAR_15);

 if (VAR_11->type != VAR_5) {
  VAR_16 = -VAR_2;
  goto out;
 }

 if (VAR_15->sk_state != VAR_8) {
  VAR_16 = -VAR_1;
  goto out;
 }




 VAR_19 = FUNC_12(VAR_15, VAR_13 & VAR_3);
 FUNC_4(FUNC_8(VAR_15), &VAR_10, VAR_7);

 while ((VAR_17 = FUNC_13(VAR_15)) == ((void*)0) &&
        VAR_15->sk_err == 0) {
  FUNC_5(VAR_15);
  VAR_19 = FUNC_6(VAR_19);
  FUNC_1(FUNC_8(VAR_15), &VAR_10);
  FUNC_2(VAR_15);

  if (FUNC_7(VAR_9)) {
   VAR_16 = FUNC_10(VAR_19);
   goto out;
  } else if (VAR_19 == 0) {
   VAR_16 = -VAR_0;
   goto out;
  }

  FUNC_4(FUNC_8(VAR_15), &VAR_10, VAR_7);
 }
 FUNC_1(FUNC_8(VAR_15), &VAR_10);

 if (VAR_15->sk_err)
  VAR_16 = -VAR_15->sk_err;

 if (VAR_17) {
  VAR_15->sk_ack_backlog--;

  FUNC_3(VAR_17, VAR_4);
  VAR_18 = FUNC_14(VAR_17);
  if (VAR_16) {
   VAR_18->rejected = 1;
  } else {
   VAR_12->state = VAR_6;
   FUNC_9(VAR_17, VAR_12);
  }

  FUNC_5(VAR_17);
  FUNC_11(VAR_17);
 }

out:
 FUNC_5(VAR_15);
 return VAR_16;
}
