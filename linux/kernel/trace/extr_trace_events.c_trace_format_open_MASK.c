
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct file* private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (struct file*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct seq_file *VAR_3;
 int VAR_4;



 VAR_4 = FUNC_0(VAR_2, &VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = VAR_2->private_data;
 VAR_3->private = VAR_2;

 return 0;
}
