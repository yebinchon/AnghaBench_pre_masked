
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cfg80211_registered_device *VAR_3,
      struct sk_buff *VAR_4)
{
 if (!VAR_4)
  return;

 FUNC_0(&VAR_2, FUNC_1(&VAR_3->wiphy), VAR_4, 0,
    VAR_1, VAR_0);
}
