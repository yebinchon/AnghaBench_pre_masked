
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpan_dev {scalar_t__ short_addr; scalar_t__ pan_id; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* wdev; } ;
struct TYPE_3__ {struct wpan_dev* ieee802154_ptr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,scalar_t__*) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int*,int ,int) ;

int FUNC_5(u8 *VAR_1, struct net_device *VAR_2)
{
 struct wpan_dev *VAR_3 = FUNC_2(VAR_2)->wdev->ieee802154_ptr;


 if (!FUNC_3(VAR_3->short_addr))
  return -1;


 if (VAR_3->pan_id == FUNC_0(0x0000) &&
     VAR_3->short_addr == FUNC_0(0x0000))
  return -1;


 if (VAR_3->pan_id == FUNC_0(VAR_0))
  FUNC_4(VAR_1, 0, 2);
 else
  FUNC_1(VAR_1, &VAR_3->pan_id);


 VAR_1[0] &= ~2;
 VAR_1[2] = 0;
 VAR_1[3] = 0xFF;
 VAR_1[4] = 0xFE;
 VAR_1[5] = 0;
 FUNC_1(&VAR_1[6], &VAR_3->short_addr);
 return 0;
}
