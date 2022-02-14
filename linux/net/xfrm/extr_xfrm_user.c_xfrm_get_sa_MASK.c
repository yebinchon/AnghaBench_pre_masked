
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_usersa_id {int dummy; } ;
struct xfrm_state {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;
struct TYPE_4__ {int portid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_2__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct xfrm_usersa_id* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (int ,struct sk_buff*,int ) ;
 struct net* FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,struct xfrm_state*,int ) ;
 int FUNC_7 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_8 (struct net*,struct xfrm_usersa_id*,struct nlattr**,int*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
  struct nlattr **VAR_3)
{
 struct net *VAR_4 = FUNC_5(VAR_1->sk);
 struct xfrm_usersa_id *VAR_5 = FUNC_3(VAR_2);
 struct xfrm_state *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_8(VAR_4, VAR_5, VAR_3, &VAR_8);
 if (VAR_6 == ((void*)0))
  goto out_noput;

 VAR_7 = FUNC_6(VAR_1, VAR_6, VAR_2->nlmsg_seq);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7);
 } else {
  VAR_8 = FUNC_4(VAR_4->xfrm.nlsk, VAR_7, FUNC_1(VAR_1).portid);
 }
 FUNC_7(VAR_6);
out_noput:
 return VAR_8;
}
