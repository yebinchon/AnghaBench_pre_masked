
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef scalar_t__ ext2fs_block_bitmap ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_6__ {scalar_t__ cluster_ratio_bits; } ;
struct TYPE_5__ {scalar_t__ start; scalar_t__ end; scalar_t__ real_end; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,char*,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

errcode_t FUNC_5(ext2_filsys VAR_0,
        ext2fs_block_bitmap *VAR_1)
{
 ext2fs_generic_bitmap_64 VAR_2, VAR_3;
 ext2fs_block_bitmap VAR_4 = *VAR_1, VAR_5;
 errcode_t VAR_6;
 blk64_t VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_2 = (ext2fs_generic_bitmap_64) VAR_4;
 if (VAR_0->cluster_ratio_bits == FUNC_2(VAR_4))
  return 0;

 VAR_6 = FUNC_0(VAR_0, "converted cluster bitmap",
           &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3 = (ext2fs_generic_bitmap_64) VAR_5;
 VAR_7 = VAR_2->start;
 VAR_8 = VAR_2->end;
 VAR_2->end = VAR_2->real_end;
 VAR_9 = VAR_3->end;
 VAR_3->end = VAR_3->real_end;
 VAR_10 = 0;
 VAR_11 = 1 << VAR_0->cluster_ratio_bits;
 while (VAR_7 < VAR_2->real_end) {
  if (FUNC_4(VAR_4, VAR_7)) {
   FUNC_3(VAR_5, VAR_7);
   VAR_7 += VAR_11 - VAR_10;
   VAR_10 = 0;
   continue;
  }
  VAR_7++; VAR_10++;
  if (VAR_10 >= VAR_11)
   VAR_10 = 0;
 }
 VAR_2->end = VAR_8;
 VAR_3->end = VAR_9;
 FUNC_1(VAR_4);
 *VAR_1 = (ext2fs_block_bitmap) VAR_3;
 return 0;
}
