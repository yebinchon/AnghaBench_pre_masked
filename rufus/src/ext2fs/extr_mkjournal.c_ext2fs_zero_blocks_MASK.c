
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk_t ;
typedef scalar_t__ blk64_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int,scalar_t__*,int*) ;

errcode_t FUNC_1(ext2_filsys VAR_0, blk_t VAR_1, int VAR_2,
        blk_t *VAR_3, int *VAR_4)
{
 blk64_t VAR_5;
 errcode_t VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5, VAR_4);
 if (VAR_6)
  *VAR_3 = (blk_t) VAR_5;
 return VAR_6;
}
