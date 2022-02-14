
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct task_security_struct {int sid; } ;
struct superblock_security_struct {int sid; } ;
struct inode_security_struct {int sid; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {int d_name; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct common_audit_data {TYPE_2__ u; int type; } ;
struct TYPE_3__ {struct superblock_security_struct* s_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int ,int,struct common_audit_data*) ;
 int FUNC_1 () ;
 struct inode_security_struct* FUNC_2 (struct inode*) ;
 struct task_security_struct* FUNC_3 (int ) ;
 int FUNC_4 (struct task_security_struct*,struct inode*,int *,int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_8,
        struct dentry *VAR_9,
        u16 VAR_10)
{
 const struct task_security_struct *VAR_11 = FUNC_3(FUNC_1());
 struct inode_security_struct *VAR_12;
 struct superblock_security_struct *VAR_13;
 u32 VAR_14, VAR_15;
 struct common_audit_data VAR_16;
 int VAR_17;

 VAR_12 = FUNC_2(VAR_8);
 VAR_13 = VAR_8->i_sb->s_security;

 VAR_14 = VAR_11->sid;

 VAR_16.type = VAR_4;
 VAR_16.u.dentry = VAR_9;

 VAR_17 = FUNC_0(&VAR_7,
     VAR_14, VAR_12->sid, VAR_5,
     VAR_0 | VAR_1,
     &VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_4(FUNC_3(FUNC_1()), VAR_8,
        &VAR_9->d_name, VAR_10, &VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_0(&VAR_7,
     VAR_14, VAR_15, VAR_10, VAR_3, &VAR_16);
 if (VAR_17)
  return VAR_17;

 return FUNC_0(&VAR_7,
       VAR_15, VAR_13->sid,
       VAR_6,
       VAR_2, &VAR_16);
}
