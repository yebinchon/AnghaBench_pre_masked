
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aggr_wq; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct batadv_hard_iface *VAR_2)
{
 unsigned int VAR_3 = VAR_0 * 1000;


 VAR_3 += FUNC_1() % (VAR_3 / 5) - (VAR_3 / 10);
 FUNC_2(VAR_1, &VAR_2->bat_v.aggr_wq,
      FUNC_0(VAR_3 / 1000));
}
