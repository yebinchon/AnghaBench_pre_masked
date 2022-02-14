
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct seq_file {int private; } ;
struct inode {int i_private; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,struct seq_operations const*) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_1, struct file *VAR_2,
    const struct seq_operations *VAR_3)
{
 struct seq_file *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4 = VAR_2->private_data;

 VAR_4->private = VAR_1->i_private;

 return VAR_5;
}
