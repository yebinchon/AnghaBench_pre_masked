
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_tsflags; scalar_t__ sk_protocol; scalar_t__ sk_type; } ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {int tstamp; } ;
struct TYPE_2__ {int tx_flags; int tskey; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,struct sock*,int,int) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 struct skb_shared_hwtstamps* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*,int) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sock*) ;

void FUNC_8(struct sk_buff *VAR_8,
       struct skb_shared_hwtstamps *VAR_9,
       struct sock *VAR_10, int VAR_11)
{
 struct sk_buff *VAR_12;
 bool VAR_13, VAR_14 = 0;

 if (!VAR_10)
  return;

 if (!VAR_9 && !(VAR_10->sk_tsflags & VAR_7) &&
     FUNC_6(VAR_8)->tx_flags & VAR_3)
  return;

 VAR_13 = VAR_10->sk_tsflags & VAR_6;
 if (!FUNC_5(VAR_10, VAR_13))
  return;

 if (VAR_13) {
   VAR_12 = FUNC_1(0, VAR_0);
 } else {
  VAR_12 = FUNC_3(VAR_8, VAR_0);
 }
 if (!VAR_12)
  return;

 if (VAR_13) {
  FUNC_6(VAR_12)->tx_flags |= FUNC_6(VAR_8)->tx_flags &
          VAR_2;
  FUNC_6(VAR_12)->tskey = FUNC_6(VAR_8)->tskey;
 }

 if (VAR_9)
  *FUNC_4(VAR_12) = *VAR_9;
 else
  VAR_12->tstamp = FUNC_2();

 FUNC_0(VAR_12, VAR_10, VAR_11, VAR_14);
}
