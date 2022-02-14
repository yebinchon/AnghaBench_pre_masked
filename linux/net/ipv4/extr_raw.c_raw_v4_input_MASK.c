
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {TYPE_2__* dev; } ;
struct net {int dummy; } ;
struct iphdr {int daddr; int saddr; int protocol; } ;
struct hlist_head {int dummy; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int lock; struct hlist_head* ht; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int ,int ,int,int) ;
 int FUNC_1 (struct hlist_head*) ;
 struct net* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct hlist_head*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,int ,int ,int ,int) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sock*) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_3, const struct iphdr *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_6(VAR_3);
 int VAR_7 = FUNC_5(VAR_3);
 struct sock *VAR_8;
 struct hlist_head *VAR_9;
 int VAR_10 = 0;
 struct net *VAR_11;

 FUNC_9(&VAR_2.lock);
 VAR_9 = &VAR_2.ht[VAR_5];
 if (FUNC_3(VAR_9))
  goto out;

 VAR_11 = FUNC_2(VAR_3->dev);
 VAR_8 = FUNC_0(VAR_11, FUNC_1(VAR_9), VAR_4->protocol,
        VAR_4->saddr, VAR_4->daddr, VAR_7, VAR_6);

 while (VAR_8) {
  VAR_10 = 1;
  if ((VAR_4->protocol != VAR_1 || !FUNC_4(VAR_8, VAR_3)) &&
      FUNC_7(VAR_8, VAR_4->daddr, VAR_4->saddr,
       VAR_3->dev->ifindex, VAR_6)) {
   struct sk_buff *VAR_12 = FUNC_12(VAR_3, VAR_0);


   if (VAR_12)
    FUNC_8(VAR_8, VAR_12);
  }
  VAR_8 = FUNC_0(VAR_11, FUNC_11(VAR_8), VAR_4->protocol,
         VAR_4->saddr, VAR_4->daddr,
         VAR_7, VAR_6);
 }
out:
 FUNC_10(&VAR_2.lock);
 return VAR_10;
}
