
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct km_event {TYPE_1__ data; int seq; int portid; struct net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct net*,struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(const struct km_event *VAR_5)
{
 struct net *VAR_6 = VAR_5->net;
 struct nlmsghdr *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(FUNC_5(), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_8, VAR_5->portid, VAR_5->seq, VAR_4, 0, 0);
 VAR_9 = -VAR_0;
 if (VAR_7 == ((void*)0))
  goto out_free_skb;
 VAR_9 = FUNC_0(VAR_5->data.type, VAR_8);
 if (VAR_9)
  goto out_free_skb;

 FUNC_2(VAR_8, VAR_7);

 return FUNC_6(VAR_6, VAR_8, 0, VAR_3);

out_free_skb:
 FUNC_1(VAR_8);
 return VAR_9;
}
