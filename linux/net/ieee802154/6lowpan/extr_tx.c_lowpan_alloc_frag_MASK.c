
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mac_len; int priority; struct net_device* dev; } ;
struct net_device {scalar_t__ needed_headroom; scalar_t__ needed_tailroom; } ;
struct ieee802154_hdr {int source; int dest; } ;
struct TYPE_2__ {struct net_device* wdev; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct net_device*) ;
 int * FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,struct net_device*,int *,int *,int) ;

__attribute__((used)) static struct sk_buff*
FUNC_11(struct sk_buff *VAR_2, int VAR_3,
    const struct ieee802154_hdr *VAR_4, bool VAR_5)
{
 struct net_device *VAR_6 = FUNC_4(VAR_2->dev)->wdev;
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_6->needed_headroom + VAR_6->needed_tailroom + VAR_3,
    VAR_1);

 if (FUNC_3(VAR_7)) {
  VAR_7->dev = VAR_6;
  VAR_7->priority = VAR_2->priority;
  FUNC_8(VAR_7, VAR_6->needed_headroom);
  FUNC_9(VAR_7);
  *FUNC_5(VAR_7) = *FUNC_5(VAR_2);

  if (VAR_5) {
   FUNC_7(VAR_7, FUNC_6(VAR_2), VAR_2->mac_len);
  } else {
   VAR_8 = FUNC_10(VAR_7, VAR_6,
        &VAR_4->dest,
        &VAR_4->source, VAR_3);
   if (VAR_8 < 0) {
    FUNC_2(VAR_7);
    return FUNC_0(VAR_8);
   }
  }
 } else {
  VAR_7 = FUNC_0(-VAR_0);
 }

 return VAR_7;
}
