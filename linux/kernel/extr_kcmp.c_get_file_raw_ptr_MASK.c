
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ files; } ;
struct file {int dummy; } ;


 struct file* FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static struct file *
FUNC_5(struct task_struct *VAR_0, unsigned int VAR_1)
{
 struct file *VAR_2 = ((void*)0);

 FUNC_3(VAR_0);
 FUNC_1();

 if (VAR_0->files)
  VAR_2 = FUNC_0(VAR_0->files, VAR_1);

 FUNC_2();
 FUNC_4(VAR_0);

 return VAR_2;
}
