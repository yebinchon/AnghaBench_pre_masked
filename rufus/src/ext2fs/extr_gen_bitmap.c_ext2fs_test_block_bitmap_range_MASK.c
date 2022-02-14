
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
typedef int ext2fs_block_bitmap ;
typedef int blk_t ;
struct TYPE_3__ {int start; int real_end; int description; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int ) ;

int FUNC_3(ext2fs_block_bitmap VAR_2,
       blk_t VAR_3, int VAR_4)
{
 ext2fs_generic_bitmap_32 VAR_5 = (ext2fs_generic_bitmap_32) VAR_2;

 FUNC_0(VAR_5, VAR_1);
 if ((VAR_3 < VAR_5->start) || (VAR_3 > VAR_5->real_end) ||
     (VAR_3+VAR_4-1 > VAR_5->real_end)) {
  FUNC_2(VAR_0,
       VAR_3, VAR_5->description);
  return 0;
 }
 return FUNC_1((ext2fs_generic_bitmap)
            VAR_5, VAR_3, VAR_4);
}
