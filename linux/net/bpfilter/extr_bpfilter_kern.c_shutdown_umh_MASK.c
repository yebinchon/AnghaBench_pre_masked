
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_3__ {int pid; } ;
struct TYPE_4__ {TYPE_1__ info; scalar_t__ stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct task_struct* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int ,struct task_struct*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct task_struct *VAR_3;

 if (VAR_2.stop)
  return;

 VAR_3 = FUNC_1(FUNC_0(VAR_2.info.pid), VAR_0);
 if (VAR_3) {
  FUNC_3(VAR_1, VAR_3, 1);
  FUNC_2(VAR_3);
 }
}
