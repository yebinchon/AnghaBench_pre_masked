
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; struct l2tp_tunnel* sk_user_data; } ;
struct TYPE_2__ {int mtu; int * ops; struct sock* private; int hdrlen; } ;
struct pppox_sock {TYPE_1__ chan; } ;
struct pppol2tp_session {int sk_lock; int sk; scalar_t__ __sk; } ;
struct l2tp_tunnel_cfg {int debug; int encap; } ;
struct l2tp_tunnel {scalar_t__ peer_tunnel_id; scalar_t__ pwtype; scalar_t__ session_id; scalar_t__ peer_session_id; int name; int * sock; } ;
struct l2tp_session_cfg {scalar_t__ pw_type; int member_0; } ;
struct l2tp_session {scalar_t__ peer_tunnel_id; scalar_t__ pwtype; scalar_t__ session_id; scalar_t__ peer_session_id; int name; int * sock; } ;
struct l2tp_connect_info {scalar_t__ fd; scalar_t__ peer_tunnel_id; int peer_session_id; int session_id; int tunnel_id; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct l2tp_tunnel*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct l2tp_tunnel*) ;
 int FUNC_2 (struct l2tp_tunnel*) ;
 int FUNC_3 (struct l2tp_tunnel*,int ,char*,int ) ;
 struct l2tp_tunnel* FUNC_4 (int,struct l2tp_tunnel*,int ,int ,struct l2tp_session_cfg*) ;
 int FUNC_5 (struct l2tp_tunnel*) ;
 int FUNC_6 (struct l2tp_tunnel*) ;
 int FUNC_7 (struct l2tp_tunnel*) ;
 struct pppol2tp_session* FUNC_8 (struct l2tp_tunnel*) ;
 int FUNC_9 (struct l2tp_tunnel*,struct l2tp_tunnel*) ;
 int FUNC_10 (int ,scalar_t__,int ,int ,scalar_t__,struct l2tp_tunnel_cfg*,struct l2tp_tunnel**) ;
 int FUNC_11 (struct l2tp_tunnel*) ;
 int FUNC_12 (struct l2tp_tunnel*) ;
 struct l2tp_tunnel* FUNC_13 (int ,int ) ;
 struct l2tp_tunnel* FUNC_14 (struct l2tp_tunnel*,int ) ;
 int FUNC_15 (struct l2tp_tunnel*) ;
 int FUNC_16 (struct l2tp_tunnel*,int ,struct l2tp_tunnel_cfg*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_22 (struct l2tp_tunnel*) ;
 int FUNC_23 (struct sockaddr*,int,struct l2tp_connect_info*) ;
 int FUNC_24 (struct l2tp_tunnel*) ;
 struct pppox_sock* FUNC_25 (struct sock*) ;
 int FUNC_26 (int ,struct sock*) ;
 scalar_t__ FUNC_27 (int ,int ) ;
 int FUNC_28 (struct sock*) ;
 int FUNC_29 (struct sock*) ;

__attribute__((used)) static int FUNC_30(struct socket *VAR_13, struct sockaddr *VAR_14,
       int VAR_15, int VAR_16)
{
 struct sock *VAR_17 = VAR_13->sk;
 struct pppox_sock *VAR_18 = FUNC_25(VAR_17);
 struct l2tp_session *VAR_19 = ((void*)0);
 struct l2tp_connect_info VAR_20;
 struct l2tp_tunnel *VAR_21;
 struct pppol2tp_session *VAR_22;
 struct l2tp_session_cfg VAR_23 = { 0, };
 bool VAR_24 = 0;
 bool VAR_25 = 0;
 bool VAR_26 = 0;
 bool VAR_27 = 0;
 int VAR_28;

 VAR_28 = FUNC_23(VAR_14, VAR_15, &VAR_20);
 if (VAR_28 < 0)
  return VAR_28;

 FUNC_17(VAR_17);


 VAR_28 = -VAR_2;
 if (VAR_17->sk_state & VAR_11)
  goto end;


 VAR_28 = -VAR_0;
 if (VAR_17->sk_user_data)
  goto end;


 VAR_28 = -VAR_4;
 if (!VAR_20.tunnel_id)
  goto end;

 VAR_21 = FUNC_13(FUNC_29(VAR_17), VAR_20.tunnel_id);
 if (VAR_21)
  VAR_25 = 1;





 if (!VAR_20.session_id && !VAR_20.peer_session_id) {
  if (VAR_21 == ((void*)0)) {
   struct l2tp_tunnel_cfg VAR_29 = {
    .encap = VAR_7,
    .debug = 0,
   };




   if (VAR_20.fd < 0) {
    VAR_28 = -VAR_1;
    goto end;
   }

   VAR_28 = FUNC_10(FUNC_29(VAR_17), VAR_20.fd,
         VAR_20.version,
         VAR_20.tunnel_id,
         VAR_20.peer_tunnel_id, &VAR_29,
         &VAR_21);
   if (VAR_28 < 0)
    goto end;

   FUNC_15(VAR_21);
   VAR_28 = FUNC_16(VAR_21, FUNC_29(VAR_17),
           &VAR_29);
   if (VAR_28 < 0) {
    FUNC_2(VAR_21);
    goto end;
   }
   VAR_25 = 1;
   VAR_27 = 1;
  }
 } else {

  VAR_28 = -VAR_5;
  if (VAR_21 == ((void*)0))
   goto end;


  if (VAR_21->sock == ((void*)0))
   goto end;
 }

 if (VAR_21->peer_tunnel_id == 0)
  VAR_21->peer_tunnel_id = VAR_20.peer_tunnel_id;

 VAR_19 = FUNC_14(VAR_21, VAR_20.session_id);
 if (VAR_19) {
  VAR_24 = 1;

  if (VAR_19->pwtype != VAR_9) {
   VAR_28 = -VAR_6;
   goto end;
  }

  VAR_22 = FUNC_8(VAR_19);




  FUNC_19(&VAR_22->sk_lock);
  if (FUNC_27(VAR_22->sk,
           FUNC_18(&VAR_22->sk_lock)) ||
      VAR_22->__sk) {
   FUNC_20(&VAR_22->sk_lock);
   VAR_28 = -VAR_3;
   goto end;
  }
 } else {
  VAR_23.pw_type = VAR_9;

  VAR_19 = FUNC_4(sizeof(struct pppol2tp_session),
           VAR_21, VAR_20.session_id,
           VAR_20.peer_session_id, &VAR_23);
  if (FUNC_0(VAR_19)) {
   VAR_28 = FUNC_1(VAR_19);
   goto end;
  }

  FUNC_22(VAR_19);
  VAR_22 = FUNC_8(VAR_19);
  FUNC_7(VAR_19);

  FUNC_19(&VAR_22->sk_lock);
  VAR_28 = FUNC_9(VAR_19, VAR_21);
  if (VAR_28 < 0) {
   FUNC_20(&VAR_22->sk_lock);
   FUNC_2(VAR_19);
   goto end;
  }
  VAR_24 = 1;
  VAR_26 = 1;
 }






 if ((VAR_19->session_id == 0) &&
     (VAR_19->peer_session_id == 0)) {
  VAR_28 = 0;
  goto out_no_ppp;
 }





 VAR_18->chan.hdrlen = VAR_10;

 VAR_18->chan.private = VAR_17;
 VAR_18->chan.ops = &VAR_12;
 VAR_18->chan.mtu = FUNC_24(VAR_21);

 VAR_28 = FUNC_21(FUNC_29(VAR_17), &VAR_18->chan);
 if (VAR_28) {
  FUNC_20(&VAR_22->sk_lock);
  goto end;
 }

out_no_ppp:

 VAR_17->sk_user_data = VAR_19;
 FUNC_26(VAR_22->sk, VAR_17);
 FUNC_20(&VAR_22->sk_lock);





 VAR_24 = 0;

 VAR_17->sk_state = VAR_11;
 FUNC_3(VAR_19, VAR_8, "%s: created\n",
    VAR_19->name);

end:
 if (VAR_28) {
  if (VAR_26)
   FUNC_6(VAR_19);
  if (VAR_27)
   FUNC_12(VAR_21);
 }
 if (VAR_24)
  FUNC_5(VAR_19);
 if (VAR_25)
  FUNC_11(VAR_21);
 FUNC_28(VAR_17);

 return VAR_28;
}
