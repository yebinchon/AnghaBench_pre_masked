
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_dm_hw_entries {int dummy; } ;
struct net_dm_alert_msg {int member_0; } ;
typedef int anc_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_dm_hw_entries const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct net_dm_alert_msg*) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_4,
         const struct net_dm_hw_entries *VAR_5)
{
 struct net_dm_alert_msg VAR_6 = { 0 };
 void *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_4, 0, 0, &VAR_3, 0,
     VAR_1);
 if (!VAR_7)
  return -VAR_0;




 if (FUNC_4(VAR_4, VAR_2, sizeof(VAR_6), &VAR_6))
  goto nla_put_failure;

 VAR_8 = FUNC_3(VAR_4, VAR_5);
 if (VAR_8)
  goto nla_put_failure;

 FUNC_1(VAR_4, VAR_7);

 return 0;

nla_put_failure:
 FUNC_0(VAR_4, VAR_7);
 return -VAR_0;
}
