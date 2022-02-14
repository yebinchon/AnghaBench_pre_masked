
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {unsigned char* data; int len; int dev; } ;
struct net {int dummy; } ;
struct l2tp_tunnel {int debug; int name; } ;
struct l2tp_session {struct l2tp_tunnel* tunnel; } ;
struct iphdr {int saddr; int daddr; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_5 (struct l2tp_session*,struct sk_buff*,unsigned char*,unsigned char*,int ,int ) ;
 int FUNC_6 (struct l2tp_session*) ;
 struct l2tp_session* FUNC_7 (struct net*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct l2tp_session*,struct sk_buff*,unsigned char**,unsigned char**) ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int ,unsigned char*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct sock*,struct sk_buff*,int) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_4)
{
 struct net *VAR_5 = FUNC_2(VAR_4->dev);
 struct sock *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 unsigned char *VAR_9, *VAR_10;
 struct l2tp_session *VAR_11;
 struct l2tp_tunnel *VAR_12 = ((void*)0);
 struct iphdr *VAR_13;
 int VAR_14;

 if (!FUNC_14(VAR_4, 4))
  goto discard;


 VAR_10 = VAR_9 = VAR_4->data;
 VAR_7 = FUNC_11(*((__be32 *) VAR_9));
 VAR_9 += 4;





 if (VAR_7 == 0) {
  FUNC_1(VAR_4, 4);
  goto pass_up;
 }


 VAR_11 = FUNC_7(VAR_5, VAR_7);
 if (!VAR_11)
  goto discard;

 VAR_12 = VAR_11->tunnel;
 if (!VAR_12)
  goto discard_sess;


 if (VAR_12->debug & VAR_1) {
  VAR_14 = FUNC_9(32u, VAR_4->len);
  if (!FUNC_14(VAR_4, VAR_14))
   goto discard_sess;


  VAR_10 = VAR_9 = VAR_4->data;
  VAR_9 += 4;
  FUNC_12("%s: ip recv\n", VAR_12->name);
  FUNC_13("", VAR_0, VAR_9, VAR_14);
 }

 if (FUNC_8(VAR_11, VAR_4, &VAR_9, &VAR_10))
  goto discard_sess;

 FUNC_5(VAR_11, VAR_4, VAR_9, VAR_10, 0, VAR_4->len);
 FUNC_6(VAR_11);

 return 0;

pass_up:

 if (!FUNC_14(VAR_4, 12))
  goto discard;

 if ((VAR_4->data[0] & 0xc0) != 0xc0)
  goto discard;

 VAR_8 = FUNC_11(*(__be32 *) &VAR_4->data[4]);
 VAR_13 = (struct iphdr *)FUNC_18(VAR_4);

 FUNC_15(&VAR_3);
 VAR_6 = FUNC_0(VAR_5, VAR_13->daddr, VAR_13->saddr, FUNC_3(VAR_4),
       VAR_8);
 if (!VAR_6) {
  FUNC_16(&VAR_3);
  goto discard;
 }
 FUNC_19(VAR_6);
 FUNC_16(&VAR_3);

 if (!FUNC_21(VAR_6, VAR_2, VAR_4))
  goto discard_put;

 FUNC_10(VAR_4);

 return FUNC_17(VAR_6, VAR_4, 1);

discard_sess:
 FUNC_6(VAR_11);
 goto discard;

discard_put:
 FUNC_20(VAR_6);

discard:
 FUNC_4(VAR_4);
 return 0;
}
