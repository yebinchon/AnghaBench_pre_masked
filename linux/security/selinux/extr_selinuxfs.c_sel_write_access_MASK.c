
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
struct av_decision {int flags; int seqno; int auditdeny; int auditallow; int allowed; } ;
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
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (struct file*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t,int ) ;
 int FUNC_5 (char*,int ,char*,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (struct selinux_state*,int ,int ,int ,struct av_decision*) ;
 int FUNC_7 (struct selinux_state*,char*,int *,int ) ;
 int VAR_7 ;
 int FUNC_8 (char*,char*,char*,char*,int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct file *VAR_8, char *VAR_9, size_t VAR_10)
{
 struct selinux_fs_info *VAR_11 = FUNC_2(VAR_8)->i_sb->s_fs_info;
 struct selinux_state *VAR_12 = VAR_11->state;
 char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 u32 VAR_15, VAR_16;
 u16 VAR_17;
 struct av_decision VAR_18;
 ssize_t VAR_19;

 VAR_19 = FUNC_0(&VAR_7,
         FUNC_1(), VAR_4,
         VAR_3, VAR_5, ((void*)0));
 if (VAR_19)
  goto out;

 VAR_19 = -VAR_1;
 VAR_13 = FUNC_4(VAR_10 + 1, VAR_2);
 if (!VAR_13)
  goto out;

 VAR_19 = -VAR_1;
 VAR_14 = FUNC_4(VAR_10 + 1, VAR_2);
 if (!VAR_14)
  goto out;

 VAR_19 = -VAR_0;
 if (FUNC_8(VAR_9, "%s %s %hu", VAR_13, VAR_14, &VAR_17) != 3)
  goto out;

 VAR_19 = FUNC_7(VAR_12, VAR_13, &VAR_15, VAR_2);
 if (VAR_19)
  goto out;

 VAR_19 = FUNC_7(VAR_12, VAR_14, &VAR_16, VAR_2);
 if (VAR_19)
  goto out;

 FUNC_6(VAR_12, VAR_15, VAR_16, VAR_17, &VAR_18);

 VAR_19 = FUNC_5(VAR_9, VAR_6,
     "%x %x %x %x %u %x",
     VAR_18.allowed, 0xffffffff,
     VAR_18.auditallow, VAR_18.auditdeny,
     VAR_18.seqno, VAR_18.flags);
out:
 FUNC_3(VAR_14);
 FUNC_3(VAR_13);
 return VAR_19;
}
