
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; int cb; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {scalar_t__ control_port_protocol; scalar_t__ control_port_over_nl80211; struct net_device* dev; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {scalar_t__ napi; struct ieee80211_sub_if_data* sdata; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (scalar_t__,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_2,
       struct ieee80211_rx_data *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = VAR_3->sdata;
 struct net_device *VAR_5 = VAR_4->dev;

 if (FUNC_7((VAR_2->protocol == VAR_4->control_port_protocol ||
        VAR_2->protocol == FUNC_2(VAR_0)) &&
       VAR_4->control_port_over_nl80211)) {
  struct ieee80211_rx_status *VAR_6 = FUNC_0(VAR_2);
  bool VAR_7 = !(VAR_6->flag & VAR_1);

  FUNC_1(VAR_5, VAR_2, VAR_7);
  FUNC_3(VAR_2);
 } else {
  FUNC_4(VAR_2->cb, 0, sizeof(VAR_2->cb));


  if (VAR_3->napi)
   FUNC_5(VAR_3->napi, VAR_2);
  else
   FUNC_6(VAR_2);
 }
}
