
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct superblock_security_struct {char flags; scalar_t__ sid; scalar_t__ mntpoint_sid; scalar_t__ def_sid; } ;
struct super_block {TYPE_1__* s_type; int s_id; int s_root; struct superblock_security_struct* s_security; } ;
struct inode_security_struct {scalar_t__ sid; } ;
struct TYPE_2__ {int name; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 struct inode_security_struct* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct super_block *VAR_6,
        const struct super_block *VAR_7)
{
 struct superblock_security_struct *VAR_8 = VAR_6->s_security;
 struct superblock_security_struct *VAR_9 = VAR_7->s_security;
 char VAR_10 = VAR_8->flags & VAR_5;
 char VAR_11 = VAR_9->flags & VAR_5;

 if (VAR_10 != VAR_11)
  goto mismatch;
 if ((VAR_10 & VAR_3) && VAR_8->sid != VAR_9->sid)
  goto mismatch;
 if ((VAR_10 & VAR_0) && VAR_8->mntpoint_sid != VAR_9->mntpoint_sid)
  goto mismatch;
 if ((VAR_10 & VAR_1) && VAR_8->def_sid != VAR_9->def_sid)
  goto mismatch;
 if (VAR_10 & VAR_4) {
  struct inode_security_struct *VAR_12 = FUNC_0(VAR_6->s_root);
  struct inode_security_struct *VAR_13 = FUNC_0(VAR_7->s_root);
  if (VAR_12->sid != VAR_13->sid)
   goto mismatch;
 }
 return 0;
mismatch:
 FUNC_1("SELinux: mount invalid.  Same superblock, "
       "different security settings for (dev %s, "
       "type %s)\n", VAR_7->s_id, VAR_7->s_type->name);
 return -VAR_2;
}
