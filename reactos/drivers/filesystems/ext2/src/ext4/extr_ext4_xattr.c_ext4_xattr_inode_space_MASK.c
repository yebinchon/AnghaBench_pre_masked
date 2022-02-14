
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_xattr_ref {TYPE_2__* OnDiskInode; TYPE_1__* fs; } ;
typedef int __s32 ;
struct TYPE_4__ {int i_extra_isize; } ;
struct TYPE_3__ {int InodeSize; } ;


 int VAR_0 ;

__attribute__((used)) static __s32 FUNC_0(struct ext4_xattr_ref *VAR_1)
{
 int VAR_2 = VAR_1->fs->InodeSize;
 int VAR_3 = VAR_2 - VAR_0 -
       VAR_1->OnDiskInode->i_extra_isize;
 return VAR_3;
}
