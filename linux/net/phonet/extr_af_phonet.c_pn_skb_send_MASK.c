
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sockaddr_pn {int dummy; } ;
struct sock {int sk_bound_dev_if; } ;
struct sk_buff {void* pkt_type; } ;
struct pn_sock {scalar_t__ sobject; scalar_t__ dobject; scalar_t__ resource; } ;
struct net_device {int flags; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct net*,scalar_t__) ;
 struct net_device* FUNC_5 (struct net*) ;
 struct net_device* FUNC_6 (struct net*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 struct sock* FUNC_8 (struct net*,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct sk_buff*,struct net_device*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct pn_sock* FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (struct sockaddr_pn const*) ;
 scalar_t__ FUNC_14 (struct sockaddr_pn const*) ;
 struct net* FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;

int FUNC_17(struct sock *VAR_4, struct sk_buff *VAR_5,
  const struct sockaddr_pn *VAR_6)
{
 struct net *VAR_7 = FUNC_15(VAR_4);
 struct net_device *VAR_8;
 struct pn_sock *VAR_9 = FUNC_12(VAR_4);
 int VAR_10;
 u16 VAR_11, VAR_12;
 u8 VAR_13, VAR_14, VAR_15;

 VAR_11 = VAR_9->sobject;
 if (VAR_6 != ((void*)0)) {
  VAR_12 = FUNC_13(VAR_6);
  VAR_15 = FUNC_14(VAR_6);
 } else {
  VAR_12 = VAR_9->dobject;
  VAR_15 = VAR_9->resource;
 }
 VAR_13 = FUNC_7(VAR_12);

 VAR_10 = -VAR_0;
 if (VAR_4->sk_bound_dev_if)
  VAR_8 = FUNC_0(VAR_7, VAR_4->sk_bound_dev_if);
 else if (FUNC_4(VAR_7, VAR_13) == 0) {
  VAR_8 = FUNC_5(VAR_7);
  VAR_5->pkt_type = VAR_2;
 } else if (VAR_12 == 0) {

  struct sock *VAR_16 = FUNC_8(VAR_7, VAR_15);
  if (VAR_16) {
   FUNC_16(VAR_16);
   VAR_8 = FUNC_5(VAR_7);
   VAR_5->pkt_type = VAR_2;
  } else
   VAR_8 = FUNC_6(VAR_7, VAR_13);
 } else
  VAR_8 = FUNC_6(VAR_7, VAR_13);

 if (!VAR_8 || !(VAR_8->flags & VAR_1))
  goto drop;

 VAR_14 = FUNC_3(VAR_8, VAR_13);
 if (VAR_14 == VAR_3)
  goto drop;

 if (!FUNC_7(VAR_11))
  VAR_11 = FUNC_10(VAR_14, FUNC_9(VAR_11));

 VAR_10 = FUNC_11(VAR_5, VAR_8, VAR_12, VAR_11, VAR_15, 0);
 FUNC_1(VAR_8);
 return VAR_10;

drop:
 FUNC_2(VAR_5);
 if (VAR_8)
  FUNC_1(VAR_8);
 return VAR_10;
}
