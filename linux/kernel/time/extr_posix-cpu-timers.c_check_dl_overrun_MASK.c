
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dl_overrun; } ;
struct task_struct {TYPE_1__ dl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct task_struct*) ;

__attribute__((used)) static inline void FUNC_1(struct task_struct *VAR_2)
{
 if (VAR_2->dl.dl_overrun) {
  VAR_2->dl.dl_overrun = 0;
  FUNC_0(VAR_1, VAR_0, VAR_2);
 }
}
