
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timer; } ;
struct TYPE_4__ {TYPE_1__ real; } ;
struct k_itimer {int it_clock; TYPE_2__ it; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct k_itimer *VAR_0)
{
 FUNC_0(&VAR_0->it.real.timer, VAR_0->it_clock, 0);
 return 0;
}
