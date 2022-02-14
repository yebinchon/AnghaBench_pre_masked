
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct sock {int sk_err; int sk_ack_backlog; int sk_receive_queue; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {int vci; int vpi; int itf; } ;
struct TYPE_4__ {TYPE_1__ sap_addr; } ;
struct atmsvc_msg {TYPE_2__ pvc; int sap; int local; int svc; int qos; } ;
struct atm_vcc {int flags; int qos; int sap; int local; int remote; } ;


 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
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
 int VAR_14 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (char*,struct atm_vcc*,struct atm_vcc*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_10 (struct atm_vcc*,int ,struct atm_vcc*,int *,int *) ;
 int FUNC_11 (int *,int ,struct atm_vcc*,int *,int *,int *,int) ;
 scalar_t__ FUNC_12 (int ) ;
 struct sock* FUNC_13 (struct atm_vcc*) ;
 int FUNC_14 (struct sock*) ;
 struct sk_buff* FUNC_15 (int *) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (int ,struct socket*,int ,int) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (struct socket*,int ,int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_20(struct socket *VAR_17, struct socket *VAR_18, int VAR_19,
        bool VAR_20)
{
 struct sock *VAR_21 = VAR_17->sk;
 struct sk_buff *VAR_22;
 struct atmsvc_msg *VAR_23;
 struct atm_vcc *VAR_24 = FUNC_0(VAR_17);
 struct atm_vcc *VAR_25;
 int VAR_26;

 FUNC_4(VAR_21);

 VAR_26 = FUNC_17(FUNC_16(VAR_21), VAR_18, 0, VAR_20);
 if (VAR_26)
  goto out;

 VAR_25 = FUNC_0(VAR_18);

 FUNC_5("%p -> %p\n", VAR_24, VAR_25);
 while (1) {
  FUNC_1(VAR_16);

  FUNC_6(FUNC_14(VAR_21), &VAR_16, VAR_10);
  while (!(VAR_22 = FUNC_15(&VAR_21->sk_receive_queue)) &&
         VAR_15) {
   if (FUNC_18(VAR_2, &VAR_24->flags))
    break;
   if (FUNC_18(VAR_0, &VAR_24->flags)) {
    VAR_26 = -VAR_21->sk_err;
    break;
   }
   if (VAR_19 & VAR_8) {
    VAR_26 = -VAR_4;
    break;
   }
   FUNC_7(VAR_21);
   FUNC_8();
   FUNC_4(VAR_21);
   if (FUNC_12(VAR_14)) {
    VAR_26 = -VAR_6;
    break;
   }
   FUNC_6(FUNC_14(VAR_21), &VAR_16,
     VAR_10);
  }
  FUNC_3(FUNC_14(VAR_21), &VAR_16);
  if (VAR_26)
   goto out;
  if (!VAR_22) {
   VAR_26 = -VAR_7;
   goto out;
  }
  VAR_23 = (struct atmsvc_msg *)VAR_22->data;
  VAR_25->qos = VAR_23->qos;
  FUNC_9(VAR_1, &VAR_25->flags);
  VAR_25->remote = VAR_23->svc;
  VAR_25->local = VAR_23->local;
  VAR_25->sap = VAR_23->sap;
  VAR_26 = FUNC_19(VAR_18, VAR_23->pvc.sap_addr.itf,
        VAR_23->pvc.sap_addr.vpi,
        VAR_23->pvc.sap_addr.vci);
  FUNC_2(VAR_22);
  VAR_21->sk_ack_backlog--;
  if (VAR_26) {
   FUNC_11(((void*)0), VAR_13, VAR_24, ((void*)0), ((void*)0),
      &VAR_24->qos, VAR_26);
   VAR_26 = VAR_26 == -VAR_4 ? -VAR_5 : VAR_26;
   goto out;
  }

  FUNC_9(VAR_3, &VAR_25->flags);
  FUNC_10(VAR_25, VAR_12, VAR_24, ((void*)0), ((void*)0));
  for (;;) {
   FUNC_6(FUNC_14(FUNC_13(VAR_25)), &VAR_16,
     VAR_11);
   if (!FUNC_18(VAR_3, &VAR_25->flags) || !VAR_15)
    break;
   FUNC_7(VAR_21);
   FUNC_8();
   FUNC_4(VAR_21);
  }
  FUNC_3(FUNC_14(FUNC_13(VAR_25)), &VAR_16);
  if (!VAR_15) {
   VAR_26 = -VAR_7;
   goto out;
  }
  if (!FUNC_13(VAR_25)->sk_err)
   break;
  if (FUNC_13(VAR_25)->sk_err != VAR_6) {
   VAR_26 = -FUNC_13(VAR_25)->sk_err;
   goto out;
  }
 }
 VAR_18->state = VAR_9;
out:
 FUNC_7(VAR_21);
 return VAR_26;
}
