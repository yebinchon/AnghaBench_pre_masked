
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_tp_vars {int rto; int timer; int sending; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct batadv_tp_vars *VAR_1)
{



 if (FUNC_3(FUNC_0(&VAR_1->sending) == 0))

  return;

 FUNC_1(&VAR_1->timer, VAR_0 + FUNC_2(VAR_1->rto));
}
