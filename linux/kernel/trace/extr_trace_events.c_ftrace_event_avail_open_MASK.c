
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct inode*,struct file*,struct seq_operations const*) ;
 struct seq_operations VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 const struct seq_operations *VAR_3 = &VAR_0;


 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
