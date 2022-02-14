
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct regulatory_request {int dummy; } ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*,struct regulatory_request*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(enum nl80211_commands VAR_5,
         struct regulatory_request *VAR_6)
{
 struct sk_buff *VAR_7;
 void *VAR_8;

 VAR_7 = FUNC_5(VAR_3, VAR_1);
 if (!VAR_7)
  return;

 VAR_8 = FUNC_3(VAR_7, 0, 0, 0, VAR_5);
 if (!VAR_8)
  goto nla_put_failure;

 if (!FUNC_2(VAR_7, VAR_6))
  goto nla_put_failure;

 FUNC_0(VAR_7, VAR_8);

 FUNC_6();
 FUNC_1(&VAR_4, VAR_7, 0,
    VAR_2, VAR_0);
 FUNC_7();

 return;

nla_put_failure:
 FUNC_4(VAR_7);
}
