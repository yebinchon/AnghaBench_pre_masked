
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_user_polexpire {int hard; int pol; } ;
struct xfrm_policy {int if_id; int mark; int type; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_2__ {int hard; } ;
struct km_event {int portid; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_policy*,int *,int) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct xfrm_policy*,struct sk_buff*) ;
 int FUNC_3 (struct xfrm_policy*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_user_polexpire* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_2, struct xfrm_policy *VAR_3,
      int VAR_4, const struct km_event *VAR_5)
{
 struct xfrm_user_polexpire *VAR_6;
 int VAR_7 = VAR_5->data.hard;
 struct nlmsghdr *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(VAR_2, VAR_5->portid, 0, VAR_1, sizeof(*VAR_6), 0);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_8);
 FUNC_0(VAR_3, &VAR_6->pol, VAR_4);
 VAR_9 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_3->type, VAR_2);
 if (!VAR_9)
  VAR_9 = FUNC_9(VAR_2, &VAR_3->mark);
 if (!VAR_9)
  VAR_9 = FUNC_8(VAR_2, VAR_3->if_id);
 if (VAR_9) {
  FUNC_4(VAR_2, VAR_8);
  return VAR_9;
 }
 VAR_6->hard = !!VAR_7;

 FUNC_6(VAR_2, VAR_8);
 return 0;
}
