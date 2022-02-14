
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mac802154_llsec_key {int dummy; } ;
struct mac802154_llsec {int dummy; } ;
struct TYPE_2__ {scalar_t__ level; } ;
struct ieee802154_hdr {TYPE_1__ sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct mac802154_llsec const*,struct ieee802154_hdr const*,struct mac802154_llsec_key*) ;
 int FUNC_1 (struct sk_buff*,struct mac802154_llsec const*,struct ieee802154_hdr const*,struct mac802154_llsec_key*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1,
       const struct mac802154_llsec *VAR_2,
       const struct ieee802154_hdr *VAR_3,
       struct mac802154_llsec_key *VAR_4)
{
 if (VAR_3->sec.level == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
