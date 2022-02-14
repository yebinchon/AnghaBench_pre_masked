
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rb_root {int dummy; } ;
struct ext4_xattr_ref {int inode_size_rem; int block_size_rem; int IrpContext; int OnDiskInode; int * block_bh; void* IsOnDiskInodeDirty; int ordered_list; TYPE_1__* fs; TYPE_2__* inode_ref; void* block_loaded; int * iter_from; scalar_t__ ea_size; int root; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_xattr_header {int dummy; } ;
typedef scalar_t__ ext4_fsblk_t ;
typedef int __u32 ;
struct TYPE_11__ {scalar_t__ i_file_acl; } ;
struct TYPE_10__ {TYPE_6__ Inode; } ;
struct TYPE_9__ {int sb; } ;
typedef TYPE_1__* PEXT2_VCB ;
typedef TYPE_2__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_6__*,int ) ;
 void* VAR_2 ;
 int FUNC_3 (int *) ;
 void* VAR_3 ;
 int FUNC_4 (struct ext4_xattr_ref*) ;
 int FUNC_5 (struct ext4_xattr_ref*) ;
 int FUNC_6 (struct ext4_xattr_ref*) ;
 int FUNC_7 (struct ext4_xattr_ref*) ;
 int * FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;

int FUNC_11(PEXT2_IRP_CONTEXT VAR_4, PEXT2_VCB VAR_5, PEXT2_MCB VAR_6,
     struct ext4_xattr_ref *VAR_7)
{
 int VAR_8;
 ext4_fsblk_t VAR_9;
 VAR_9 = VAR_6->Inode.i_file_acl;
 FUNC_10(&VAR_7->root, 0, sizeof(struct rb_root));
 VAR_7->ea_size = 0;
 VAR_7->iter_from = ((void*)0);
 if (VAR_9) {
  VAR_7->block_bh = FUNC_8(&VAR_5->sb, VAR_9);
  if (!VAR_7->block_bh)
   return -VAR_0;

  VAR_7->block_loaded = VAR_3;
 } else
  VAR_7->block_loaded = VAR_2;

 VAR_7->inode_ref = VAR_6;
 VAR_7->fs = VAR_5;
 FUNC_3(&VAR_7->ordered_list);

 VAR_7->OnDiskInode = FUNC_0(VAR_5);
 if (!VAR_7->OnDiskInode) {
  if (VAR_9) {
   FUNC_9(VAR_7->block_bh);
   VAR_7->block_bh = ((void*)0);
  }
  return -VAR_1;
 }
 if (!FUNC_2(VAR_5, &VAR_6->Inode, VAR_7->OnDiskInode)) {
  if (VAR_9) {
   FUNC_9(VAR_7->block_bh);
   VAR_7->block_bh = ((void*)0);
  }

  FUNC_1(VAR_5, VAR_7->OnDiskInode);
  return -VAR_0;
 }
 VAR_7->IsOnDiskInodeDirty = VAR_2;

 if (FUNC_6(VAR_7) <
    sizeof(struct ext4_xattr_ibody_header) +
    sizeof(__u32))
  VAR_7->inode_size_rem = 0;
 else {
  VAR_7->inode_size_rem =
   FUNC_6(VAR_7) -
   sizeof(struct ext4_xattr_ibody_header);
 }

 VAR_7->block_size_rem =
  FUNC_4(VAR_7) -
  sizeof(struct ext4_xattr_header) -
  sizeof(__u32);

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8 != 0) {
  FUNC_7(VAR_7);
  if (VAR_9) {
   FUNC_9(VAR_7->block_bh);
   VAR_7->block_bh = ((void*)0);
  }

  FUNC_1(VAR_5, VAR_7->OnDiskInode);
  return VAR_8;
 }
 VAR_7->IrpContext = VAR_4;
 return 0;
}
