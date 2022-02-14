
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int tstamp; } ;
struct TYPE_4__ {int serial; } ;
struct rxrpc_skb_priv {TYPE_2__ hdr; } ;
struct rxrpc_call {TYPE_1__* peer; } ;
typedef int ktime_t ;
struct TYPE_3__ {int rtt_usage; int rtt_last_req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rxrpc_call*,int ,int ,int,int,int ) ;
 int VAR_1 ;
 struct rxrpc_skb_priv* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct rxrpc_call *VAR_2, struct sk_buff *VAR_3)
{
 struct rxrpc_skb_priv *VAR_4 = FUNC_3(VAR_3);
 ktime_t VAR_5 = VAR_3->tstamp;

 if (VAR_2->peer->rtt_usage < 3 ||
     FUNC_1(FUNC_0(VAR_2->peer->rtt_last_req, 1000), VAR_5))
  FUNC_2(VAR_2, VAR_0, VAR_4->hdr.serial,
      1, 1,
      VAR_1);
}
