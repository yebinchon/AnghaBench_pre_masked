
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct lec_priv {int lec_arp_lock; } ;
struct lec_arp_table {int next; TYPE_1__* recv_vcc; scalar_t__ vcc; int timer; struct lec_priv* priv; } ;
struct TYPE_2__ {int vci; int vpi; } ;


 int FUNC_0 (int *) ;
 struct lec_arp_table* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lec_arp_table*) ;
 int FUNC_4 (struct lec_arp_table*) ;
 int FUNC_5 (char*,struct lec_arp_table*,struct lec_priv*,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_0 ;
 struct lec_arp_table* VAR_1 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_2)
{
 unsigned long VAR_3;
 struct lec_arp_table *VAR_4 = FUNC_1(VAR_4, VAR_2, VAR_0);
 struct lec_priv *VAR_5 = VAR_4->priv;

 FUNC_0(&VAR_4->timer);

 FUNC_5("%p %p: vpi:%d vci:%d\n",
   VAR_4, VAR_5,
   VAR_4->vcc ? VAR_4->recv_vcc->vpi : 0,
   VAR_4->vcc ? VAR_4->recv_vcc->vci : 0);

 FUNC_6(&VAR_5->lec_arp_lock, VAR_3);
 FUNC_2(&VAR_4->next);
 FUNC_7(&VAR_5->lec_arp_lock, VAR_3);

 FUNC_3(VAR_4);
 FUNC_4(VAR_4);
}
