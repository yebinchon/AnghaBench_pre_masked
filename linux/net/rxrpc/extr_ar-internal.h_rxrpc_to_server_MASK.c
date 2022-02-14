
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct rxrpc_skb_priv *VAR_1)
{
 return VAR_1->hdr.flags & VAR_0;
}
