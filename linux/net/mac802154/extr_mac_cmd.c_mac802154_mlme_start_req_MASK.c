
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dev_addr; TYPE_1__* ieee802154_ptr; } ;
struct ieee802154_llsec_params {int coord_shortaddr; int hwaddr; int coord_hwaddr; int pan_id; } ;
struct ieee802154_addr {scalar_t__ mode; int short_addr; int pan_id; } ;
struct TYPE_2__ {int short_addr; int pan_id; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int ,int ) ;
 int FUNC_4 (struct net_device*,struct ieee802154_llsec_params*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
        struct ieee802154_addr *VAR_6,
        u8 VAR_7, u8 VAR_8,
        u8 VAR_9, u8 VAR_10,
        u8 VAR_11, u8 VAR_12,
        u8 VAR_13)
{
 struct ieee802154_llsec_params VAR_14;
 int VAR_15 = 0;

 FUNC_0();

 FUNC_1(VAR_6->mode != VAR_0);

 VAR_5->ieee802154_ptr->pan_id = VAR_6->pan_id;
 VAR_5->ieee802154_ptr->short_addr = VAR_6->short_addr;
 FUNC_3(VAR_5, VAR_8, VAR_7);

 VAR_14.pan_id = VAR_6->pan_id;
 VAR_15 |= VAR_4;

 VAR_14.hwaddr = FUNC_2(VAR_5->dev_addr);
 VAR_15 |= VAR_3;

 VAR_14.coord_hwaddr = VAR_14.hwaddr;
 VAR_15 |= VAR_1;

 VAR_14.coord_shortaddr = VAR_6->short_addr;
 VAR_15 |= VAR_2;

 return FUNC_4(VAR_5, &VAR_14, VAR_15);
}
