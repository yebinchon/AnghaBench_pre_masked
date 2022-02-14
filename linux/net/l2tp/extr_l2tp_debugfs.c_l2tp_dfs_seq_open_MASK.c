
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct l2tp_dfs_seq_data* private; } ;
struct l2tp_dfs_seq_data {int net; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct l2tp_dfs_seq_data*) ;
 struct l2tp_dfs_seq_data* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct file*,int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, struct file *VAR_5)
{
 struct l2tp_dfs_seq_data *VAR_6;
 struct seq_file *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  goto out;




 VAR_6->net = FUNC_2(VAR_2->pid);
 if (FUNC_0(VAR_6->net)) {
  VAR_8 = FUNC_1(VAR_6->net);
  goto err_free_pd;
 }

 VAR_8 = FUNC_6(VAR_5, &VAR_3);
 if (VAR_8)
  goto err_free_net;

 VAR_7 = VAR_5->private_data;
 VAR_7->private = VAR_6;

out:
 return VAR_8;

err_free_net:
 FUNC_5(VAR_6->net);
err_free_pd:
 FUNC_3(VAR_6);
 goto out;
}
