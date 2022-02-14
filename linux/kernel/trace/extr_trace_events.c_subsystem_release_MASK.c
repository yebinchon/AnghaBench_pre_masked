
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_subsystem_dir {scalar_t__ subsystem; int tr; } ;
struct inode {int dummy; } ;
struct file {struct trace_subsystem_dir* private_data; } ;


 int FUNC_0 (struct trace_subsystem_dir*) ;
 int FUNC_1 (struct trace_subsystem_dir*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct trace_subsystem_dir *VAR_2 = VAR_1->private_data;

 FUNC_2(VAR_2->tr);






 if (VAR_2->subsystem)
  FUNC_1(VAR_2);
 else
  FUNC_0(VAR_2);

 return 0;
}
