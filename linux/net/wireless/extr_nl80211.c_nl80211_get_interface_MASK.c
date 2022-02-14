
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct wireless_dev** user_ptr; } ;
typedef struct wireless_dev cfg80211_registered_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct genl_info*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ,struct wireless_dev*,struct wireless_dev*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct sk_buff *VAR_7;
 struct cfg80211_registered_device *VAR_8 = VAR_6->user_ptr[0];
 struct wireless_dev *VAR_9 = VAR_6->user_ptr[1];

 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 if (FUNC_1(VAR_7, VAR_6->snd_portid, VAR_6->snd_seq, 0,
          VAR_8, VAR_9, VAR_3) < 0) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 return FUNC_0(VAR_7, VAR_6);
}
