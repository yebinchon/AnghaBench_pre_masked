
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {int user_ns; int cap_permitted; } ;
struct TYPE_3__ {int cap_permitted; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_4();
 VAR_3 = FUNC_1(FUNC_0(VAR_2)->cap_permitted,
     FUNC_2()->cap_permitted);
 if (!VAR_3 && !FUNC_3(FUNC_0(VAR_2)->user_ns, VAR_0))
  VAR_4 = -VAR_1;
 FUNC_5();

 return VAR_4;
}
