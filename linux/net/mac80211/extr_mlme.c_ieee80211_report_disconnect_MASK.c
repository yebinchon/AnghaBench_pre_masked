
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_sub_if_data {int local; int dev; } ;
struct TYPE_3__ {int reason; int data; } ;
struct TYPE_4__ {TYPE_1__ mlme; } ;
struct ieee80211_event {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (int ,struct ieee80211_sub_if_data*,struct ieee80211_event*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sub_if_data *VAR_3,
     const u8 *VAR_4, size_t VAR_5, bool VAR_6,
     u16 VAR_7)
{
 struct ieee80211_event VAR_8 = {
  .type = VAR_2,
  .u.mlme.data = VAR_6 ? VAR_1 : VAR_0,
  .u.mlme.reason = VAR_7,
 };

 if (VAR_6)
  FUNC_1(VAR_3->dev, VAR_4, VAR_5);
 else
  FUNC_0(VAR_3->dev, VAR_4, VAR_5);

 FUNC_2(VAR_3->local, VAR_3, &VAR_8);
}
