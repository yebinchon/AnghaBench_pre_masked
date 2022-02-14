
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; } ;
struct ieee802154_local {int ifs_timer; } ;
struct ieee802154_hw {int flags; TYPE_1__* phy; } ;
struct TYPE_2__ {int lifs_period; int sifs_period; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int,int ) ;
 struct ieee802154_local* FUNC_2 (struct ieee802154_hw*) ;
 int FUNC_3 (struct ieee802154_hw*) ;

void FUNC_4(struct ieee802154_hw *VAR_5, struct sk_buff *VAR_6,
         bool VAR_7)
{
 if (VAR_7) {
  struct ieee802154_local *VAR_8 = FUNC_2(VAR_5);
  u8 VAR_9;





  if (VAR_5->flags & VAR_2)
   VAR_9 = VAR_3 -
     VAR_1;
  else
   VAR_9 = VAR_3;

  if (VAR_6->len > VAR_9)
   FUNC_1(&VAR_8->ifs_timer,
          VAR_5->phy->lifs_period * VAR_4,
          VAR_0);
  else
   FUNC_1(&VAR_8->ifs_timer,
          VAR_5->phy->sifs_period * VAR_4,
          VAR_0);
 } else {
  FUNC_3(VAR_5);
 }

 FUNC_0(VAR_6);
}
