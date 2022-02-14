
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_bound_dev_if; } ;
struct sk_buff {int protocol; struct net_device* dev; } ;
struct net_device {size_t name; int needed_tailroom; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_1 (int ,int ) ;
 struct net_device* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ,struct msghdr*,size_t) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sk_buff*,size_t) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 struct sk_buff* FUNC_16 (struct sock*,int,int,int*) ;
 int FUNC_17 (struct sock*) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_8, struct msghdr *VAR_9, size_t VAR_10)
{
 struct net_device *VAR_11;
 unsigned int VAR_12;
 struct sk_buff *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 if (VAR_9->msg_flags & VAR_7) {
  FUNC_10("msg->msg_flags = 0x%x\n", VAR_9->msg_flags);
  return -VAR_3;
 }

 FUNC_7(VAR_8);
 if (!VAR_8->sk_bound_dev_if)
  VAR_11 = FUNC_2(FUNC_17(VAR_8), VAR_0);
 else
  VAR_11 = FUNC_1(FUNC_17(VAR_8), VAR_8->sk_bound_dev_if);
 FUNC_11(VAR_8);

 if (!VAR_11) {
  FUNC_10("no dev\n");
  VAR_16 = -VAR_2;
  goto out;
 }

 VAR_12 = VAR_5;
 FUNC_10("name = %s, mtu = %u\n", VAR_11->name, VAR_12);

 if (VAR_10 > VAR_12) {
  FUNC_10("size = %zu, mtu = %u\n", VAR_10, VAR_12);
  VAR_16 = -VAR_1;
  goto out_dev;
 }

 VAR_14 = FUNC_0(VAR_11);
 VAR_15 = VAR_11->needed_tailroom;
 VAR_13 = FUNC_16(VAR_8, VAR_14 + VAR_15 + VAR_10,
      VAR_9->msg_flags & VAR_6, &VAR_16);
 if (!VAR_13)
  goto out_dev;

 FUNC_13(VAR_13, VAR_14);

 FUNC_14(VAR_13);
 FUNC_15(VAR_13);

 VAR_16 = FUNC_8(FUNC_12(VAR_13, VAR_10), VAR_9, VAR_10);
 if (VAR_16 < 0)
  goto out_skb;

 VAR_13->dev = VAR_11;
 VAR_13->protocol = FUNC_5(VAR_4);

 VAR_16 = FUNC_4(VAR_13);
 if (VAR_16 > 0)
  VAR_16 = FUNC_9(VAR_16);

 FUNC_3(VAR_11);

 return VAR_16 ?: VAR_10;

out_skb:
 FUNC_6(VAR_13);
out_dev:
 FUNC_3(VAR_11);
out:
 return VAR_16;
}
