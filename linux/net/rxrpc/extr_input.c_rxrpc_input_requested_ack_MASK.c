
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int tstamp; } ;
struct TYPE_2__ {scalar_t__ serial; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_call {struct sk_buff** rxtx_buffer; } ;
typedef scalar_t__ rxrpc_serial_t ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct rxrpc_call*,int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_1 ;
 struct rxrpc_skb_priv* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct rxrpc_call *VAR_2,
          ktime_t VAR_3,
          rxrpc_serial_t VAR_4,
          rxrpc_serial_t VAR_5)
{
 struct rxrpc_skb_priv *VAR_6;
 struct sk_buff *VAR_7;
 ktime_t VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = VAR_2->rxtx_buffer[VAR_9];
  if (!VAR_7)
   continue;

  VAR_8 = VAR_7->tstamp;
  FUNC_2();
  VAR_6 = FUNC_1(VAR_7);
  if (VAR_6->hdr.serial != VAR_4)
   continue;
  goto found;
 }

 return;

found:
 FUNC_0(VAR_2, VAR_1,
      VAR_4, VAR_5, VAR_8, VAR_3);
}
