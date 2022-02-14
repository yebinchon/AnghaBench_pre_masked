
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct tipc_bearer {TYPE_1__* media; int mtu; int window; int tolerance; int priority; int name; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ type_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 void* FUNC_2 (int ,int ,int ,int *,int,int ) ;
 int FUNC_3 (int ,struct nlattr*) ;
 int FUNC_4 (int ,struct nlattr*) ;
 struct nlattr* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (struct tipc_nl_msg*,struct tipc_bearer*) ;

__attribute__((used)) static int FUNC_9(struct tipc_nl_msg *VAR_11,
    struct tipc_bearer *VAR_12, int VAR_13)
{
 void *VAR_14;
 struct nlattr *VAR_15;
 struct nlattr *VAR_16;

 VAR_14 = FUNC_2(VAR_11->skb, VAR_11->portid, VAR_11->seq, &VAR_10,
     VAR_13, VAR_9);
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = FUNC_5(VAR_11->skb, VAR_2);
 if (!VAR_15)
  goto msg_full;

 if (FUNC_6(VAR_11->skb, VAR_3, VAR_12->name))
  goto attr_msg_full;

 VAR_16 = FUNC_5(VAR_11->skb, VAR_4);
 if (!VAR_16)
  goto prop_msg_full;
 if (FUNC_7(VAR_11->skb, VAR_6, VAR_12->priority))
  goto prop_msg_full;
 if (FUNC_7(VAR_11->skb, VAR_7, VAR_12->tolerance))
  goto prop_msg_full;
 if (FUNC_7(VAR_11->skb, VAR_8, VAR_12->window))
  goto prop_msg_full;
 if (VAR_12->media->type_id == VAR_1)
  if (FUNC_7(VAR_11->skb, VAR_5, VAR_12->mtu))
   goto prop_msg_full;

 FUNC_4(VAR_11->skb, VAR_16);
 FUNC_4(VAR_11->skb, VAR_15);
 FUNC_1(VAR_11->skb, VAR_14);

 return 0;

prop_msg_full:
 FUNC_3(VAR_11->skb, VAR_16);
attr_msg_full:
 FUNC_3(VAR_11->skb, VAR_15);
msg_full:
 FUNC_0(VAR_11->skb, VAR_14);

 return -VAR_0;
}
