
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct regulatory_request {scalar_t__ initiator; scalar_t__ wiphy_idx; char* alpha2; int country_ie_env; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef enum environment_cap { ____Placeholder_environment_cap } environment_cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct regulatory_request* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct wiphy*) ;
 int FUNC_2 (struct regulatory_request*) ;
 struct regulatory_request* FUNC_3 (int,int ) ;
 int FUNC_4 (struct regulatory_request*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct wiphy *VAR_7, enum nl80211_band VAR_8,
    const u8 *VAR_9, u8 VAR_10)
{
 char VAR_11[2];
 enum environment_cap VAR_12 = VAR_0;
 struct regulatory_request *VAR_13 = ((void*)0), *VAR_14;


 if (VAR_10 & 0x01)
  return;

 if (VAR_10 < VAR_4)
  return;

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return;

 VAR_11[0] = VAR_9[0];
 VAR_11[1] = VAR_9[1];

 if (VAR_9[2] == 'I')
  VAR_12 = VAR_1;
 else if (VAR_9[2] == 'O')
  VAR_12 = VAR_2;

 FUNC_5();
 VAR_14 = FUNC_0();

 if (FUNC_8(!VAR_14))
  goto out;






 if (VAR_14->initiator == VAR_5 &&
     VAR_14->wiphy_idx != VAR_6)
  goto out;

 VAR_13->wiphy_idx = FUNC_1(VAR_7);
 VAR_13->alpha2[0] = VAR_11[0];
 VAR_13->alpha2[1] = VAR_11[1];
 VAR_13->initiator = VAR_5;
 VAR_13->country_ie_env = VAR_12;


 FUNC_7();

 FUNC_4(VAR_13);
 VAR_13 = ((void*)0);
out:
 FUNC_2(VAR_13);
 FUNC_6();
}
