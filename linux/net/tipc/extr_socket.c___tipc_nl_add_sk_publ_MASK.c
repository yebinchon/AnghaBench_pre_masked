
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct publication {int upper; int lower; int type; int key; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_9,
     struct netlink_callback *VAR_10,
     struct publication *VAR_11)
{
 void *VAR_12;
 struct nlattr *VAR_13;

 VAR_12 = FUNC_3(VAR_9, FUNC_0(VAR_10->skb).portid, VAR_10->nlh->nlmsg_seq,
     &VAR_8, VAR_1, VAR_7);
 if (!VAR_12)
  goto msg_cancel;

 VAR_13 = FUNC_6(VAR_9, VAR_2);
 if (!VAR_13)
  goto genlmsg_cancel;

 if (FUNC_7(VAR_9, VAR_3, VAR_11->key))
  goto attr_msg_cancel;
 if (FUNC_7(VAR_9, VAR_5, VAR_11->type))
  goto attr_msg_cancel;
 if (FUNC_7(VAR_9, VAR_4, VAR_11->lower))
  goto attr_msg_cancel;
 if (FUNC_7(VAR_9, VAR_6, VAR_11->upper))
  goto attr_msg_cancel;

 FUNC_5(VAR_9, VAR_13);
 FUNC_2(VAR_9, VAR_12);

 return 0;

attr_msg_cancel:
 FUNC_4(VAR_9, VAR_13);
genlmsg_cancel:
 FUNC_1(VAR_9, VAR_12);
msg_cancel:
 return -VAR_0;
}
