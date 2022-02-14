
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpan_dev {int extended_addr; int pan_id; int ackreq; } ;
struct sk_buff {int mac_len; } ;
struct net_device {TYPE_1__* ieee802154_ptr; } ;
struct ieee802154_sub_if_data {struct wpan_dev wpan_dev; } ;
struct ieee802154_mac_cb {int dummy; } ;
struct TYPE_7__ {int extended_addr; void* mode; int pan_id; } ;
struct TYPE_6__ {int pan_id; int extended_addr; void* mode; } ;
struct TYPE_8__ {int ack_request; int type; } ;
struct ieee802154_hdr {int seq; TYPE_3__ source; TYPE_2__ dest; TYPE_4__ fc; } ;
struct TYPE_5__ {int dsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void const*) ;
 int FUNC_3 (struct sk_buff*,struct ieee802154_hdr*) ;
 unsigned int FUNC_4 (struct ieee802154_hdr*) ;
 scalar_t__ FUNC_5 (struct ieee802154_sub_if_data*,struct ieee802154_hdr*,struct ieee802154_mac_cb*) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4,
       struct net_device *VAR_5,
       unsigned short VAR_6,
       const void *VAR_7,
       const void *VAR_8,
       unsigned VAR_9)
{
 struct ieee802154_hdr VAR_10;
 struct ieee802154_sub_if_data *VAR_11 = FUNC_0(VAR_5);
 struct wpan_dev *VAR_12 = &VAR_11->wpan_dev;
 struct ieee802154_mac_cb VAR_13 = { };
 int VAR_14;

 if (!VAR_7)
  return -VAR_0;

 FUNC_6(&VAR_10.fc, 0, sizeof(VAR_10.fc));
 VAR_10.fc.type = VAR_3;
 VAR_10.fc.ack_request = VAR_12->ackreq;
 VAR_10.seq = FUNC_1(&VAR_5->ieee802154_ptr->dsn) & 0xFF;




 if (FUNC_5(VAR_11, &VAR_10, &VAR_13) < 0)
  return -VAR_0;

 VAR_10.dest.pan_id = VAR_12->pan_id;
 VAR_10.dest.mode = VAR_2;
 FUNC_2(&VAR_10.dest.extended_addr, VAR_7);

 VAR_10.source.pan_id = VAR_10.dest.pan_id;
 VAR_10.source.mode = VAR_2;

 if (!VAR_8)
  VAR_10.source.extended_addr = VAR_12->extended_addr;
 else
  FUNC_2(&VAR_10.source.extended_addr, VAR_8);

 VAR_14 = FUNC_3(VAR_4, &VAR_10);
 if (VAR_14 < 0)
  return -VAR_0;

 FUNC_7(VAR_4);
 VAR_4->mac_len = VAR_14;

 if (VAR_9 > FUNC_4(&VAR_10))
  return -VAR_1;

 return VAR_14;
}
