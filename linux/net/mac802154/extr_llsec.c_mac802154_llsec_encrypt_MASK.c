
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; int mac_len; } ;
struct mac802154_llsec_key {int dummy; } ;
struct TYPE_5__ {int frame_counter; int enabled; } ;
struct mac802154_llsec {int lock; TYPE_2__ params; } ;
struct TYPE_6__ {scalar_t__ level; int frame_counter; } ;
struct TYPE_4__ {scalar_t__ type; int security_enabled; } ;
struct ieee802154_hdr {TYPE_3__ sec; int dest; TYPE_1__ fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct ieee802154_hdr*) ;
 int FUNC_4 (struct sk_buff*,struct ieee802154_hdr*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct sk_buff*,struct mac802154_llsec*,struct ieee802154_hdr*,struct mac802154_llsec_key*) ;
 int FUNC_7 (struct mac802154_llsec_key*) ;
 struct mac802154_llsec_key* FUNC_8 (struct mac802154_llsec*,struct ieee802154_hdr*,int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct mac802154_llsec *VAR_8, struct sk_buff *VAR_9)
{
 struct ieee802154_hdr VAR_10;
 int VAR_11, VAR_12, VAR_13;
 struct mac802154_llsec_key *VAR_14;
 u32 VAR_15;

 VAR_13 = FUNC_3(VAR_9, &VAR_10);

 if (VAR_13 < 0 || VAR_10.fc.type != VAR_4)
  return -VAR_0;

 if (!VAR_10.fc.security_enabled ||
     (VAR_10.sec.level == VAR_7)) {
  FUNC_13(VAR_9, VAR_13);
  return 0;
 }

 VAR_12 = FUNC_5(&VAR_10.sec);

 if (VAR_9->len + VAR_13 + VAR_12 + VAR_5 > VAR_6)
  return -VAR_1;

 FUNC_9();

 FUNC_11(&VAR_8->lock);

 if (!VAR_8->params.enabled) {
  VAR_11 = -VAR_0;
  goto fail_read;
 }

 VAR_14 = FUNC_8(VAR_8, &VAR_10, &VAR_10.dest, ((void*)0));
 if (!VAR_14) {
  VAR_11 = -VAR_2;
  goto fail_read;
 }

 FUNC_12(&VAR_8->lock);

 FUNC_15(&VAR_8->lock);

 VAR_15 = FUNC_0(VAR_8->params.frame_counter);
 VAR_10.sec.frame_counter = FUNC_2(VAR_15);
 if (VAR_15 == 0xFFFFFFFF) {
  FUNC_16(&VAR_8->lock);
  FUNC_7(VAR_14);
  VAR_11 = -VAR_3;
  goto fail;
 }

 VAR_8->params.frame_counter = FUNC_1(VAR_15 + 1);

 FUNC_16(&VAR_8->lock);

 FUNC_10();

 VAR_9->mac_len = FUNC_4(VAR_9, &VAR_10);
 FUNC_14(VAR_9);

 VAR_11 = FUNC_6(VAR_9, VAR_8, &VAR_10, VAR_14);
 FUNC_7(VAR_14);

 return VAR_11;

fail_read:
 FUNC_12(&VAR_8->lock);
fail:
 FUNC_10();
 return VAR_11;
}
