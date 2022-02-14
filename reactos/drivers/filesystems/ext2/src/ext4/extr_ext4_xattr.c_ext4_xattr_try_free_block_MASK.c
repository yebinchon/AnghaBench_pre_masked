
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_xattr_ref {int block_loaded; int IsOnDiskInodeDirty; TYPE_1__* inode_ref; int IrpContext; int * block_bh; } ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_4__ {scalar_t__ i_file_acl; } ;
struct TYPE_3__ {TYPE_2__ Inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,scalar_t__,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ext4_xattr_ref *VAR_2)
{
 ext4_fsblk_t VAR_3;
 VAR_3 = VAR_2->inode_ref->Inode.i_file_acl;
 VAR_2->inode_ref->Inode.i_file_acl = 0;
 FUNC_1(VAR_2->block_bh);
 VAR_2->block_bh = ((void*)0);
 FUNC_0(VAR_2->IrpContext, &VAR_2->inode_ref->Inode,
  VAR_3, 1, 0);
 VAR_2->IsOnDiskInodeDirty = VAR_1;
 VAR_2->block_loaded = VAR_0;
}
