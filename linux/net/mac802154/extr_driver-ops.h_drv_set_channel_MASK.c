
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee802154_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_channel ) (int *,int ,int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ieee802154_local*,int) ;
 int FUNC_3 (struct ieee802154_local*,int ,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct ieee802154_local *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_0();

 FUNC_3(VAR_0, VAR_1, VAR_2);
 VAR_3 = VAR_0->ops->set_channel(&VAR_0->hw, VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_3);
 return VAR_3;
}
