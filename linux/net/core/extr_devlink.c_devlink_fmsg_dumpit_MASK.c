
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct devlink_fmsg {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct devlink_fmsg*,struct sk_buff*,int*) ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct devlink_fmsg *VAR_4, struct sk_buff *VAR_5,
          struct netlink_callback *VAR_6,
          enum devlink_command VAR_7)
{
 int VAR_8 = VAR_6->args[0];
 int VAR_9 = VAR_8;
 void *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_5, FUNC_0(VAR_6->skb).portid, VAR_6->nlh->nlmsg_seq,
     &VAR_3, VAR_1 | VAR_2, VAR_7);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto nla_put_failure;
 }

 VAR_11 = FUNC_1(VAR_4, VAR_5, &VAR_8);
 if ((VAR_11 && VAR_11 != -VAR_0) || VAR_9 == VAR_8)
  goto nla_put_failure;

 VAR_6->args[0] = VAR_8;
 FUNC_3(VAR_5, VAR_10);
 return VAR_5->len;

nla_put_failure:
 FUNC_2(VAR_5, VAR_10);
 return VAR_11;
}
