
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_err; scalar_t__ sk_lingertime; scalar_t__ sk_shutdown; } ;
struct l2cap_conn {int chan_lock; } ;
struct l2cap_chan {scalar_t__ state; scalar_t__ mode; scalar_t__ unacked_frames; struct l2cap_conn* conn; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct l2cap_chan* chan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sock*,struct l2cap_chan*) ;
 int FUNC_2 (struct sock*,int ,scalar_t__) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (struct l2cap_chan*,int ) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (struct l2cap_conn*) ;
 int FUNC_9 (struct l2cap_conn*) ;
 TYPE_1__* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (struct sock*,int ) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct socket *VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 struct l2cap_chan *VAR_10;
 struct l2cap_conn *VAR_11;
 int VAR_12 = 0;

 FUNC_0("sock %p, sk %p", VAR_7, VAR_9);

 if (!VAR_9)
  return 0;

 FUNC_11(VAR_9);

 if (VAR_9->sk_shutdown)
  goto shutdown_already;

 FUNC_0("Handling sock shutdown");


 FUNC_16(VAR_9);

 VAR_10 = FUNC_10(VAR_9)->chan;

 FUNC_4(VAR_10);

 FUNC_0("chan %p state %s", VAR_10, FUNC_18(VAR_10->state));

 if (VAR_10->mode == VAR_2 &&
     VAR_10->unacked_frames > 0 &&
     VAR_10->state == VAR_1) {
  VAR_12 = FUNC_1(VAR_9, VAR_10);





  if (VAR_9->sk_shutdown)
   goto has_shutdown;
 }

 VAR_9->sk_shutdown = VAR_4;
 FUNC_14(VAR_9);

 FUNC_5(VAR_10);
 VAR_11 = VAR_10->conn;
 if (VAR_11)

  FUNC_8(VAR_11);
 FUNC_7(VAR_10);

 if (VAR_11)

  FUNC_12(&VAR_11->chan_lock);

 FUNC_5(VAR_10);
 FUNC_3(VAR_10, 0);
 FUNC_7(VAR_10);

 if (VAR_11) {
  FUNC_13(&VAR_11->chan_lock);
  FUNC_9(VAR_11);
 }

 FUNC_11(VAR_9);

 if (FUNC_15(VAR_9, VAR_5) && VAR_9->sk_lingertime &&
     !(VAR_6->flags & VAR_3))
  VAR_12 = FUNC_2(VAR_9, VAR_0,
      VAR_9->sk_lingertime);

has_shutdown:
 FUNC_6(VAR_10);
 FUNC_17(VAR_9);

shutdown_already:
 if (!VAR_12 && VAR_9->sk_err)
  VAR_12 = -VAR_9->sk_err;

 FUNC_14(VAR_9);

 FUNC_0("Sock shutdown complete err: %d", VAR_12);

 return VAR_12;
}
