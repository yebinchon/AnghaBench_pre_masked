
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct l2tp_dfs_seq_data* private; } ;
struct l2tp_dfs_seq_data {scalar_t__ net; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (struct l2tp_dfs_seq_data*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct l2tp_dfs_seq_data *VAR_2;
 struct seq_file *VAR_3;

 VAR_3 = VAR_1->private_data;
 VAR_2 = VAR_3->private;
 if (VAR_2->net)
  FUNC_1(VAR_2->net);
 FUNC_0(VAR_2);
 FUNC_2(VAR_0, VAR_1);

 return 0;
}
