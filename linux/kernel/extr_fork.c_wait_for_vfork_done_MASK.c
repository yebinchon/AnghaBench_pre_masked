
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * vfork_done; } ;
struct completion {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct completion*) ;

__attribute__((used)) static int FUNC_8(struct task_struct *VAR_0,
    struct completion *VAR_1)
{
 int VAR_2;

 FUNC_3();
 FUNC_0();
 VAR_2 = FUNC_7(VAR_1);
 FUNC_1(0);
 FUNC_2();

 if (VAR_2) {
  FUNC_5(VAR_0);
  VAR_0->vfork_done = ((void*)0);
  FUNC_6(VAR_0);
 }

 FUNC_4(VAR_0);
 return VAR_2;
}
