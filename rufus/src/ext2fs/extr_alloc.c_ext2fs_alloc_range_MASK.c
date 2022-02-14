
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
typedef int blk64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int *) ;

errcode_t FUNC_4(ext2_filsys VAR_8, int VAR_9, blk64_t VAR_10,
        blk_t VAR_11, blk64_t *VAR_12)
{
 int VAR_13 = VAR_7;
 errcode_t VAR_14;
 blk64_t VAR_15;

 FUNC_0(VAR_8, VAR_5);
 if (VAR_11 == 0 || (VAR_9 & ~VAR_0))
  return VAR_4;

 if (VAR_9 & VAR_1)
  VAR_13 |= VAR_6;

 VAR_14 = FUNC_2(VAR_8, VAR_13, VAR_10, VAR_11, ((void*)0), VAR_12, &VAR_15);
 if (VAR_14)
  return VAR_14;

 if (VAR_15 < VAR_11)
  return VAR_3;

 if (VAR_9 & VAR_2) {
  VAR_14 = FUNC_3(VAR_8, *VAR_12, VAR_11, ((void*)0), ((void*)0));
  if (VAR_14)
   return VAR_14;
 }

 FUNC_1(VAR_8, *VAR_12, VAR_11, +1);
 return VAR_14;
}
