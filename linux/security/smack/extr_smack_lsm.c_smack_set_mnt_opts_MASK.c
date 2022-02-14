
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_smack {int smk_flags; struct smack_known* smk_root; struct smack_known* smk_hat; struct smack_known* smk_floor; struct smack_known* smk_default; } ;
struct super_block {scalar_t__ s_magic; int * s_user_ns; struct superblock_smack* s_security; struct dentry* s_root; } ;
struct smack_mnt_opts {scalar_t__ fstransmute; scalar_t__ fsroot; scalar_t__ fshat; scalar_t__ fsfloor; scalar_t__ fsdefault; } ;
struct smack_known {int dummy; } ;
struct inode_smack {int smk_flags; } ;
struct inode {int * i_security; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smack_known*) ;
 int FUNC_1 (struct smack_known*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct smack_known*) ;
 int VAR_8 ;
 int FUNC_4 (struct inode*) ;
 struct inode_smack* FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 struct smack_known* FUNC_7 (scalar_t__,int ) ;
 struct smack_known* FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_9,
  void *VAR_10,
  unsigned long VAR_11,
  unsigned long *VAR_12)
{
 struct dentry *VAR_13 = VAR_9->s_root;
 struct inode *VAR_14 = FUNC_2(VAR_13);
 struct superblock_smack *VAR_15 = VAR_9->s_security;
 struct inode_smack *VAR_16;
 struct smack_known *VAR_17;
 struct smack_mnt_opts *VAR_18 = VAR_10;
 bool VAR_19 = 0;

 if (VAR_15->smk_flags & VAR_4)
  return 0;

 if (VAR_14->i_security == ((void*)0)) {
  int VAR_20 = FUNC_4(VAR_14);

  if (VAR_20)
   return VAR_20;
 }

 if (!FUNC_6(VAR_0)) {



  if (VAR_18)
   return -VAR_1;



  VAR_17 = FUNC_8();
  VAR_15->smk_root = VAR_17;
  VAR_15->smk_default = VAR_17;





  if (VAR_9->s_user_ns != &VAR_8 &&
      VAR_9->s_magic != VAR_6 && VAR_9->s_magic != VAR_7 &&
      VAR_9->s_magic != VAR_2) {
   VAR_19 = 1;
   VAR_15->smk_flags |= VAR_5;
  }
 }

 VAR_15->smk_flags |= VAR_4;

 if (VAR_18) {
  if (VAR_18->fsdefault) {
   VAR_17 = FUNC_7(VAR_18->fsdefault, 0);
   if (FUNC_0(VAR_17))
    return FUNC_1(VAR_17);
   VAR_15->smk_default = VAR_17;
  }
  if (VAR_18->fsfloor) {
   VAR_17 = FUNC_7(VAR_18->fsfloor, 0);
   if (FUNC_0(VAR_17))
    return FUNC_1(VAR_17);
   VAR_15->smk_floor = VAR_17;
  }
  if (VAR_18->fshat) {
   VAR_17 = FUNC_7(VAR_18->fshat, 0);
   if (FUNC_0(VAR_17))
    return FUNC_1(VAR_17);
   VAR_15->smk_hat = VAR_17;
  }
  if (VAR_18->fsroot) {
   VAR_17 = FUNC_7(VAR_18->fsroot, 0);
   if (FUNC_0(VAR_17))
    return FUNC_1(VAR_17);
   VAR_15->smk_root = VAR_17;
  }
  if (VAR_18->fstransmute) {
   VAR_17 = FUNC_7(VAR_18->fstransmute, 0);
   if (FUNC_0(VAR_17))
    return FUNC_1(VAR_17);
   VAR_15->smk_root = VAR_17;
   VAR_19 = 1;
  }
 }




 FUNC_3(VAR_14, VAR_15->smk_root);

 if (VAR_19) {
  VAR_16 = FUNC_5(VAR_14);
  VAR_16->smk_flags |= VAR_3;
 }

 return 0;
}
