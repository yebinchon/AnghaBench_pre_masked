
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xfrm_state_walk {int dummy; } ;
struct xfrm_dump_info {int nlmsg_flags; int nlmsg_seq; struct sk_buff* out_skb; int in_skb; } ;
struct xfrm_address_filter {int dummy; } ;
struct sk_buff {int len; int sk; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int* args; int extack; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int nlmsg_seq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct xfrm_address_filter* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (TYPE_1__*,int ,struct nlattr**,int ,int ,int ) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct net*,struct xfrm_state_walk*,int ,struct xfrm_dump_info*) ;
 int FUNC_7 (struct xfrm_state_walk*,int ,struct xfrm_address_filter*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_8, struct netlink_callback *VAR_9)
{
 struct net *VAR_10 = FUNC_5(VAR_8->sk);
 struct xfrm_state_walk *VAR_11 = (struct xfrm_state_walk *) &VAR_9->args[1];
 struct xfrm_dump_info VAR_12;

 FUNC_0(sizeof(struct xfrm_state_walk) >
       sizeof(VAR_9->args) - sizeof(VAR_9->args[0]));

 VAR_12.in_skb = VAR_9->skb;
 VAR_12.out_skb = VAR_8;
 VAR_12.nlmsg_seq = VAR_9->nlh->nlmsg_seq;
 VAR_12.nlmsg_flags = VAR_2;

 if (!VAR_9->args[0]) {
  struct nlattr *VAR_13[VAR_4+1];
  struct xfrm_address_filter *VAR_14 = ((void*)0);
  u8 VAR_15 = 0;
  int VAR_16;

  VAR_16 = FUNC_4(VAR_9->nlh, 0, VAR_13, VAR_4,
          VAR_7, VAR_9->extack);
  if (VAR_16 < 0)
   return VAR_16;

  if (VAR_13[VAR_3]) {
   VAR_14 = FUNC_1(FUNC_2(VAR_13[VAR_3]),
      sizeof(*VAR_14), VAR_1);
   if (VAR_14 == ((void*)0))
    return -VAR_0;
  }

  if (VAR_13[VAR_5])
   VAR_15 = FUNC_3(VAR_13[VAR_5]);

  FUNC_7(VAR_11, VAR_15, VAR_14);
  VAR_9->args[0] = 1;
 }

 (void) FUNC_6(VAR_10, VAR_11, VAR_6, &VAR_12);

 return VAR_8->len;
}
