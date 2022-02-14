
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcu_struct {TYPE_1__* sda; int srcu_idx; } ;
struct TYPE_2__ {int * srcu_lock_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

int FUNC_3(struct srcu_struct *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->srcu_idx) & 0x1;
 FUNC_2(VAR_0->sda->srcu_lock_count[VAR_1]);
 FUNC_1();
 return VAR_1;
}
