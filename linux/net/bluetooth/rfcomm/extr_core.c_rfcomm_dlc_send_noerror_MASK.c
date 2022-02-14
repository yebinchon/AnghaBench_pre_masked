
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rfcomm_dlc {scalar_t__ state; int flags; int tx_queue; int addr; int mtu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_dlc*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct rfcomm_dlc *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = VAR_3->len;

 FUNC_0("dlc %p mtu %d len %d", VAR_2, VAR_2->mtu, VAR_4);

 FUNC_1(VAR_3, VAR_2->addr);
 FUNC_3(&VAR_2->tx_queue, VAR_3);

 if (VAR_2->state == VAR_0 &&
     !FUNC_4(VAR_1, &VAR_2->flags))
  FUNC_2();
}
