
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_usersa_info {int dummy; } ;
struct xfrm_usersa_id {int proto; int family; int spi; int daddr; } ;
struct TYPE_4__ {int proto; int spi; int daddr; } ;
struct TYPE_3__ {int family; } ;
struct xfrm_state {TYPE_2__ id; TYPE_1__ props; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct km_event {int event; int seq; int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct xfrm_state*,struct xfrm_usersa_info*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct xfrm_usersa_id*,int ,int) ;
 struct xfrm_usersa_info* FUNC_5 (struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (unsigned int,int ) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int ,int ,int ,unsigned int,int ) ;
 int FUNC_12 (struct net*,struct sk_buff*,int ,int ) ;
 unsigned int FUNC_13 (struct xfrm_state*) ;
 struct net* FUNC_14 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_15(struct xfrm_state *VAR_6, const struct km_event *VAR_7)
{
 struct net *VAR_8 = FUNC_14(VAR_6);
 struct xfrm_usersa_info *VAR_9;
 struct xfrm_usersa_id *VAR_10;
 struct nlmsghdr *VAR_11;
 struct sk_buff *VAR_12;
 unsigned int VAR_13 = FUNC_13(VAR_6);
 unsigned int VAR_14;
 int VAR_15;

 VAR_14 = sizeof(*VAR_9);
 if (VAR_7->event == VAR_5) {
  VAR_13 += FUNC_7(VAR_14);
  VAR_14 = sizeof(*VAR_10);
  VAR_13 += FUNC_7(sizeof(struct xfrm_mark));
 }
 VAR_13 += FUNC_0(VAR_14);

 VAR_12 = FUNC_10(VAR_13, VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_11 = FUNC_11(VAR_12, VAR_7->portid, VAR_7->seq, VAR_7->event, VAR_14, 0);
 VAR_15 = -VAR_0;
 if (VAR_11 == ((void*)0))
  goto out_free_skb;

 VAR_9 = FUNC_8(VAR_11);
 if (VAR_7->event == VAR_5) {
  struct nlattr *VAR_16;

  VAR_10 = FUNC_8(VAR_11);
  FUNC_4(VAR_10, 0, sizeof(*VAR_10));
  FUNC_3(&VAR_10->daddr, &VAR_6->id.daddr, sizeof(VAR_10->daddr));
  VAR_10->spi = VAR_6->id.spi;
  VAR_10->family = VAR_6->props.family;
  VAR_10->proto = VAR_6->id.proto;

  VAR_16 = FUNC_6(VAR_12, VAR_3, sizeof(*VAR_9));
  VAR_15 = -VAR_0;
  if (VAR_16 == ((void*)0))
   goto out_free_skb;

  VAR_9 = FUNC_5(VAR_16);
 }
 VAR_15 = FUNC_1(VAR_6, VAR_9, VAR_12);
 if (VAR_15)
  goto out_free_skb;

 FUNC_9(VAR_12, VAR_11);

 return FUNC_12(VAR_8, VAR_12, 0, VAR_4);

out_free_skb:
 FUNC_2(VAR_12);
 return VAR_15;
}
