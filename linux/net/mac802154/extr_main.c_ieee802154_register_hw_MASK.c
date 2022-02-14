
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_9__ {int parent; } ;
struct TYPE_12__ {int function; } ;
struct ieee802154_local {int workqueue; TYPE_3__* phy; TYPE_1__ hw; TYPE_8__ ifs_timer; } ;
struct ieee802154_hw {int flags; } ;
struct TYPE_10__ {int min_csma_backoffs; int max_csma_backoffs; int min_maxbe; int max_maxbe; int min_minbe; int max_minbe; int min_frame_retries; int max_frame_retries; int iftypes; } ;
struct TYPE_11__ {TYPE_2__ supported; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_8__*,int ,int ) ;
 struct ieee802154_local* FUNC_7 (struct ieee802154_hw*) ;
 struct net_device* FUNC_8 (struct ieee802154_local*,char*,int ,int ,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*) ;

int FUNC_16(struct ieee802154_hw *VAR_11)
{
 struct ieee802154_local *VAR_12 = FUNC_7(VAR_11);
 struct net_device *VAR_13;
 int VAR_14 = -VAR_2;

 VAR_12->workqueue =
  FUNC_4(FUNC_12(VAR_12->phy));
 if (!VAR_12->workqueue) {
  VAR_14 = -VAR_1;
  goto out;
 }

 FUNC_6(&VAR_12->ifs_timer, VAR_0, VAR_3);
 VAR_12->ifs_timer.function = VAR_10;

 FUNC_14(VAR_12->phy, VAR_12->hw.parent);

 FUNC_9(VAR_12->phy);

 if (!(VAR_11->flags & VAR_4)) {
  VAR_12->phy->supported.min_csma_backoffs = 4;
  VAR_12->phy->supported.max_csma_backoffs = 4;
  VAR_12->phy->supported.min_maxbe = 5;
  VAR_12->phy->supported.max_maxbe = 5;
  VAR_12->phy->supported.min_minbe = 3;
  VAR_12->phy->supported.max_minbe = 3;
 }

 if (!(VAR_11->flags & VAR_5)) {
  VAR_12->phy->supported.min_frame_retries = 3;
  VAR_12->phy->supported.max_frame_retries = 3;
 }

 if (VAR_11->flags & VAR_6)
  VAR_12->phy->supported.iftypes |= FUNC_0(VAR_8);

 VAR_14 = FUNC_13(VAR_12->phy);
 if (VAR_14 < 0)
  goto out_wq;

 FUNC_10();

 VAR_13 = FUNC_8(VAR_12, "wpan%d", VAR_7,
    VAR_9,
    FUNC_3(0x0000000000000000ULL));
 if (FUNC_1(VAR_13)) {
  FUNC_11();
  VAR_14 = FUNC_2(VAR_13);
  goto out_phy;
 }

 FUNC_11();

 return 0;

out_phy:
 FUNC_15(VAR_12->phy);
out_wq:
 FUNC_5(VAR_12->workqueue);
out:
 return VAR_14;
}
