
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpan_dev {scalar_t__ short_addr; scalar_t__ pan_id; int extended_addr; } ;
struct sk_buff {int mac_len; } ;
struct net_device {TYPE_1__* ieee802154_ptr; } ;
struct ieee802154_sub_if_data {struct wpan_dev wpan_dev; } ;
struct ieee802154_mac_cb {int ackreq; int secen; int type; } ;
struct ieee802154_addr {scalar_t__ short_addr; scalar_t__ pan_id; int mode; int extended_addr; } ;
struct TYPE_4__ {int ack_request; int security_enabled; int type; } ;
struct ieee802154_hdr {int seq; struct ieee802154_addr dest; struct ieee802154_addr source; TYPE_2__ fc; } ;
struct TYPE_3__ {int dsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct ieee802154_hdr*) ;
 unsigned int FUNC_4 (struct ieee802154_hdr*) ;
 scalar_t__ FUNC_5 (struct ieee802154_sub_if_data*,struct ieee802154_hdr*,struct ieee802154_mac_cb*) ;
 struct ieee802154_mac_cb* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_7,
        struct net_device *VAR_8,
        const struct ieee802154_addr *VAR_9,
        const struct ieee802154_addr *VAR_10,
        unsigned VAR_11)
{
 struct ieee802154_hdr VAR_12;
 struct ieee802154_sub_if_data *VAR_13 = FUNC_0(VAR_8);
 struct wpan_dev *VAR_14 = &VAR_13->wpan_dev;
 struct ieee802154_mac_cb *VAR_15 = FUNC_6(VAR_7);
 int VAR_16;

 if (!VAR_9)
  return -VAR_0;

 FUNC_7(&VAR_12.fc, 0, sizeof(VAR_12.fc));
 VAR_12.fc.type = VAR_15->type;
 VAR_12.fc.security_enabled = VAR_15->secen;
 VAR_12.fc.ack_request = VAR_15->ackreq;
 VAR_12.seq = FUNC_1(&VAR_8->ieee802154_ptr->dsn) & 0xFF;

 if (FUNC_5(VAR_13, &VAR_12, VAR_15) < 0)
  return -VAR_0;

 if (!VAR_10) {
  if (VAR_14->short_addr == FUNC_2(VAR_2) ||
      VAR_14->short_addr == FUNC_2(VAR_5) ||
      VAR_14->pan_id == FUNC_2(VAR_6)) {
   VAR_12.source.mode = VAR_3;
   VAR_12.source.extended_addr = VAR_14->extended_addr;
  } else {
   VAR_12.source.mode = VAR_4;
   VAR_12.source.short_addr = VAR_14->short_addr;
  }

  VAR_12.source.pan_id = VAR_14->pan_id;
 } else {
  VAR_12.source = *(const struct ieee802154_addr *)VAR_10;
 }

 VAR_12.dest = *(const struct ieee802154_addr *)VAR_9;

 VAR_16 = FUNC_3(VAR_7, &VAR_12);
 if (VAR_16 < 0)
  return -VAR_0;

 FUNC_8(VAR_7);
 VAR_7->mac_len = VAR_16;

 if (VAR_11 > FUNC_4(&VAR_12))
  return -VAR_1;

 return VAR_16;
}
