
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ext4_xattr_ref {void* block_loaded; void* IsOnDiskInodeDirty; TYPE_2__* inode_ref; int IrpContext; int block_bh; TYPE_1__* fs; } ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_8__ {scalar_t__ i_file_acl; } ;
struct TYPE_7__ {TYPE_3__ Inode; } ;
struct TYPE_6__ {int sb; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,scalar_t__,int ,int *,int*) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ext4_xattr_ref *VAR_2)
{
 int VAR_3 = 0;

 ext4_fsblk_t VAR_4 = 0;
 VAR_4 = VAR_2->inode_ref->Inode.i_file_acl;
 if (!VAR_4) {
  ext4_fsblk_t VAR_5 =
   FUNC_1(&VAR_2->inode_ref->Inode);

  VAR_4 = FUNC_2(VAR_2->IrpContext,
        &VAR_2->inode_ref->Inode,
           VAR_5, 0, ((void*)0),
           &VAR_3);
  if (VAR_3 != 0)
   goto Finish;

  VAR_2->block_bh = FUNC_3(&VAR_2->fs->sb, VAR_4);
  if (!VAR_2->block_bh) {
   FUNC_0(VAR_2->IrpContext, &VAR_2->inode_ref->Inode,
            VAR_4, 1, 0);
   VAR_3 = -VAR_0;
   goto Finish;
  }

  VAR_2->inode_ref->Inode.i_file_acl = VAR_4;
  VAR_2->IsOnDiskInodeDirty = VAR_1;
  VAR_2->block_loaded = VAR_1;
 }

Finish:
 return VAR_3;
}
