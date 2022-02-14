
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ogm_wq; } ;
struct batadv_priv {TYPE_1__ bat_v; int orig_interval; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct batadv_priv *VAR_2)
{
 unsigned long VAR_3;



 if (FUNC_1(&VAR_2->bat_v.ogm_wq))
  return;

 VAR_3 = FUNC_0(&VAR_2->orig_interval) - VAR_0;
 VAR_3 += FUNC_3() % (2 * VAR_0);
 FUNC_4(VAR_1, &VAR_2->bat_v.ogm_wq,
      FUNC_2(VAR_3));
}
