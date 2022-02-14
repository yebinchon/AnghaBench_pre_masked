
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2_filsys ;
typedef int errcode_t ;
typedef scalar_t__ blk_t ;
typedef scalar_t__ blk64_t ;


 int FUNC_0 (int ,scalar_t__,char*,scalar_t__*,int *) ;

errcode_t FUNC_1(ext2_filsys VAR_0, blk_t VAR_1,
        char *VAR_2, blk_t *VAR_3)
{
 errcode_t VAR_4;
 blk64_t VAR_5, VAR_6 = VAR_1;
 VAR_4 = FUNC_0(VAR_0, VAR_6, VAR_2, &VAR_5, ((void*)0));
 if (!VAR_4)
  *VAR_3 = (blk_t)VAR_5;
        return VAR_4;
}
