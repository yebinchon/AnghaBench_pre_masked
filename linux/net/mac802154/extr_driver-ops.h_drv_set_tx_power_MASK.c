
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_local {int hw; TYPE_1__* ops; } ;
typedef int s32 ;
struct TYPE_2__ {int (* set_txpower ) (int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ieee802154_local*,int) ;
 int FUNC_4 (struct ieee802154_local*,int ) ;

__attribute__((used)) static inline int FUNC_5(struct ieee802154_local *VAR_1, s32 VAR_2)
{
 int VAR_3;

 FUNC_1();

 if (!VAR_1->ops->set_txpower) {
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_4(VAR_1, VAR_2);
 VAR_3 = VAR_1->ops->set_txpower(&VAR_1->hw, VAR_2);
 FUNC_3(VAR_1, VAR_3);
 return VAR_3;
}
