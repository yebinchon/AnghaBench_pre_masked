
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct wiphy*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct wiphy*,struct ieee80211_channel*,int) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

void FUNC_12(struct wiphy *VAR_8,
        struct ieee80211_channel *VAR_9,
        struct ieee80211_channel *VAR_10)
{
 struct sk_buff *VAR_11;
 void *VAR_12;
 struct nlattr *VAR_13;

 VAR_11 = FUNC_9(VAR_6, VAR_0);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_4(VAR_11, 0, 0, 0, VAR_4);
 if (!VAR_12) {
  FUNC_8(VAR_11);
  return;
 }





 if (FUNC_7(VAR_11, VAR_3, FUNC_2(VAR_8)))
  goto nla_put_failure;


 VAR_13 = FUNC_6(VAR_11, VAR_2);
 if (!VAR_13)
  goto nla_put_failure;

 if (FUNC_3(VAR_11, VAR_8, VAR_9, 0))
  goto nla_put_failure;
 FUNC_5(VAR_11, VAR_13);


 VAR_13 = FUNC_6(VAR_11, VAR_1);
 if (!VAR_13)
  goto nla_put_failure;

 if (FUNC_3(VAR_11, VAR_8, VAR_10, 0))
  goto nla_put_failure;
 FUNC_5(VAR_11, VAR_13);

 FUNC_0(VAR_11, VAR_12);

 FUNC_10();
 FUNC_1(&VAR_7, VAR_11, 0,
    VAR_5, VAR_0);
 FUNC_11();

 return;

nla_put_failure:
 FUNC_8(VAR_11);
}
