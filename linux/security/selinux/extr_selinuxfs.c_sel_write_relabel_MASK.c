
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct selinux_state {int dummy; } ;
struct selinux_fs_info {struct selinux_state* state; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* i_sb; } ;
struct TYPE_3__ {struct selinux_fs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (struct file*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (struct selinux_state*,int,int,int ,int*) ;
 int FUNC_7 (struct selinux_state*,char*,int*,int ) ;
 int FUNC_8 (struct selinux_state*,int,char**,int*) ;
 int VAR_8 ;
 int FUNC_9 (char*,char*,char*,char*,int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct file *VAR_9, char *VAR_10, size_t VAR_11)
{
 struct selinux_fs_info *VAR_12 = FUNC_2(VAR_9)->i_sb->s_fs_info;
 struct selinux_state *VAR_13 = VAR_12->state;
 char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 u32 VAR_16, VAR_17, VAR_18;
 u16 VAR_19;
 ssize_t VAR_20;
 char *VAR_21 = ((void*)0);
 u32 VAR_22;

 VAR_20 = FUNC_0(&VAR_8,
         FUNC_1(), VAR_5,
         VAR_4, VAR_6,
         ((void*)0));
 if (VAR_20)
  goto out;

 VAR_20 = -VAR_1;
 VAR_14 = FUNC_4(VAR_11 + 1, VAR_3);
 if (!VAR_14)
  goto out;

 VAR_20 = -VAR_1;
 VAR_15 = FUNC_4(VAR_11 + 1, VAR_3);
 if (!VAR_15)
  goto out;

 VAR_20 = -VAR_0;
 if (FUNC_9(VAR_10, "%s %s %hu", VAR_14, VAR_15, &VAR_19) != 3)
  goto out;

 VAR_20 = FUNC_7(VAR_13, VAR_14, &VAR_16, VAR_3);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_7(VAR_13, VAR_15, &VAR_17, VAR_3);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_6(VAR_13, VAR_16, VAR_17, VAR_19, &VAR_18);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_8(VAR_13, VAR_18, &VAR_21, &VAR_22);
 if (VAR_20)
  goto out;

 VAR_20 = -VAR_2;
 if (VAR_22 > VAR_7)
  goto out;

 FUNC_5(VAR_10, VAR_21, VAR_22);
 VAR_20 = VAR_22;
out:
 FUNC_3(VAR_21);
 FUNC_3(VAR_15);
 FUNC_3(VAR_14);
 return VAR_20;
}
