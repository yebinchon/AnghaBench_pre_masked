
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static u32 FUNC_4(void)
{
 u32 VAR_1 = 0;
 struct task_struct *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  VAR_1 = FUNC_3(VAR_2);
 FUNC_2();

 return VAR_1;
}
