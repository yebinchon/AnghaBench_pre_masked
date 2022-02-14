
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; int sk_ack_backlog; } ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_dlc {int dummy; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct rfcomm_dlc* dlc; int channel; int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sock*,int) ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 struct sock* FUNC_7 (int ,int ,int *) ;
 TYPE_1__* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct rfcomm_session*,int *,int *) ;
 struct sock* FUNC_10 (int ,int *,int ,int ,int ) ;
 int FUNC_11 (struct sock*,struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (int ,int *) ;

int FUNC_16(struct rfcomm_session *VAR_5, u8 VAR_6, struct rfcomm_dlc **VAR_7)
{
 struct sock *VAR_8, *VAR_9;
 bdaddr_t VAR_10, VAR_11;
 int VAR_12 = 0;

 FUNC_0("session %p channel %d", VAR_5, VAR_6);

 FUNC_9(VAR_5, &VAR_10, &VAR_11);


 VAR_9 = FUNC_7(VAR_2, VAR_6, &VAR_10);
 if (!VAR_9)
  return 0;

 FUNC_2(VAR_9);


 if (FUNC_12(VAR_9)) {
  FUNC_0("backlog full %d", VAR_9->sk_ack_backlog);
  goto done;
 }

 VAR_8 = FUNC_10(FUNC_13(VAR_9), ((void*)0), VAR_0, VAR_4, 0);
 if (!VAR_8)
  goto done;

 FUNC_6(VAR_8, VAR_0);

 FUNC_11(VAR_8, VAR_9);
 FUNC_1(&FUNC_8(VAR_8)->src, &VAR_10);
 FUNC_1(&FUNC_8(VAR_8)->dst, &VAR_11);
 FUNC_8(VAR_8)->channel = VAR_6;

 VAR_8->sk_state = VAR_1;
 FUNC_4(VAR_9, VAR_8, 1);


 *VAR_7 = FUNC_8(VAR_8)->dlc;
 VAR_12 = 1;

done:
 FUNC_3(VAR_9);

 if (FUNC_15(VAR_3, &FUNC_5(VAR_9)->flags))
  VAR_9->sk_state_change(VAR_9);

 return VAR_12;
}
