
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_subsystem_dir {struct trace_array* tr; } ;
struct trace_array {int dummy; } ;
struct inode {struct trace_array* i_private; } ;
struct file {struct trace_subsystem_dir* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_subsystem_dir*) ;
 struct trace_subsystem_dir* FUNC_1 (int,int ) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct trace_subsystem_dir *VAR_4;
 struct trace_array *VAR_5 = VAR_2->i_private;
 int VAR_6;


 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4);
  return VAR_6;
 }
 VAR_4->tr = VAR_5;
 VAR_3->private_data = VAR_4;

 return 0;
}
