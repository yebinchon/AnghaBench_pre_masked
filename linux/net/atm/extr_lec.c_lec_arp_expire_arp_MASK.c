
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct lec_arp_table {scalar_t__ status; scalar_t__ no_tries; int timer; int mac_addr; TYPE_1__* priv; scalar_t__ is_rdesc; } ;
struct TYPE_2__ {scalar_t__ max_retry_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lec_arp_table* FUNC_0 (struct lec_arp_table*,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_6)
{
 struct lec_arp_table *VAR_7;

 VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);

 FUNC_2("\n");
 if (VAR_7->status == VAR_0) {
  if (VAR_7->no_tries <= VAR_7->priv->max_retry_count) {
   if (VAR_7->is_rdesc)
    FUNC_3(VAR_7->priv, VAR_4,
          VAR_7->mac_addr, ((void*)0), ((void*)0));
   else
    FUNC_3(VAR_7->priv, VAR_3,
          VAR_7->mac_addr, ((void*)0), ((void*)0));
   VAR_7->no_tries++;
  }
  FUNC_1(&VAR_7->timer, VAR_2 + (1 * VAR_1));
 }
}
