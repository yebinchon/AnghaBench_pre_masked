
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct TYPE_3__ {int pg_vec; } ;
struct packet_sock {int skb_completion; TYPE_1__ tx_ring; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct packet_sock*,void*,int) ;
 int FUNC_1 (struct packet_sock*,void*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct packet_sock* FUNC_6 (int ) ;
 void* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_1)
{
 struct packet_sock *VAR_2 = FUNC_6(VAR_1->sk);

 if (FUNC_3(VAR_2->tx_ring.pg_vec)) {
  void *VAR_3;
  __u32 VAR_4;

  VAR_3 = FUNC_7(VAR_1);
  FUNC_4(&VAR_2->tx_ring);

  VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
  FUNC_0(VAR_2, VAR_3, VAR_0 | VAR_4);

  if (!FUNC_5(&VAR_2->tx_ring))
   FUNC_2(&VAR_2->skb_completion);
 }

 FUNC_8(VAR_1);
}
