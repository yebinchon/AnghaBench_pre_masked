
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct cfg80211_registered_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net*) ;
 struct net* FUNC_3 (int ) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct net*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct net*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct net *VAR_6;
 int VAR_7;

 if (VAR_4->attrs[VAR_2]) {
  u32 VAR_8 = FUNC_6(VAR_4->attrs[VAR_2]);

  VAR_6 = FUNC_4(VAR_8);
 } else if (VAR_4->attrs[VAR_1]) {
  u32 VAR_9 = FUNC_6(VAR_4->attrs[VAR_1]);

  VAR_6 = FUNC_3(VAR_9);
 } else {
  return -VAR_0;
 }

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = 0;


 if (!FUNC_5(FUNC_8(&VAR_5->wiphy), VAR_6))
  VAR_7 = FUNC_2(VAR_5, VAR_6);

 FUNC_7(VAR_6);
 return VAR_7;
}
