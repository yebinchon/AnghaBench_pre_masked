
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_block_bitmap ;
typedef int blk_t ;
struct TYPE_2__ {int start; int end; int bitmap; int description; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int ) ;

void FUNC_2(ext2fs_block_bitmap VAR_1,
        blk_t VAR_2, int VAR_3)
{
 ext2fs_generic_bitmap_32 VAR_4 = (ext2fs_generic_bitmap_32) VAR_1;
 int VAR_5;

 if ((VAR_2 < VAR_4->start) || (VAR_2 > VAR_4->end) ||
     (VAR_2+VAR_3-1 > VAR_4->end)) {
  FUNC_1(VAR_0, VAR_2,
       VAR_4->description);
  return;
 }
 for (VAR_5=0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(VAR_2 + VAR_5 - VAR_4->start, VAR_4->bitmap);
}
