
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_minbe; int min_maxbe; int max_maxbe; int max_frame_retries; int max_csma_backoffs; int iftypes; int lbt; scalar_t__ min_frame_retries; } ;
struct wpan_phy {TYPE_1__ supported; int privid; } ;
struct ieee802154_ops {int set_channel; int stop; int start; int ed; scalar_t__ xmit_sync; scalar_t__ xmit_async; } ;
struct ieee802154_hw {char* priv; struct wpan_phy* phy; } ;
struct ieee802154_local {struct ieee802154_hw hw; int tx_work; int skb_queue; int tasklet; int iflist_mtx; int interfaces; struct ieee802154_ops const* ops; struct wpan_phy* phy; } ;


 size_t FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,unsigned long) ;
 struct wpan_phy* FUNC_9 (int *,size_t) ;
 struct ieee802154_local* FUNC_10 (struct wpan_phy*) ;

struct ieee802154_hw *
FUNC_11(size_t VAR_7, const struct ieee802154_ops *VAR_8)
{
 struct wpan_phy *VAR_9;
 struct ieee802154_local *VAR_10;
 size_t VAR_11;

 if (FUNC_4(!VAR_8 || !(VAR_8->xmit_async || VAR_8->xmit_sync) || !VAR_8->ed ||
      !VAR_8->start || !VAR_8->stop || !VAR_8->set_channel))
  return ((void*)0);
 VAR_11 = FUNC_0(sizeof(*VAR_10), VAR_0) + VAR_7;

 VAR_9 = FUNC_9(&VAR_5, VAR_11);
 if (!VAR_9) {
  FUNC_6("failure to allocate master IEEE802.15.4 device\n");
  return ((void*)0);
 }

 VAR_9->privid = VAR_6;

 VAR_10 = FUNC_10(VAR_9);
 VAR_10->phy = VAR_9;
 VAR_10->hw.phy = VAR_10->phy;
 VAR_10->hw.priv = (char *)VAR_10 + FUNC_0(sizeof(*VAR_10), VAR_0);
 VAR_10->ops = VAR_8;

 FUNC_2(&VAR_10->interfaces);
 FUNC_5(&VAR_10->iflist_mtx);

 FUNC_8(&VAR_10->tasklet,
       VAR_3,
       (unsigned long)VAR_10);

 FUNC_7(&VAR_10->skb_queue);

 FUNC_3(&VAR_10->tx_work, VAR_4);


 VAR_9->supported.max_minbe = 8;
 VAR_9->supported.min_maxbe = 3;
 VAR_9->supported.max_maxbe = 8;
 VAR_9->supported.min_frame_retries = 0;
 VAR_9->supported.max_frame_retries = 7;
 VAR_9->supported.max_csma_backoffs = 5;
 VAR_9->supported.lbt = VAR_2;


 VAR_9->supported.iftypes = FUNC_1(VAR_1);

 return &VAR_10->hw;
}
