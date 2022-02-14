
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee802154_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* xmit_sync ) (int *,struct sk_buff*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct sk_buff*) ;

__attribute__((used)) static inline int
FUNC_2(struct ieee802154_local *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_0();

 return VAR_0->ops->xmit_sync(&VAR_0->hw, VAR_1);
}
