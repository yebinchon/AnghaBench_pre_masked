
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk_t ;
struct TYPE_2__ {scalar_t__ magic; scalar_t__ start; scalar_t__ end; int bitmap; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,size_t) ;

errcode_t FUNC_2(errcode_t VAR_0, errcode_t VAR_1,
     ext2fs_generic_bitmap VAR_2,
     ext2fs_generic_bitmap VAR_3)
{
 ext2fs_generic_bitmap_32 VAR_4 = (ext2fs_generic_bitmap_32) VAR_2;
 ext2fs_generic_bitmap_32 VAR_5 = (ext2fs_generic_bitmap_32) VAR_3;
 blk_t VAR_6;

 if (!VAR_4 || VAR_4->magic != VAR_0)
  return VAR_0;
 if (!VAR_5 || VAR_5->magic != VAR_0)
  return VAR_0;

 if ((VAR_4->start != VAR_5->start) ||
     (VAR_4->end != VAR_5->end) ||
     (FUNC_1(VAR_4->bitmap, VAR_5->bitmap,
      (size_t) (VAR_4->end - VAR_4->start)/8)))
  return VAR_1;

 for (VAR_6 = VAR_4->end - ((VAR_4->end - VAR_4->start) % 8); VAR_6 <= VAR_4->end; VAR_6++)
  if (FUNC_0(VAR_2, VAR_6) !=
      FUNC_0(VAR_3, VAR_6))
   return VAR_1;

 return 0;
}
