
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_receive_queue; } ;
struct TYPE_6__ {int bytes_to_rcv; } ;
struct TYPE_4__ {scalar_t__ sk_state; } ;
struct smc_sock {int sockopt_defer_accept; TYPE_3__ conn; TYPE_2__* clcsock; scalar_t__ use_fallback; TYPE_1__ sk; } ;
struct TYPE_5__ {struct sock* sk; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (struct sock*) ;
 long FUNC_4 (int) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 long FUNC_8 (long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,long*,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 struct sock* FUNC_14 (struct sock*,struct socket*) ;
 int VAR_8 ;
 int FUNC_15 (struct smc_sock*,long*,int ) ;
 struct smc_sock* FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (long) ;
 int FUNC_20 (struct sock*) ;
 long FUNC_21 (struct sock*,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_22(struct socket *VAR_10, struct socket *VAR_11,
        int VAR_12, bool VAR_13)
{
 struct sock *VAR_14 = VAR_10->sk, *VAR_15;
 FUNC_0(VAR_9, VAR_7);
 struct smc_sock *VAR_16;
 long VAR_17;
 int VAR_18 = 0;

 VAR_16 = FUNC_16(VAR_14);
 FUNC_18(VAR_14);
 FUNC_3(VAR_14);

 if (VAR_16->sk.sk_state != VAR_4) {
  VAR_18 = -VAR_1;
  FUNC_5(VAR_14);
  goto out;
 }


 VAR_17 = FUNC_21(VAR_14, VAR_12 & VAR_3);
 FUNC_1(FUNC_11(VAR_14), &VAR_9);
 while (!(VAR_15 = FUNC_14(VAR_14, VAR_11))) {
  FUNC_9(VAR_5);
  if (!VAR_17) {
   VAR_18 = -VAR_0;
   break;
  }
  FUNC_5(VAR_14);
  VAR_17 = FUNC_8(VAR_17);

  FUNC_7();
  FUNC_3(VAR_14);
  if (FUNC_10(VAR_7)) {
   VAR_18 = FUNC_19(VAR_17);
   break;
  }
 }
 FUNC_9(VAR_6);
 FUNC_6(FUNC_11(VAR_14), &VAR_9);

 if (!VAR_18)
  VAR_18 = FUNC_17(VAR_15);
 FUNC_5(VAR_14);
 if (VAR_18)
  goto out;

 if (VAR_16->sockopt_defer_accept && !(VAR_12 & VAR_3)) {

  VAR_17 = FUNC_4(VAR_16->sockopt_defer_accept *
        VAR_2);
  if (FUNC_16(VAR_15)->use_fallback) {
   struct sock *VAR_19 = FUNC_16(VAR_15)->clcsock->sk;

   FUNC_3(VAR_19);
   if (FUNC_13(&VAR_19->sk_receive_queue))
    FUNC_12(VAR_19, &VAR_17, ((void*)0));
   FUNC_5(VAR_19);
  } else if (!FUNC_2(&FUNC_16(VAR_15)->conn.bytes_to_rcv)) {
   FUNC_3(VAR_15);
   FUNC_15(FUNC_16(VAR_15), &VAR_17, VAR_8);
   FUNC_5(VAR_15);
  }
 }

out:
 FUNC_20(VAR_14);
 return VAR_18;
}
