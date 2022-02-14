
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int len; unsigned long _skb_refdst; int truesize; int tstamp; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int flags; int len; int meat; int fqdir; int stamp; struct sk_buff* fragments_tail; } ;
struct lowpan_frag_queue {TYPE_2__ q; } ;
struct lowpan_802154_cb {int dummy; } ;
struct inet_skb_parm {int dummy; } ;
struct inet6_skb_parm {int dummy; } ;
struct TYPE_3__ {int d_offset; int d_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,struct sk_buff*,int,int) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct lowpan_frag_queue*,struct sk_buff*,struct sk_buff*,struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct lowpan_frag_queue *VAR_4,
        struct sk_buff *VAR_5, u8 VAR_6)
{
 struct sk_buff *VAR_7;
 struct net_device *VAR_8;
 int VAR_9, VAR_10, VAR_11;




 FUNC_0(sizeof(struct lowpan_802154_cb) > sizeof(struct inet_skb_parm));
 FUNC_0(sizeof(struct lowpan_802154_cb) > sizeof(struct inet6_skb_parm));

 if (VAR_4->q.flags & VAR_0)
  goto err;

 VAR_10 = FUNC_5(VAR_5)->d_offset << 3;
 VAR_9 = FUNC_5(VAR_5)->d_size;


 if (VAR_10 + VAR_5->len == VAR_9) {



  if (VAR_9 < VAR_4->q.len ||
      ((VAR_4->q.flags & VAR_2) && VAR_9 != VAR_4->q.len))
   goto err;
  VAR_4->q.flags |= VAR_2;
  VAR_4->q.len = VAR_9;
 } else {
  if (VAR_9 > VAR_4->q.len) {

   if (VAR_4->q.flags & VAR_2)
    goto err;
   VAR_4->q.len = VAR_9;
  }
 }

 VAR_8 = VAR_5->dev;
 if (VAR_8)
  VAR_5->dev = ((void*)0);
 FUNC_2();

 VAR_7 = VAR_4->q.fragments_tail;
 VAR_11 = FUNC_3(&VAR_4->q, VAR_5, VAR_10, VAR_9);
 if (VAR_11)
  goto err;

 VAR_4->q.stamp = VAR_5->tstamp;
 if (VAR_6 == VAR_3)
  VAR_4->q.flags |= VAR_1;

 VAR_4->q.meat += VAR_5->len;
 FUNC_1(VAR_4->q.fqdir, VAR_5->truesize);

 if (VAR_4->q.flags == (VAR_1 | VAR_2) &&
     VAR_4->q.meat == VAR_4->q.len) {
  int VAR_12;
  unsigned long VAR_13 = VAR_5->_skb_refdst;

  VAR_5->_skb_refdst = 0UL;
  VAR_12 = FUNC_6(VAR_4, VAR_5, VAR_7, VAR_8);
  VAR_5->_skb_refdst = VAR_13;
  return VAR_12;
 }
 FUNC_7(VAR_5);

 return -1;
err:
 FUNC_4(VAR_5);
 return -1;
}
