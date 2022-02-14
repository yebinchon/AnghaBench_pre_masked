
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_llsec_seclevel {int list; } ;
struct mac802154_llsec_seclevel {struct ieee802154_llsec_seclevel level; } ;
struct TYPE_2__ {int security_levels; } ;
struct mac802154_llsec {TYPE_1__ table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac802154_llsec_seclevel* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct mac802154_llsec*,struct ieee802154_llsec_seclevel const*) ;

int FUNC_3(struct mac802154_llsec *VAR_3,
     const struct ieee802154_llsec_seclevel *VAR_4)
{
 struct mac802154_llsec_seclevel *VAR_5;

 if (FUNC_2(VAR_3, VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->level = *VAR_4;

 FUNC_1(&VAR_5->level.list, &VAR_3->table.security_levels);

 return 0;
}
