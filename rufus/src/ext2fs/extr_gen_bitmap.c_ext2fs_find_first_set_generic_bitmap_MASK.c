
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
typedef int errcode_t ;
typedef scalar_t__ blk_t ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

errcode_t FUNC_2(ext2fs_generic_bitmap VAR_3,
            __u32 VAR_4, __u32 VAR_5,
            __u32 *VAR_6)
{
 ext2fs_generic_bitmap_32 VAR_7 = (ext2fs_generic_bitmap_32) VAR_3;
 blk_t VAR_8;

 if (VAR_4 < VAR_7->start || VAR_5 > VAR_7->end || VAR_4 > VAR_5) {
  FUNC_1(VAR_3, VAR_2, VAR_4);
  return VAR_0;
 }

 while (VAR_4 <= VAR_5) {
  VAR_8 = FUNC_0(VAR_4 - VAR_7->start, VAR_7->bitmap);
  if (VAR_8) {
   *VAR_6 = VAR_4;
   return 0;
  }
  VAR_4++;
 }

 return VAR_1;
}
