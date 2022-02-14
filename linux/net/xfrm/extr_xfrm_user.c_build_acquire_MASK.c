
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_user_acquire {int seq; int calgos; int ealgos; int aalgos; int policy; int sel; int saddr; int id; } ;
struct xfrm_tmpl {int calgos; int ealgos; int aalgos; } ;
struct TYPE_4__ {int seq; } ;
struct TYPE_3__ {int saddr; } ;
struct xfrm_state {TYPE_2__ km; int sel; TYPE_1__ props; int id; } ;
struct xfrm_policy {int if_id; int mark; int type; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfrm_policy*,int *,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_3 (struct xfrm_policy*,struct sk_buff*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_user_acquire* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_3, struct xfrm_state *VAR_4,
    struct xfrm_tmpl *VAR_5, struct xfrm_policy *VAR_6)
{
 __u32 VAR_7 = FUNC_9();
 struct xfrm_user_acquire *VAR_8;
 struct nlmsghdr *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_8(VAR_3, 0, 0, VAR_1, sizeof(*VAR_8), 0);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_9);
 FUNC_4(&VAR_8->id, &VAR_4->id, sizeof(VAR_8->id));
 FUNC_4(&VAR_8->saddr, &VAR_4->props.saddr, sizeof(VAR_8->saddr));
 FUNC_4(&VAR_8->sel, &VAR_4->sel, sizeof(VAR_8->sel));
 FUNC_0(VAR_6, &VAR_8->policy, VAR_2);
 VAR_8->aalgos = VAR_5->aalgos;
 VAR_8->ealgos = VAR_5->ealgos;
 VAR_8->calgos = VAR_5->calgos;
 VAR_8->seq = VAR_4->km.seq = VAR_7;

 VAR_10 = FUNC_3(VAR_6, VAR_3);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_10)
  VAR_10 = FUNC_1(VAR_6->type, VAR_3);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_3, &VAR_6->mark);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_3, VAR_6->if_id);
 if (VAR_10) {
  FUNC_5(VAR_3, VAR_9);
  return VAR_10;
 }

 FUNC_7(VAR_3, VAR_9);
 return 0;
}
