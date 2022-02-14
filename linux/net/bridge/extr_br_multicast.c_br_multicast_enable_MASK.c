
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_mcast_own_query {int timer; scalar_t__ startup_sent; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bridge_mcast_own_query *VAR_1)
{
 VAR_1->startup_sent = 0;

 if (FUNC_2(&VAR_1->timer) >= 0 ||
     FUNC_0(&VAR_1->timer))
  FUNC_1(&VAR_1->timer, VAR_0);
}
