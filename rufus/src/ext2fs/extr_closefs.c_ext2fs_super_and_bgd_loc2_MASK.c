
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef unsigned int dgrp_t ;
typedef int blk_t ;
typedef int blk64_t ;
struct TYPE_8__ {int s_first_meta_bg; int s_reserved_gdt_blocks; } ;
struct TYPE_7__ {int blocksize; int desc_blocks; TYPE_3__* super; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

errcode_t FUNC_4(ext2_filsys VAR_0,
        dgrp_t VAR_1,
        blk64_t *VAR_2,
        blk64_t *VAR_3,
        blk64_t *VAR_4,
        blk_t *VAR_5)
{
 blk64_t VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 unsigned int VAR_10, VAR_11;
 blk_t VAR_12 = 0;
 blk64_t VAR_13;
 int VAR_14;

 VAR_6 = FUNC_2(VAR_0, VAR_1);
 if (VAR_6 == 0 && VAR_0->blocksize == 1024)
  VAR_6 = 1;

 if (FUNC_3(VAR_0->super))
  VAR_13 = VAR_0->super->s_first_meta_bg;
 else
  VAR_13 =
   VAR_0->desc_blocks + VAR_0->super->s_reserved_gdt_blocks;

 VAR_14 = FUNC_1(VAR_0, VAR_1);

 if (VAR_14) {
  VAR_7 = VAR_6;
  VAR_12++;
 }
 VAR_11 = FUNC_0(VAR_0->super);
 VAR_10 = VAR_1 / VAR_11;

 if (!FUNC_3(VAR_0->super) ||
     (VAR_10 < VAR_0->super->s_first_meta_bg)) {
  if (VAR_14) {
   VAR_8 = VAR_6 + 1;
   VAR_12 += VAR_13;
  }
 } else {
  if (((VAR_1 % VAR_11) == 0) ||
      ((VAR_1 % VAR_11) == 1) ||
      ((VAR_1 % VAR_11) == (VAR_11-1))) {
   if (VAR_14)
    VAR_14 = 1;
   VAR_9 = VAR_6 + VAR_14;
   VAR_12++;
  }
 }

 if (VAR_2)
  *VAR_2 = VAR_7;
 if (VAR_3)
  *VAR_3 = VAR_8;
 if (VAR_4)
  *VAR_4 = VAR_9;
 if (VAR_5)
  *VAR_5 = VAR_12;

 return 0;
}
