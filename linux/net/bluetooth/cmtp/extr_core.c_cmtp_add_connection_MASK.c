
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct socket {int sk; } ;
struct cmtp_session {scalar_t__ state; int flags; struct socket* sock; int terminate; int task; int num; int ** reassembly; int transmit; int applications; int msgnum; int wait; int name; int bdaddr; int mtu; } ;
struct cmtp_connadd_req {int flags; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct TYPE_3__ {int imtu; int omtu; int dst; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 struct cmtp_session* FUNC_5 (int *) ;
 int FUNC_6 (struct cmtp_session*) ;
 int FUNC_7 (struct cmtp_session*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct cmtp_session*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct cmtp_session*) ;
 int FUNC_15 (int ,struct cmtp_session*,char*,int ) ;
 struct cmtp_session* FUNC_16 (int,int ) ;
 int FUNC_17 (struct socket*) ;
 TYPE_2__* FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,char*,int *) ;
 int VAR_12 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ) ;

int FUNC_26(struct cmtp_connadd_req *VAR_13, struct socket *VAR_14)
{
 u32 VAR_15 = FUNC_0(VAR_3);
 struct cmtp_session *VAR_16, *VAR_17;
 int VAR_18, VAR_19;

 FUNC_1("");

 if (!FUNC_17(VAR_14))
  return -VAR_4;

 if (VAR_13->flags & ~VAR_15)
  return -VAR_6;

 VAR_16 = FUNC_16(sizeof(struct cmtp_session), VAR_8);
 if (!VAR_16)
  return -VAR_7;

 FUNC_12(&VAR_11);

 VAR_17 = FUNC_5(&FUNC_18(VAR_14->sk)->chan->dst);
 if (VAR_17 && VAR_17->state == VAR_1) {
  VAR_19 = -VAR_5;
  goto failed;
 }

 FUNC_10(&VAR_16->bdaddr, &FUNC_18(VAR_14->sk)->chan->dst);

 VAR_16->mtu = FUNC_19(VAR_12, FUNC_18(VAR_14->sk)->chan->omtu,
     FUNC_18(VAR_14->sk)->chan->imtu);

 FUNC_1("mtu %d", VAR_16->mtu);

 FUNC_23(VAR_16->name, "%pMR", &VAR_16->bdaddr);

 VAR_16->sock = VAR_14;
 VAR_16->state = VAR_0;

 FUNC_13(&VAR_16->wait);

 VAR_16->msgnum = VAR_2;

 FUNC_2(&VAR_16->applications);

 FUNC_22(&VAR_16->transmit);

 for (VAR_18 = 0; VAR_18 < 16; VAR_18++)
  VAR_16->reassembly[VAR_18] = ((void*)0);

 VAR_16->flags = VAR_13->flags;

 FUNC_6(VAR_16);

 FUNC_8(VAR_9);
 VAR_16->task = FUNC_15(VAR_10, VAR_16, "kcmtpd_ctr_%d",
        VAR_16->num);
 if (FUNC_3(VAR_16->task)) {
  FUNC_20(VAR_9);
  VAR_19 = FUNC_4(VAR_16->task);
  goto unlink;
 }

 if (!(VAR_16->flags & FUNC_0(VAR_3))) {
  VAR_19 = FUNC_11(VAR_16);
  if (VAR_19 < 0) {
   FUNC_9(&VAR_16->terminate);
   FUNC_25(FUNC_21(VAR_16->sock->sk));
   FUNC_24(&VAR_11);
   return VAR_19;
  }
 }

 FUNC_24(&VAR_11);
 return 0;

unlink:
 FUNC_7(VAR_16);

failed:
 FUNC_24(&VAR_11);
 FUNC_14(VAR_16);
 return VAR_19;
}
