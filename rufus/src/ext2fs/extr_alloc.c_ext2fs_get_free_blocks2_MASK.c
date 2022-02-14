
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ext2fs_block_bitmap ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef int blk64_t ;
struct TYPE_6__ {int s_first_data_block; } ;
struct TYPE_5__ {TYPE_3__* super; scalar_t__ block_map; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (scalar_t__) ;

errcode_t FUNC_4(ext2_filsys VAR_3, blk64_t VAR_4, blk64_t VAR_5,
     int VAR_6, ext2fs_block_bitmap VAR_7, blk64_t *VAR_8)
{
 blk64_t VAR_9 = VAR_4;
 int VAR_10;

 FUNC_0(VAR_3, VAR_1);

 if (!VAR_7)
  VAR_7 = VAR_3->block_map;
 if (!VAR_7)
  return VAR_2;
 if (!VAR_9)
  VAR_9 = VAR_3->super->s_first_data_block;
 if (!VAR_5)
  VAR_5 = VAR_4;
 if (!VAR_6)
  VAR_6 = 1;
 VAR_10 = 1 << FUNC_3(VAR_7);
 VAR_9 &= ~(VAR_10 - 1);
 VAR_5 &= ~(VAR_10 -1);
 do {
  if (VAR_9 + VAR_6 - 1 >= FUNC_1(VAR_3->super)) {
   if (VAR_5 > VAR_4)
    return VAR_0;
   VAR_9 = VAR_3->super->s_first_data_block;
  }
  if (FUNC_2(VAR_7, VAR_9, VAR_6)) {
   *VAR_8 = VAR_9;
   return 0;
  }
  VAR_9 += VAR_10;
 } while (VAR_9 != VAR_5);
 return VAR_0;
}
