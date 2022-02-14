
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sock {int sk_state; } ;
struct sk_buff {int * data; } ;
struct ppp_channel {scalar_t__ private; } ;
struct l2tp_tunnel {scalar_t__ encap; } ;
struct l2tp_session {int hdr_len; struct l2tp_tunnel* tunnel; } ;
struct iphdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct l2tp_session*,struct sk_buff*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct l2tp_session* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct ppp_channel *VAR_6, struct sk_buff *VAR_7)
{
 struct sock *VAR_8 = (struct sock *) VAR_6->private;
 struct l2tp_session *VAR_9;
 struct l2tp_tunnel *VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_7(VAR_8, VAR_5) || !(VAR_8->sk_state & VAR_2))
  goto abort;


 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9 == ((void*)0))
  goto abort;

 VAR_10 = VAR_9->tunnel;

 VAR_11 = (VAR_10->encap == VAR_0) ? sizeof(struct udphdr) : 0;
 VAR_12 = VAR_1 +
     sizeof(struct iphdr) +
     VAR_11 +
     VAR_9->hdr_len +
     2;
 if (FUNC_6(VAR_7, VAR_12))
  goto abort_put_sess;


 FUNC_0(VAR_7, 2);
 VAR_7->data[0] = VAR_3;
 VAR_7->data[1] = VAR_4;

 FUNC_3();
 FUNC_2(VAR_9, VAR_7, VAR_9->hdr_len);
 FUNC_4();

 FUNC_8(VAR_8);

 return 1;

abort_put_sess:
 FUNC_8(VAR_8);
abort:

 FUNC_1(VAR_7);
 return 1;
}
