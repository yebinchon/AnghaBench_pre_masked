
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee802154_local {int dummy; } ;
typedef enum nl802154_iftype { ____Placeholder_nl802154_iftype } nl802154_iftype ;
typedef int __le64 ;


 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct ieee802154_local*,char const*,unsigned char,int,int ) ;
 struct ieee802154_local* FUNC_2 (struct wpan_phy*) ;

__attribute__((used)) static int
FUNC_3(struct wpan_phy *VAR_0, const char *VAR_1,
       unsigned char VAR_2,
       enum nl802154_iftype VAR_3, __le64 VAR_4)
{
 struct ieee802154_local *VAR_5 = FUNC_2(VAR_0);
 struct net_device *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3,
    VAR_4);
 return FUNC_0(VAR_6);
}
