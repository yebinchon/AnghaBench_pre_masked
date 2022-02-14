
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2fs_block_bitmap ;
typedef int ext2_filsys ;
typedef int errcode_t ;
typedef scalar_t__ blk_t ;
typedef scalar_t__ blk64_t ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,int,int ,scalar_t__*) ;

errcode_t FUNC_1(ext2_filsys VAR_0, blk_t VAR_1, blk_t VAR_2,
     int VAR_3, ext2fs_block_bitmap VAR_4, blk_t *VAR_5)
{
 errcode_t VAR_6;
 blk64_t VAR_7;
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7);
 if(!VAR_6)
  *VAR_5 = (blk_t) VAR_7;
 return VAR_6;
}
