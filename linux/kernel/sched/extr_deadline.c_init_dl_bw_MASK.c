
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dl_bw {int bw; scalar_t__ total_bw; int lock; } ;
struct TYPE_2__ {int dl_runtime_lock; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(struct dl_bw *VAR_2)
{
 FUNC_3(&VAR_2->lock);
 FUNC_2(&VAR_1.dl_runtime_lock);
 if (FUNC_1() == VAR_0)
  VAR_2->bw = -1;
 else
  VAR_2->bw = FUNC_5(FUNC_0(), FUNC_1());
 FUNC_4(&VAR_1.dl_runtime_lock);
 VAR_2->total_bw = 0;
}
