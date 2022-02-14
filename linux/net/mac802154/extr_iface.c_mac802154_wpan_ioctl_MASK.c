
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct wpan_dev {void* short_addr; void* pan_id; } ;
struct TYPE_2__ {void* pan_id; void* short_addr; int addr_type; } ;
struct sockaddr_ieee802154 {TYPE_1__ addr; int family; } ;
struct net_device {int dev; } ;
struct ifreq {int ifr_addr; } ;
struct ieee802154_sub_if_data {struct wpan_dev wpan_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 void* VAR_8 ;


 void* FUNC_1 (void*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_9, struct ifreq *VAR_10, int VAR_11)
{
 struct ieee802154_sub_if_data *VAR_12 = FUNC_0(VAR_9);
 struct wpan_dev *VAR_13 = &VAR_12->wpan_dev;
 struct sockaddr_ieee802154 *VAR_14 =
  (struct sockaddr_ieee802154 *)&VAR_10->ifr_addr;
 int VAR_15 = -VAR_4;

 if (VAR_11 != 129 && VAR_11 != 128)
  return VAR_15;

 FUNC_6();

 switch (VAR_11) {
 case 129:
 {
  u16 VAR_16, VAR_17;

  VAR_16 = FUNC_3(VAR_13->pan_id);
  VAR_17 = FUNC_3(VAR_13->short_addr);
  if (VAR_16 == VAR_8 ||
      VAR_17 == VAR_5) {
   VAR_15 = -VAR_1;
   break;
  }

  VAR_14->family = VAR_0;
  VAR_14->addr.addr_type = VAR_6;
  VAR_14->addr.pan_id = VAR_16;
  VAR_14->addr.short_addr = VAR_17;

  VAR_15 = 0;
  break;
 }
 case 128:
  if (FUNC_5(VAR_9)) {
   FUNC_7();
   return -VAR_2;
  }

  FUNC_2(&VAR_9->dev,
    "Using DEBUGing ioctl SIOCSIFADDR isn't recommended!\n");
  if (VAR_14->family != VAR_0 ||
      VAR_14->addr.addr_type != VAR_6 ||
      VAR_14->addr.pan_id == VAR_8 ||
      VAR_14->addr.short_addr == VAR_5 ||
      VAR_14->addr.short_addr == VAR_7) {
   VAR_15 = -VAR_3;
   break;
  }

  VAR_13->pan_id = FUNC_1(VAR_14->addr.pan_id);
  VAR_13->short_addr = FUNC_1(VAR_14->addr.short_addr);

  VAR_15 = FUNC_4(VAR_9);
  break;
 }

 FUNC_7();
 return VAR_15;
}
