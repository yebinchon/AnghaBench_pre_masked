
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct superblock_security_struct {int flags; TYPE_1__* sb; int def_sid; int mntpoint_sid; int sid; } ;
struct super_block {struct superblock_security_struct* s_security; } ;
struct seq_file {int dummy; } ;
struct inode_security_struct {int sid; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int initialized; } ;
struct TYPE_3__ {struct dentry* s_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct inode_security_struct* FUNC_0 (struct dentry*) ;
 TYPE_2__ VAR_11 ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,int ) ;
 int FUNC_3 (struct seq_file*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_12, struct super_block *VAR_13)
{
 struct superblock_security_struct *VAR_14 = VAR_13->s_security;
 int VAR_15;

 if (!(VAR_14->flags & VAR_10))
  return 0;

 if (!VAR_11.initialized)
  return 0;

 if (VAR_14->flags & VAR_4) {
  FUNC_1(VAR_12, ',');
  FUNC_2(VAR_12, VAR_5);
  VAR_15 = FUNC_3(VAR_12, VAR_14->sid);
  if (VAR_15)
   return VAR_15;
 }
 if (VAR_14->flags & VAR_0) {
  FUNC_1(VAR_12, ',');
  FUNC_2(VAR_12, VAR_1);
  VAR_15 = FUNC_3(VAR_12, VAR_14->mntpoint_sid);
  if (VAR_15)
   return VAR_15;
 }
 if (VAR_14->flags & VAR_2) {
  FUNC_1(VAR_12, ',');
  FUNC_2(VAR_12, VAR_3);
  VAR_15 = FUNC_3(VAR_12, VAR_14->def_sid);
  if (VAR_15)
   return VAR_15;
 }
 if (VAR_14->flags & VAR_6) {
  struct dentry *VAR_16 = VAR_14->sb->s_root;
  struct inode_security_struct *VAR_17 = FUNC_0(VAR_16);
  FUNC_1(VAR_12, ',');
  FUNC_2(VAR_12, VAR_7);
  VAR_15 = FUNC_3(VAR_12, VAR_17->sid);
  if (VAR_15)
   return VAR_15;
 }
 if (VAR_14->flags & VAR_8) {
  FUNC_1(VAR_12, ',');
  FUNC_2(VAR_12, VAR_9);
 }
 return 0;
}
