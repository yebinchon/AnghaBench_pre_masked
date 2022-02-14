
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mac802154_llsec_key {int dummy; } ;
struct TYPE_8__ {int hwaddr; int seclevel_exempt; } ;
struct mac802154_llsec_device {TYPE_4__ dev; } ;
struct TYPE_5__ {int enabled; } ;
struct mac802154_llsec {int lock; TYPE_1__ params; } ;
struct ieee802154_llsec_seclevel {int sec_levels; scalar_t__ device_override; } ;
struct ieee802154_llsec_key_id {int dummy; } ;
struct TYPE_7__ {scalar_t__ level; int frame_counter; } ;
struct TYPE_6__ {scalar_t__ version; int type; int security_enabled; } ;
struct ieee802154_hdr {TYPE_3__ sec; TYPE_2__ fc; int source; } ;
typedef int __le64 ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct ieee802154_hdr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct mac802154_llsec*,struct ieee802154_hdr*,struct mac802154_llsec_key*,int ) ;
 int FUNC_4 (struct mac802154_llsec_key*) ;
 struct mac802154_llsec_device* FUNC_5 (struct mac802154_llsec*,int *) ;
 struct mac802154_llsec_key* FUNC_6 (struct mac802154_llsec*,struct ieee802154_hdr*,int *,struct ieee802154_llsec_key_id*) ;
 scalar_t__ FUNC_7 (struct mac802154_llsec*,int ,int ,struct ieee802154_llsec_seclevel*) ;
 int FUNC_8 (struct mac802154_llsec_device*,struct ieee802154_llsec_key_id*,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct mac802154_llsec *VAR_3, struct sk_buff *VAR_4)
{
 struct ieee802154_hdr VAR_5;
 struct mac802154_llsec_key *VAR_6;
 struct ieee802154_llsec_key_id VAR_7;
 struct mac802154_llsec_device *VAR_8;
 struct ieee802154_llsec_seclevel VAR_9;
 int VAR_10;
 __le64 VAR_11;
 u32 VAR_12;

 if (FUNC_1(VAR_4, &VAR_5) < 0)
  return -VAR_0;
 if (!VAR_5.fc.security_enabled)
  return 0;
 if (VAR_5.fc.version == 0)
  return -VAR_0;

 FUNC_11(&VAR_3->lock);
 if (!VAR_3->params.enabled) {
  FUNC_12(&VAR_3->lock);
  return -VAR_0;
 }
 FUNC_12(&VAR_3->lock);

 FUNC_9();

 VAR_6 = FUNC_6(VAR_3, &VAR_5, &VAR_5.source, &VAR_7);
 if (!VAR_6) {
  VAR_10 = -VAR_1;
  goto fail;
 }

 VAR_8 = FUNC_5(VAR_3, &VAR_5.source);
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  goto fail_dev;
 }

 if (FUNC_7(VAR_3, VAR_5.fc.type, 0, &VAR_9) < 0) {
  VAR_10 = -VAR_0;
  goto fail_dev;
 }

 if (!(VAR_9.sec_levels & FUNC_0(VAR_5.sec.level)) &&
     (VAR_5.sec.level == 0 && VAR_9.device_override &&
      !VAR_8->dev.seclevel_exempt)) {
  VAR_10 = -VAR_0;
  goto fail_dev;
 }

 VAR_12 = FUNC_2(VAR_5.sec.frame_counter);

 if (VAR_12 == 0xffffffff) {
  VAR_10 = -VAR_2;
  goto fail_dev;
 }

 VAR_10 = FUNC_8(VAR_8, &VAR_7, VAR_12);
 if (VAR_10)
  goto fail_dev;

 VAR_11 = VAR_8->dev.hwaddr;

 FUNC_10();

 VAR_10 = FUNC_3(VAR_4, VAR_3, &VAR_5, VAR_6, VAR_11);
 FUNC_4(VAR_6);
 return VAR_10;

fail_dev:
 FUNC_4(VAR_6);
fail:
 FUNC_10();
 return VAR_10;
}
