
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int (* ccid_hc_tx_send_packet ) (struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct ccid *VAR_1, struct sock *VAR_2,
      struct sk_buff *VAR_3)
{
 if (VAR_1->ccid_ops->ccid_hc_tx_send_packet != ((void*)0))
  return VAR_1->ccid_ops->ccid_hc_tx_send_packet(VAR_2, VAR_3);
 return VAR_0;
}
