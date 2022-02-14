
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_time_gran; struct dentry* s_root; int * s_d_op; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; struct net* s_fs_info; } ;
struct sunrpc_net {int pipefs_sb_lock; struct super_block* pipefs_sb; int gssd_dummy; } ;
struct TYPE_2__ {int inum; } ;
struct net {TYPE_1__ ns; } ;
struct inode {int dummy; } ;
struct fs_context {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct net*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct dentry*,int ,int ,int ) ;
 int FUNC_4 (int *,int ,struct super_block*) ;
 struct dentry* FUNC_5 (struct inode*) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct sunrpc_net* FUNC_9 (struct net*,int ) ;
 struct inode* FUNC_10 (struct super_block*,int) ;
 int FUNC_11 (struct dentry*) ;
 struct dentry* FUNC_12 (struct dentry*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (struct dentry*,int ,int ,int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_14(struct super_block *VAR_14, struct fs_context *VAR_15)
{
 struct inode *VAR_16;
 struct dentry *VAR_17, *VAR_18;
 struct net *VAR_19 = VAR_14->s_fs_info;
 struct sunrpc_net *VAR_20 = FUNC_9(VAR_19, VAR_13);
 int VAR_21;

 VAR_14->s_blocksize = VAR_2;
 VAR_14->s_blocksize_bits = VAR_1;
 VAR_14->s_magic = VAR_3;
 VAR_14->s_op = &VAR_11;
 VAR_14->s_d_op = &VAR_12;
 VAR_14->s_time_gran = 1;

 VAR_16 = FUNC_10(VAR_14, VAR_8 | 0555);
 VAR_14->s_root = VAR_17 = FUNC_5(VAR_16);
 if (!VAR_17)
  return -VAR_0;
 if (FUNC_13(VAR_17, VAR_9, VAR_5, VAR_4, ((void*)0)))
  return -VAR_0;

 VAR_18 = FUNC_12(VAR_17, VAR_20->gssd_dummy);
 if (FUNC_0(VAR_18)) {
  FUNC_3(VAR_17, VAR_9, VAR_5, VAR_4);
  return FUNC_2(VAR_18);
 }

 FUNC_6("RPC:       sending pipefs MOUNT notification for net %x%s\n",
  VAR_19->ns.inum, FUNC_1(VAR_19));
 FUNC_7(&VAR_20->pipefs_sb_lock);
 VAR_20->pipefs_sb = VAR_14;
 VAR_21 = FUNC_4(&VAR_10,
        VAR_6,
        VAR_14);
 if (VAR_21)
  goto err_depopulate;
 FUNC_8(&VAR_20->pipefs_sb_lock);
 return 0;

err_depopulate:
 FUNC_11(VAR_18);
 FUNC_4(&VAR_10,
        VAR_7,
        VAR_14);
 VAR_20->pipefs_sb = ((void*)0);
 FUNC_3(VAR_17, VAR_9, VAR_5, VAR_4);
 FUNC_8(&VAR_20->pipefs_sb_lock);
 return VAR_21;
}
