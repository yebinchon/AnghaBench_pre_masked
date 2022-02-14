
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ext4_xattr_ref {TYPE_2__* fs; TYPE_1__* inode_ref; int * OnDiskInode; void* block_loaded; int * block_bh; void* IsOnDiskInodeDirty; int IrpContext; } ;
typedef int sector_t ;
struct TYPE_9__ {int i_file_acl; } ;
struct TYPE_8__ {scalar_t__ InodeSize; } ;
struct TYPE_7__ {TYPE_3__ Inode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,TYPE_3__*,int *) ;
 void* VAR_2 ;
 int FUNC_4 (struct ext4_xattr_ref*) ;
 int FUNC_5 (struct ext4_xattr_ref*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ext4_xattr_ref *VAR_3)
{
 int VAR_4;
 sector_t VAR_5 = VAR_3->inode_ref->Inode.i_file_acl;
 VAR_4 = FUNC_5(VAR_3);
 if (VAR_3->IsOnDiskInodeDirty) {
  FUNC_0(VAR_3->fs->InodeSize > VAR_1);


  if (VAR_4)
   VAR_3->inode_ref->Inode.i_file_acl = VAR_5;

  if (!VAR_4) {
   VAR_4 = FUNC_2(VAR_3->IrpContext, VAR_3->fs, &VAR_3->inode_ref->Inode)
    ? 0 : -VAR_0;
   if (!VAR_4) {
    VAR_4 = FUNC_3(VAR_3->IrpContext,
      VAR_3->fs,
      &VAR_3->inode_ref->Inode,
      VAR_3->OnDiskInode)
     ? 0 : -VAR_0;
   }
  }
  VAR_3->IsOnDiskInodeDirty = VAR_2;
 }
 if (VAR_3->block_loaded) {
  if (!VAR_4)
   FUNC_7(VAR_3->block_bh);
  else
   FUNC_6(VAR_3->block_bh);

  VAR_3->block_bh = ((void*)0);
  VAR_3->block_loaded = VAR_2;
 }
 FUNC_4(VAR_3);
 FUNC_1(VAR_3->fs, VAR_3->OnDiskInode);
 VAR_3->OnDiskInode = ((void*)0);
 VAR_3->inode_ref = ((void*)0);
 VAR_3->fs = ((void*)0);
 return VAR_4;
}
