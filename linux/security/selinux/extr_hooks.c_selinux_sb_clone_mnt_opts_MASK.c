
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct superblock_security_struct {int flags; scalar_t__ behavior; int lock; void* mntpoint_sid; void* sid; int def_sid; } ;
struct super_block {int s_root; struct superblock_security_struct* s_security; } ;
struct inode_security_struct {void* sid; } ;
struct TYPE_3__ {int initialized; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (TYPE_1__*,struct super_block*) ;
 int FUNC_6 (struct super_block const*,struct super_block*) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static int FUNC_7(const struct super_block *VAR_8,
     struct super_block *VAR_9,
     unsigned long VAR_10,
     unsigned long *VAR_11)
{
 int VAR_12 = 0;
 const struct superblock_security_struct *VAR_13 = VAR_8->s_security;
 struct superblock_security_struct *VAR_14 = VAR_9->s_security;

 int VAR_15 = (VAR_13->flags & VAR_2);
 int VAR_16 = (VAR_13->flags & VAR_0);
 int VAR_17 = (VAR_13->flags & VAR_3);





 if (!VAR_7.initialized)
  return 0;





 if (VAR_10 && !VAR_11)
  return -VAR_1;


 FUNC_0(!(VAR_13->flags & VAR_6));


 if (VAR_14->flags & VAR_6) {
  if ((VAR_10 & VAR_5) && !VAR_16)
   *VAR_11 |= VAR_5;
  return FUNC_6(VAR_8, VAR_9);
 }

 FUNC_2(&VAR_14->lock);

 VAR_14->flags = VAR_13->flags;

 VAR_14->sid = VAR_13->sid;
 VAR_14->def_sid = VAR_13->def_sid;
 VAR_14->behavior = VAR_13->behavior;

 if (VAR_14->behavior == VAR_4 &&
  !(VAR_10 & VAR_5) && !VAR_16) {
  VAR_12 = FUNC_5(&VAR_7, VAR_9);
  if (VAR_12)
   goto out;
 }

 if (VAR_10 & VAR_5 && !VAR_16) {
  VAR_14->behavior = VAR_4;
  *VAR_11 |= VAR_5;
 }

 if (VAR_16) {
  u32 VAR_18 = VAR_13->mntpoint_sid;

  if (!VAR_15)
   VAR_14->sid = VAR_18;
  if (!VAR_17) {
   struct inode_security_struct *VAR_19 = FUNC_1(VAR_9->s_root);
   VAR_19->sid = VAR_18;
  }
  VAR_14->mntpoint_sid = VAR_18;
 }
 if (VAR_17) {
  const struct inode_security_struct *VAR_20 = FUNC_1(VAR_8->s_root);
  struct inode_security_struct *VAR_21 = FUNC_1(VAR_9->s_root);

  VAR_21->sid = VAR_20->sid;
 }

 FUNC_4(VAR_9);
out:
 FUNC_3(&VAR_14->lock);
 return VAR_12;
}
