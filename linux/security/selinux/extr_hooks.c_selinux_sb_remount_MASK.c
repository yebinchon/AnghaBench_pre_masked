
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct superblock_security_struct {int flags; int def_sid; int mntpoint_sid; int sid; } ;
struct super_block {TYPE_1__* s_type; int s_id; int s_root; struct superblock_security_struct* s_security; } ;
struct selinux_mnt_opts {scalar_t__ defcontext; scalar_t__ rootcontext; scalar_t__ context; scalar_t__ fscontext; } ;
struct inode_security_struct {int sid; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode_security_struct* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct superblock_security_struct*,int ,int ,int ) ;
 int FUNC_2 (struct super_block*,scalar_t__,int *) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_6, void *VAR_7)
{
 struct selinux_mnt_opts *VAR_8 = VAR_7;
 struct superblock_security_struct *VAR_9 = VAR_6->s_security;
 u32 VAR_10;
 int VAR_11;

 if (!(VAR_9->flags & VAR_5))
  return 0;

 if (!VAR_8)
  return 0;

 if (VAR_8->fscontext) {
  VAR_11 = FUNC_2(VAR_6, VAR_8->fscontext, &VAR_10);
  if (VAR_11)
   return VAR_11;
  if (FUNC_1(VAR_9, VAR_3, VAR_9->sid, VAR_10))
   goto out_bad_option;
 }
 if (VAR_8->context) {
  VAR_11 = FUNC_2(VAR_6, VAR_8->context, &VAR_10);
  if (VAR_11)
   return VAR_11;
  if (FUNC_1(VAR_9, VAR_0, VAR_9->mntpoint_sid, VAR_10))
   goto out_bad_option;
 }
 if (VAR_8->rootcontext) {
  struct inode_security_struct *VAR_12;
  VAR_12 = FUNC_0(VAR_6->s_root);
  VAR_11 = FUNC_2(VAR_6, VAR_8->rootcontext, &VAR_10);
  if (VAR_11)
   return VAR_11;
  if (FUNC_1(VAR_9, VAR_4, VAR_12->sid, VAR_10))
   goto out_bad_option;
 }
 if (VAR_8->defcontext) {
  VAR_11 = FUNC_2(VAR_6, VAR_8->defcontext, &VAR_10);
  if (VAR_11)
   return VAR_11;
  if (FUNC_1(VAR_9, VAR_1, VAR_9->def_sid, VAR_10))
   goto out_bad_option;
 }
 return 0;

out_bad_option:
 FUNC_3("SELinux: unable to change security options "
        "during remount (dev %s, type=%s)\n", VAR_6->s_id,
        VAR_6->s_type->name);
 return -VAR_2;
}
