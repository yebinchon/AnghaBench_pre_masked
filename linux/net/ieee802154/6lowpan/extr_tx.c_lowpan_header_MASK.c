
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wpan_dev {int ackreq; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ mode; int short_addr; } ;
struct lowpan_addr_info {int saddr; TYPE_2__ daddr; } ;
struct ieee802154_mac_cb {int ackreq; int type; } ;
typedef int info ;
struct TYPE_7__ {TYPE_1__* wdev; } ;
struct TYPE_5__ {struct wpan_dev* ieee802154_ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,TYPE_2__*,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 struct ieee802154_mac_cb* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct lowpan_addr_info*,int ,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,TYPE_1__*,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_2, struct net_device *VAR_3,
    u16 *VAR_4, u16 *VAR_5)
{
 struct wpan_dev *VAR_6 = FUNC_1(VAR_3)->wdev->ieee802154_ptr;
 struct ieee802154_mac_cb *VAR_7 = FUNC_4(VAR_2);
 struct lowpan_addr_info VAR_8;

 FUNC_5(&VAR_8, FUNC_3(VAR_2), sizeof(VAR_8));

 *VAR_4 = VAR_2->len;
 FUNC_2(VAR_2, VAR_3, &VAR_8.daddr, &VAR_8.saddr);

 *VAR_5 = (*VAR_4 - VAR_2->len) + FUNC_6(VAR_2);

 VAR_7->type = VAR_1;

 if (VAR_8.daddr.mode == VAR_0 &&
     FUNC_0(VAR_8.daddr.short_addr))
  VAR_7->ackreq = 0;
 else
  VAR_7->ackreq = VAR_6->ackreq;

 return FUNC_7(VAR_2, FUNC_1(VAR_3)->wdev,
        &VAR_8.daddr, &VAR_8.saddr, 0);
}
