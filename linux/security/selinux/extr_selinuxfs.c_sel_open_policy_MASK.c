
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_state {int dummy; } ;
struct selinux_fs_info {int policy_opened; int mutex; struct selinux_state* state; } ;
struct policy_load_memory {int data; int len; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {struct policy_load_memory* private_data; } ;
struct TYPE_2__ {struct selinux_fs_info* s_fs_info; } ;


 int FUNC_0 (struct policy_load_memory*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,scalar_t__) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct policy_load_memory*) ;
 struct policy_load_memory* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct selinux_state*) ;
 int FUNC_12 (struct selinux_state*,int *,int *) ;
 int VAR_6 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_7, struct file *VAR_8)
{
 struct selinux_fs_info *VAR_9 = VAR_7->i_sb->s_fs_info;
 struct selinux_state *VAR_10 = VAR_9->state;
 struct policy_load_memory *VAR_11 = ((void*)0);
 int VAR_12;

 FUNC_0(VAR_8->private_data);

 FUNC_9(&VAR_9->mutex);

 VAR_12 = FUNC_1(&VAR_6,
     FUNC_2(), VAR_4,
     VAR_3, VAR_5, ((void*)0));
 if (VAR_12)
  goto err;

 VAR_12 = -VAR_0;
 if (VAR_9->policy_opened)
  goto err;

 VAR_12 = -VAR_1;
 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  goto err;

 if (FUNC_3(VAR_7) != FUNC_11(VAR_10)) {
  FUNC_5(VAR_7);
  FUNC_4(VAR_7, FUNC_11(VAR_10));
  FUNC_6(VAR_7);
 }

 VAR_12 = FUNC_12(VAR_10, &VAR_11->data, &VAR_11->len);
 if (VAR_12)
  goto err;

 VAR_9->policy_opened = 1;

 VAR_8->private_data = VAR_11;

 FUNC_10(&VAR_9->mutex);

 return 0;
err:
 FUNC_10(&VAR_9->mutex);

 if (VAR_11)
  FUNC_13(VAR_11->data);
 FUNC_7(VAR_11);
 return VAR_12;
}
