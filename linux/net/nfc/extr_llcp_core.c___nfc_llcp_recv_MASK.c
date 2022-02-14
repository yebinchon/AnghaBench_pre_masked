
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_llcp_local {int rx_work; int link_timer; struct sk_buff* rx_pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfc_llcp_local *VAR_0, struct sk_buff *VAR_1)
{
 VAR_0->rx_pending = VAR_1;
 FUNC_0(&VAR_0->link_timer);
 FUNC_1(&VAR_0->rx_work);
}
