
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; int snd_portid; } ;
typedef enum nl80211_user_reg_hint_type { ____Placeholder_nl80211_user_reg_hint_type } nl80211_user_reg_hint_type ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;



 int VAR_6 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 char *VAR_9 = ((void*)0);
 bool VAR_10;
 enum nl80211_user_reg_hint_type VAR_11;
 u32 VAR_12;







 if (FUNC_5(!FUNC_2(VAR_6)))
  return -VAR_0;

 if (VAR_8->attrs[VAR_5])
  VAR_11 =
    FUNC_1(VAR_8->attrs[VAR_5]);
 else
  VAR_11 = 128;

 switch (VAR_11) {
 case 128:
 case 130:
  if (!VAR_8->attrs[VAR_2])
   return -VAR_1;

  VAR_9 = FUNC_0(VAR_8->attrs[VAR_2]);
  return FUNC_4(VAR_9, VAR_11);
 case 129:
  if (VAR_8->attrs[VAR_4]) {
   VAR_12 = VAR_8->snd_portid;
   VAR_10 = !!VAR_8->attrs[VAR_3];
  } else {
   VAR_12 = 0;
   VAR_10 = 1;
  }

  return FUNC_3(VAR_10, VAR_12);
 default:
  return -VAR_1;
 }
}
