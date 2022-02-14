
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expires; } ;
struct ip_vs_conn {TYPE_1__ timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct ip_vs_conn *VAR_1)
{



 if (FUNC_2(&VAR_1->timer) &&
     FUNC_1(VAR_1->timer.expires, VAR_0))
  FUNC_0(&VAR_1->timer, VAR_0);
}
