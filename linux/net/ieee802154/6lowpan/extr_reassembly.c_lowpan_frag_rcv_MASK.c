
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct lowpan_frag_queue {TYPE_1__ q; } ;
struct lowpan_802154_cb {scalar_t__ d_size; } ;
struct ieee802154_hdr {int dest; int source; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (int ) ;
 struct lowpan_frag_queue* FUNC_1 (struct net*,struct lowpan_802154_cb*,int *,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct ieee802154_hdr*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct lowpan_802154_cb* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct lowpan_frag_queue*,struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,int ,struct lowpan_802154_cb*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct sk_buff *VAR_3, u8 VAR_4)
{
 struct lowpan_frag_queue *VAR_5;
 struct net *VAR_6 = FUNC_0(VAR_3->dev);
 struct lowpan_802154_cb *VAR_7 = FUNC_5(VAR_3);
 struct ieee802154_hdr VAR_8 = {};
 int VAR_9;

 if (FUNC_2(VAR_3, &VAR_8) < 0)
  goto err;

 VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_7);
 if (VAR_9 < 0)
  goto err;

 if (VAR_4 == VAR_1) {
  VAR_9 = FUNC_8(VAR_3);
  if (VAR_9 == VAR_2)
   goto err;
 }

 if (VAR_7->d_size > VAR_0) {
  FUNC_9("lowpan_frag_rcv: datagram size exceeds MTU\n");
  goto err;
 }

 VAR_5 = FUNC_1(VAR_6, VAR_7, &VAR_8.source, &VAR_8.dest);
 if (VAR_5 != ((void*)0)) {
  int VAR_10;

  FUNC_10(&VAR_5->q.lock);
  VAR_10 = FUNC_6(VAR_5, VAR_3, VAR_4);
  FUNC_11(&VAR_5->q.lock);

  FUNC_3(&VAR_5->q);
  return VAR_10;
 }

err:
 FUNC_4(VAR_3);
 return -1;
}
