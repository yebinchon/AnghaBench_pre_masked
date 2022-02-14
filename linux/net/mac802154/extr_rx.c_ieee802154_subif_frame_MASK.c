
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpan_dev {int extended_addr; int short_addr; int pan_id; } ;
struct sk_buff {scalar_t__ len; TYPE_3__* dev; void* pkt_type; } ;
struct ieee802154_sub_if_data {TYPE_3__* dev; int sec; struct wpan_dev wpan_dev; } ;
struct ieee802154_hdr {int dummy; } ;
typedef int __le16 ;
struct TYPE_5__ {int mode; int short_addr; int pan_id; int extended_addr; } ;
struct TYPE_8__ {int type; TYPE_1__ dest; } ;
struct TYPE_6__ {int rx_bytes; int rx_packets; } ;
struct TYPE_7__ {int name; TYPE_2__ stats; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(struct ieee802154_sub_if_data *VAR_6,
         struct sk_buff *VAR_7, const struct ieee802154_hdr *VAR_8)
{
 struct wpan_dev *VAR_9 = &VAR_6->wpan_dev;
 __le16 VAR_10, VAR_11;
 int VAR_12;

 FUNC_5("getting packet via slave interface %s\n", VAR_6->dev->name);

 VAR_10 = VAR_9->pan_id;
 VAR_11 = VAR_9->short_addr;

 switch (FUNC_4(VAR_7)->dest.mode) {
 case 133:
  if (FUNC_4(VAR_7)->dest.mode != 133)

   VAR_7->pkt_type = VAR_5;
  else

   VAR_7->pkt_type = VAR_4;
  break;
 case 134:
  if (FUNC_4(VAR_7)->dest.pan_id != VAR_10 &&
      FUNC_4(VAR_7)->dest.pan_id != FUNC_0(VAR_1))
   VAR_7->pkt_type = VAR_5;
  else if (FUNC_4(VAR_7)->dest.extended_addr == VAR_9->extended_addr)
   VAR_7->pkt_type = VAR_4;
  else
   VAR_7->pkt_type = VAR_5;
  break;
 case 132:
  if (FUNC_4(VAR_7)->dest.pan_id != VAR_10 &&
      FUNC_4(VAR_7)->dest.pan_id != FUNC_0(VAR_1))
   VAR_7->pkt_type = VAR_5;
  else if (FUNC_4(VAR_7)->dest.short_addr == VAR_11)
   VAR_7->pkt_type = VAR_4;
  else if (FUNC_4(VAR_7)->dest.short_addr ==
     FUNC_0(VAR_0))
   VAR_7->pkt_type = VAR_3;
  else
   VAR_7->pkt_type = VAR_5;
  break;
 default:
  FUNC_5("invalid dest mode\n");
  goto fail;
 }

 VAR_7->dev = VAR_6->dev;





 VAR_12 = FUNC_3(&VAR_6->sec, VAR_7);
 if (VAR_12) {
  FUNC_5("decryption failed: %i\n", VAR_12);
  goto fail;
 }

 VAR_6->dev->stats.rx_packets++;
 VAR_6->dev->stats.rx_bytes += VAR_7->len;

 switch (FUNC_4(VAR_7)->type) {
 case 130:
 case 131:
 case 128:
  goto fail;

 case 129:
  return FUNC_1(VAR_7);
 default:
  FUNC_6("ieee802154: bad frame received "
        "(type = %d)\n", FUNC_4(VAR_7)->type);
  goto fail;
 }

fail:
 FUNC_2(VAR_7);
 return VAR_2;
}
