
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee802154_local {int dummy; } ;


 int FUNC_0 (int) ;
 struct net_device* FUNC_1 (struct ieee802154_local*,char const*,unsigned char,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct ieee802154_local* FUNC_4 (struct wpan_phy*) ;

__attribute__((used)) static struct net_device *
FUNC_5(struct wpan_phy *VAR_0,
    const char *VAR_1,
    unsigned char VAR_2, int VAR_3)
{
 struct ieee802154_local *VAR_4 = FUNC_4(VAR_0);
 struct net_device *VAR_5;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3,
    FUNC_0(0x0000000000000000ULL));
 FUNC_3();

 return VAR_5;
}
