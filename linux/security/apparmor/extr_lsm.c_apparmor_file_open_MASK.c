
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path_cond {int member_1; int member_0; } ;
struct inode {int i_mode; int i_uid; } ;
struct TYPE_4__ {int dentry; } ;
struct file {TYPE_2__ f_path; int f_cred; } ;
struct aa_label {int dummy; } ;
struct aa_file_ctx {int allow; } ;
struct TYPE_3__ {scalar_t__ in_execve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aa_label* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ,struct aa_label*,TYPE_2__*,int ,int,struct path_cond*) ;
 int FUNC_3 (struct aa_label*) ;
 TYPE_1__* VAR_4 ;
 struct aa_file_ctx* FUNC_4 (struct file*) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct aa_label*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5)
{
 struct aa_file_ctx *VAR_6 = FUNC_4(VAR_5);
 struct aa_label *VAR_7;
 int VAR_8 = 0;

 if (!FUNC_6(VAR_5->f_path.dentry))
  return 0;






 if (VAR_4->in_execve) {
  VAR_6->allow = VAR_1 | VAR_2 | VAR_0;
  return 0;
 }

 VAR_7 = FUNC_0(VAR_5->f_cred);
 if (!FUNC_7(VAR_7)) {
  struct inode *VAR_9 = FUNC_5(VAR_5);
  struct path_cond VAR_10 = { VAR_9->i_uid, VAR_9->i_mode };

  VAR_8 = FUNC_2(VAR_3, VAR_7, &VAR_5->f_path, 0,
         FUNC_1(VAR_5), &VAR_10);

  VAR_6->allow = FUNC_1(VAR_5);
 }
 FUNC_3(VAR_7);

 return VAR_8;
}
