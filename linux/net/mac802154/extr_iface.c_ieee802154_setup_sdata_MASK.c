
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int tmp ;
struct wpan_dev {int iftype; int min_be; int max_be; int csma_retries; int frame_retries; int promiscuous_mode; int * header_ops; int extended_addr; void* short_addr; void* pan_id; int dsn; int bsn; } ;
struct ieee802154_sub_if_data {TYPE_1__* dev; int sec; int sec_mtx; struct wpan_dev wpan_dev; } ;
typedef enum nl802154_iftype { ____Placeholder_nl802154_iftype } nl802154_iftype ;
struct TYPE_2__ {int needs_free_netdev; int * netdev_ops; int * ml_priv; int priv_destructor; int * header_ops; int dev_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct ieee802154_sub_if_data *VAR_8,
         enum nl802154_iftype VAR_9)
{
 struct wpan_dev *VAR_10 = &VAR_8->wpan_dev;
 int VAR_11;
 u8 VAR_12;


 VAR_8->wpan_dev.iftype = VAR_9;

 FUNC_3(&VAR_12, sizeof(VAR_12));
 FUNC_1(&VAR_10->bsn, VAR_12);
 FUNC_3(&VAR_12, sizeof(VAR_12));
 FUNC_1(&VAR_10->dsn, VAR_12);


 VAR_10->min_be = 3;
 VAR_10->max_be = 5;
 VAR_10->csma_retries = 4;
 VAR_10->frame_retries = 3;

 VAR_10->pan_id = FUNC_2(VAR_1);
 VAR_10->short_addr = FUNC_2(VAR_0);

 switch (VAR_9) {
 case 128:
  FUNC_4(&VAR_10->extended_addr,
     VAR_8->dev->dev_addr);

  VAR_8->dev->header_ops = &VAR_3;
  VAR_8->dev->needs_free_netdev = 1;
  VAR_8->dev->priv_destructor = VAR_6;
  VAR_8->dev->netdev_ops = &VAR_7;
  VAR_8->dev->ml_priv = &VAR_4;
  VAR_10->promiscuous_mode = 0;
  VAR_10->header_ops = &VAR_2;

  FUNC_7(&VAR_8->sec_mtx);

  FUNC_5(&VAR_8->sec);
  VAR_11 = FUNC_6(VAR_8->dev);
  if (VAR_11 < 0)
   return VAR_11;

  break;
 case 129:
  VAR_8->dev->needs_free_netdev = 1;
  VAR_8->dev->netdev_ops = &VAR_5;
  VAR_10->promiscuous_mode = 1;
  break;
 default:
  FUNC_0();
 }

 return 0;
}
