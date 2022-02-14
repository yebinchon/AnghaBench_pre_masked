
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {int flags; } ;
struct ieee802154_local {TYPE_1__ hw; scalar_t__ suspended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee802154_local*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct ieee802154_local*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_10 () ;

void FUNC_11(struct ieee802154_local *VAR_2, struct sk_buff *VAR_3)
{
 u16 VAR_4;

 FUNC_0(FUNC_10() == 0);

 if (VAR_2->suspended)
  goto drop;





 if (VAR_2->hw.flags & VAR_1) {
  VAR_4 = FUNC_2(0, VAR_3->data, VAR_3->len);
  FUNC_5(VAR_4, FUNC_8(VAR_3, 2));
 }

 FUNC_6();

 FUNC_3(VAR_2, VAR_3);




 if (VAR_2->hw.flags & VAR_0) {
  VAR_4 = FUNC_2(0, VAR_3->data, VAR_3->len);
  if (VAR_4) {
   FUNC_7();
   goto drop;
  }
 }

 FUNC_9(VAR_3, VAR_3->len - 2);

 FUNC_1(VAR_2, VAR_3);

 FUNC_7();

 return;
drop:
 FUNC_4(VAR_3);
}
