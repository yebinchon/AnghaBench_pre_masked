
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int (* ccid_hc_tx_packet_sent ) (struct sock*,unsigned int) ;} ;


 int FUNC_0 (struct sock*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct ccid *VAR_0, struct sock *VAR_1,
       unsigned int VAR_2)
{
 if (VAR_0->ccid_ops->ccid_hc_tx_packet_sent != ((void*)0))
  VAR_0->ccid_ops->ccid_hc_tx_packet_sent(VAR_1, VAR_2);
}
