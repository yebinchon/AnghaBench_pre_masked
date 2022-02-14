
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ieee802154_sub_if_data {int sec; } ;
struct ieee802154_mac_cb {int seclevel; scalar_t__ seclevel_override; scalar_t__ secen; scalar_t__ secen_override; } ;
struct TYPE_6__ {scalar_t__ mode; int id; int extended_source; int short_source; } ;
struct ieee802154_llsec_params {TYPE_3__ out_key; int out_level; int enabled; } ;
struct TYPE_5__ {scalar_t__ key_id_mode; int key_id; int extended_src; int short_src; int level; } ;
struct TYPE_4__ {int security_enabled; } ;
struct ieee802154_hdr {TYPE_2__ sec; TYPE_1__ fc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct ieee802154_llsec_params*) ;

__attribute__((used)) static int FUNC_1(struct ieee802154_sub_if_data *VAR_3,
      struct ieee802154_hdr *VAR_4,
      const struct ieee802154_mac_cb *VAR_5)
{
 struct ieee802154_llsec_params VAR_6;
 u8 VAR_7;

 FUNC_0(&VAR_3->sec, &VAR_6);

 if (!VAR_6.enabled && VAR_5->secen_override && VAR_5->secen)
  return -VAR_0;
 if (!VAR_6.enabled ||
     (VAR_5->secen_override && !VAR_5->secen) ||
     !VAR_6.out_level)
  return 0;
 if (VAR_5->seclevel_override && !VAR_5->seclevel)
  return -VAR_0;

 VAR_7 = VAR_5->seclevel_override ? VAR_5->seclevel : VAR_6.out_level;

 VAR_4->fc.security_enabled = 1;
 VAR_4->sec.level = VAR_7;
 VAR_4->sec.key_id_mode = VAR_6.out_key.mode;
 if (VAR_6.out_key.mode == VAR_2)
  VAR_4->sec.short_src = VAR_6.out_key.short_source;
 else if (VAR_6.out_key.mode == VAR_1)
  VAR_4->sec.extended_src = VAR_6.out_key.extended_source;
 VAR_4->sec.key_id = VAR_6.out_key.id;

 return 0;
}
