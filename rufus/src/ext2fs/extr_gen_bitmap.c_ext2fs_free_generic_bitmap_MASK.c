
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ext2fs_inode_bitmap ;
typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
struct TYPE_3__ {struct TYPE_3__* bitmap; struct TYPE_3__* description; scalar_t__ magic; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**) ;

void FUNC_2(ext2fs_inode_bitmap VAR_0)
{
 ext2fs_generic_bitmap_32 VAR_1 = (ext2fs_generic_bitmap_32) VAR_0;

 if (FUNC_0(VAR_0))
  return;

 VAR_1->magic = 0;
 if (VAR_1->description) {
  FUNC_1(&VAR_1->description);
  VAR_1->description = 0;
 }
 if (VAR_1->bitmap) {
  FUNC_1(&VAR_1->bitmap);
  VAR_1->bitmap = 0;
 }
 FUNC_1(&VAR_1);
}
