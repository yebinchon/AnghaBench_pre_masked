
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int elp_wq; int elp_interval; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct batadv_hard_iface *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->bat_v.elp_interval) - VAR_0;
 VAR_3 += FUNC_2() % (2 * VAR_0);

 FUNC_3(VAR_1, &VAR_2->bat_v.elp_wq,
      FUNC_1(VAR_3));
}
