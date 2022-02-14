
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_session {int dummy; } ;
struct seq_file {struct stat_session* private; } ;
struct inode {struct stat_session* i_private; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct stat_session*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*,int *) ;
 int FUNC_3 (struct stat_session*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;
 struct seq_file *VAR_5;
 struct stat_session *VAR_6 = VAR_2->i_private;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3, &VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_6);
  return VAR_4;
 }

 VAR_5 = VAR_3->private_data;
 VAR_5->private = VAR_6;
 return VAR_4;
}
