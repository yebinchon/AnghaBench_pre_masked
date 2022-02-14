
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_xattr_ref {int dirty; scalar_t__ block_loaded; TYPE_1__* fs; } ;
struct TYPE_2__ {int InodeSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ext4_xattr_ref*) ;
 int FUNC_1 (struct ext4_xattr_ref*) ;

__attribute__((used)) static int FUNC_2(struct ext4_xattr_ref *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_2->fs->InodeSize;
 if (VAR_4 > VAR_0) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 != 0)
   return VAR_3;
 }

 if (VAR_2->block_loaded)
  VAR_3 = FUNC_0(VAR_2);

 VAR_2->dirty = VAR_1;
 return VAR_3;
}
