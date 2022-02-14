
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_state; } ;
struct sk_buff {int * data; } ;
struct msghdr {int dummy; } ;
struct l2tp_tunnel {scalar_t__ encap; } ;
struct l2tp_session {int hdr_len; struct l2tp_tunnel* tunnel; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct l2tp_session*,struct sk_buff*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct msghdr*,size_t) ;
 struct l2tp_session* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*,size_t) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;
 struct sk_buff* FUNC_12 (struct sock*,int,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct socket *VAR_10, struct msghdr *VAR_11,
       size_t VAR_12)
{
 struct sock *VAR_13 = VAR_10->sk;
 struct sk_buff *VAR_14;
 int VAR_15;
 struct l2tp_session *VAR_16;
 struct l2tp_tunnel *VAR_17;
 int VAR_18;

 VAR_15 = -VAR_2;
 if (FUNC_10(VAR_13, VAR_9) || !(VAR_13->sk_state & VAR_6))
  goto error;


 VAR_15 = -VAR_0;
 VAR_16 = FUNC_5(VAR_13);
 if (VAR_16 == ((void*)0))
  goto error;

 VAR_17 = VAR_16->tunnel;

 VAR_18 = (VAR_17->encap == VAR_4) ? sizeof(struct udphdr) : 0;


 VAR_15 = -VAR_1;
 VAR_14 = FUNC_12(VAR_13, VAR_5 + sizeof(struct iphdr) +
      VAR_18 + VAR_16->hdr_len +
      2 + VAR_12,
      0, VAR_3);
 if (!VAR_14)
  goto error_put_sess;


 FUNC_7(VAR_14, VAR_5);
 FUNC_8(VAR_14);
 FUNC_7(VAR_14, sizeof(struct iphdr));
 FUNC_9(VAR_14);
 FUNC_7(VAR_14, VAR_18);


 VAR_14->data[0] = VAR_7;
 VAR_14->data[1] = VAR_8;
 FUNC_6(VAR_14, 2);


 VAR_15 = FUNC_4(FUNC_6(VAR_14, VAR_12), VAR_11, VAR_12);
 if (VAR_15 < 0) {
  FUNC_0(VAR_14);
  goto error_put_sess;
 }

 FUNC_2();
 FUNC_1(VAR_16, VAR_14, VAR_16->hdr_len);
 FUNC_3();

 FUNC_11(VAR_13);

 return VAR_12;

error_put_sess:
 FUNC_11(VAR_13);
error:
 return VAR_15;
}
