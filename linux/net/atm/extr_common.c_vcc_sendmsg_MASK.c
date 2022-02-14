
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; int * dev; int truesize; } ;
struct msghdr {int msg_flags; int msg_iter; scalar_t__ msg_name; } ;
struct TYPE_5__ {size_t max_sdu; } ;
struct TYPE_6__ {TYPE_1__ txtp; } ;
struct atm_vcc {TYPE_4__* dev; int flags; TYPE_2__ qos; } ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int (* send ) (struct atm_vcc*,struct sk_buff*) ;} ;


 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_4 (int ,size_t,int *) ;
 int VAR_16 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sk_buff*,size_t) ;
 int FUNC_18 (struct atm_vcc*,struct sk_buff*) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 int FUNC_20 (struct atm_vcc*,int) ;
 int VAR_17 ;

int FUNC_21(struct socket *VAR_18, struct msghdr *VAR_19, size_t VAR_20)
{
 struct sock *VAR_21 = VAR_18->sk;
 FUNC_1(VAR_17);
 struct atm_vcc *VAR_22;
 struct sk_buff *VAR_23;
 int VAR_24, VAR_25;

 FUNC_7(VAR_21);
 if (VAR_18->state != VAR_14) {
  VAR_25 = -VAR_8;
  goto out;
 }
 if (VAR_19->msg_name) {
  VAR_25 = -VAR_5;
  goto out;
 }
 VAR_22 = FUNC_0(VAR_18);
 if (FUNC_19(VAR_2, &VAR_22->flags) ||
     FUNC_19(VAR_0, &VAR_22->flags) ||
     !FUNC_19(VAR_1, &VAR_22->flags)) {
  VAR_25 = -VAR_9;
  FUNC_13(VAR_13, VAR_16, 0);
  goto out;
 }
 if (!VAR_20) {
  VAR_25 = 0;
  goto out;
 }
 if (VAR_20 > VAR_22->qos.txtp.max_sdu) {
  VAR_25 = -VAR_6;
  goto out;
 }

 VAR_24 = (VAR_20+3) & ~3;
 FUNC_10(FUNC_15(VAR_21), &VAR_17, VAR_15);
 VAR_25 = 0;
 while (!FUNC_20(VAR_22, VAR_24)) {
  if (VAR_19->msg_flags & VAR_12) {
   VAR_25 = -VAR_3;
   break;
  }
  FUNC_12();
  if (FUNC_14(VAR_16)) {
   VAR_25 = -VAR_10;
   break;
  }
  if (FUNC_19(VAR_2, &VAR_22->flags) ||
      FUNC_19(VAR_0, &VAR_22->flags) ||
      !FUNC_19(VAR_1, &VAR_22->flags)) {
   VAR_25 = -VAR_9;
   FUNC_13(VAR_13, VAR_16, 0);
   break;
  }
  FUNC_10(FUNC_15(VAR_21), &VAR_17, VAR_15);
 }
 FUNC_5(FUNC_15(VAR_21), &VAR_17);
 if (VAR_25)
  goto out;

 VAR_23 = FUNC_2(VAR_24, VAR_11);
 if (!VAR_23) {
  VAR_25 = -VAR_7;
  goto out;
 }
 FUNC_9("%d += %d\n", FUNC_16(VAR_21), VAR_23->truesize);
 FUNC_3(VAR_22, VAR_23);

 VAR_23->dev = ((void*)0);
 if (!FUNC_4(FUNC_17(VAR_23, VAR_20), VAR_20, &VAR_19->msg_iter)) {
  FUNC_6(VAR_23);
  VAR_25 = -VAR_4;
  goto out;
 }
 if (VAR_24 != VAR_20)
  FUNC_8(VAR_23->data + VAR_20, 0, VAR_24-VAR_20);
 VAR_25 = VAR_22->dev->ops->send(VAR_22, VAR_23);
 VAR_25 = VAR_25 ? VAR_25 : VAR_20;
out:
 FUNC_11(VAR_21);
 return VAR_25;
}
