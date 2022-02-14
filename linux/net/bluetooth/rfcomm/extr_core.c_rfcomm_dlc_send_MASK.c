
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rfcomm_dlc {scalar_t__ state; int mtu; int flags; int tx_queue; int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_dlc*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct rfcomm_dlc *VAR_4, struct sk_buff *VAR_5)
{
 int VAR_6 = VAR_5->len;

 if (VAR_4->state != VAR_0)
  return -VAR_2;

 FUNC_0("dlc %p mtu %d len %d", VAR_4, VAR_4->mtu, VAR_6);

 if (VAR_6 > VAR_4->mtu)
  return -VAR_1;

 FUNC_1(VAR_5, VAR_4->addr);
 FUNC_3(&VAR_4->tx_queue, VAR_5);

 if (!FUNC_4(VAR_3, &VAR_4->flags))
  FUNC_2();
 return VAR_6;
}
