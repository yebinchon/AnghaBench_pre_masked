
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_local {int hw; TYPE_1__* ops; } ;
struct ieee802154_hw_addr_filt {int pan_coord; } ;
struct TYPE_2__ {int (* set_hw_addr_filt ) (int *,struct ieee802154_hw_addr_filt*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct ieee802154_hw_addr_filt*,int ) ;
 int FUNC_3 (struct ieee802154_local*,int) ;
 int FUNC_4 (struct ieee802154_local*,int) ;

__attribute__((used)) static inline int
FUNC_5(struct ieee802154_local *VAR_2, bool VAR_3)
{
 struct ieee802154_hw_addr_filt VAR_4;
 int VAR_5;

 FUNC_1();

 if (!VAR_2->ops->set_hw_addr_filt) {
  FUNC_0(1);
  return -VAR_0;
 }

 VAR_4.pan_coord = VAR_3;

 FUNC_4(VAR_2, VAR_3);
 VAR_5 = VAR_2->ops->set_hw_addr_filt(&VAR_2->hw, &VAR_4,
         VAR_1);
 FUNC_3(VAR_2, VAR_5);
 return VAR_5;
}
