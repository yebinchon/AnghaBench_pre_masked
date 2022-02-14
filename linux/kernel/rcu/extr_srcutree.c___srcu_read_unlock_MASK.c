
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcu_struct {TYPE_1__* sda; } ;
struct TYPE_2__ {int * srcu_unlock_count; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

void FUNC_2(struct srcu_struct *VAR_0, int VAR_1)
{
 FUNC_0();
 FUNC_1(VAR_0->sda->srcu_unlock_count[VAR_1]);
}
