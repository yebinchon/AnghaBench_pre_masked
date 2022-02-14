
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct rpc_clnt* private; } ;
struct rpc_clnt {int cl_count; } ;
struct inode {struct rpc_clnt* i_private; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3, &VAR_1);
 if (!VAR_4) {
  struct seq_file *VAR_5 = VAR_3->private_data;
  struct rpc_clnt *VAR_6 = VAR_5->private = VAR_2->i_private;

  if (!FUNC_0(&VAR_6->cl_count)) {
   FUNC_2(VAR_2, VAR_3);
   VAR_4 = -VAR_0;
  }
 }

 return VAR_4;
}
