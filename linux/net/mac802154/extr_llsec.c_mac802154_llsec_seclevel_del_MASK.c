
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct mac802154_llsec_seclevel {TYPE_1__ level; } ;
struct mac802154_llsec {int dummy; } ;
struct ieee802154_llsec_seclevel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mac802154_llsec_seclevel*,int ) ;
 int FUNC_1 (int *) ;
 struct mac802154_llsec_seclevel* FUNC_2 (struct mac802154_llsec*,struct ieee802154_llsec_seclevel const*) ;
 int VAR_1 ;

int FUNC_3(struct mac802154_llsec *VAR_2,
     const struct ieee802154_llsec_seclevel *VAR_3)
{
 struct mac802154_llsec_seclevel *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->level.list);
 FUNC_0(VAR_4, VAR_1);

 return 0;
}
