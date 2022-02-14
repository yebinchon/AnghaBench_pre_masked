
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct rtmsg {int rtm_flags; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct dn_route {int dst; int dn_next; } ;
struct TYPE_7__ {int portid; } ;
struct TYPE_6__ {int chain; } ;
struct TYPE_5__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_4__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (struct net*,int *) ;
 struct rtmsg* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct dn_route* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 struct net* FUNC_11 (int ) ;

int FUNC_12(struct sk_buff *VAR_7, struct netlink_callback *VAR_8)
{
 struct net *VAR_9 = FUNC_11(VAR_7->sk);
 struct dn_route *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 struct rtmsg *VAR_15;

 if (!FUNC_3(VAR_9, &VAR_6))
  return 0;

 if (FUNC_5(VAR_8->nlh) < sizeof(struct rtmsg))
  return -VAR_0;

 VAR_15 = FUNC_4(VAR_8->nlh);
 if (!(VAR_15->rtm_flags & VAR_2))
  return 0;

 VAR_12 = VAR_8->args[0];
 VAR_14 = VAR_13 = VAR_8->args[1];
 for(VAR_11 = 0; VAR_11 <= VAR_4; VAR_11++) {
  if (VAR_11 < VAR_12)
   continue;
  if (VAR_11 > VAR_12)
   VAR_14 = 0;
  FUNC_7();
  for(VAR_10 = FUNC_6(VAR_5[VAR_11].chain), VAR_13 = 0;
   VAR_10;
   VAR_10 = FUNC_6(VAR_10->dn_next), VAR_13++) {
   if (VAR_13 < VAR_14)
    continue;
   FUNC_10(VAR_7, FUNC_2(&VAR_10->dst));
   if (FUNC_1(VAR_7, FUNC_0(VAR_8->skb).portid,
     VAR_8->nlh->nlmsg_seq, VAR_3,
     1, VAR_1) < 0) {
    FUNC_9(VAR_7);
    FUNC_8();
    goto done;
   }
   FUNC_9(VAR_7);
  }
  FUNC_8();
 }

done:
 VAR_8->args[0] = VAR_11;
 VAR_8->args[1] = VAR_13;
 return VAR_7->len;
}
