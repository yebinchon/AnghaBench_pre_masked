
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct ipvs_sync_daemon_cfg {int dummy; } ;
typedef int __u32 ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,struct ipvs_sync_daemon_cfg*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, __u32 VAR_5,
      struct ipvs_sync_daemon_cfg *VAR_6,
      struct netlink_callback *VAR_7)
{
 void *VAR_8;
 VAR_8 = FUNC_3(VAR_4, FUNC_0(VAR_7->skb).portid, VAR_7->nlh->nlmsg_seq,
     &VAR_3, VAR_2,
     VAR_1);
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_4(VAR_4, VAR_5, VAR_6))
  goto nla_put_failure;

 FUNC_2(VAR_4, VAR_8);
 return 0;

nla_put_failure:
 FUNC_1(VAR_4, VAR_8);
 return -VAR_0;
}
