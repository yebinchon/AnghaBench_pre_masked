
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ blk_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_13__ {int (* block_alloc_stats_range ) (TYPE_1__*,scalar_t__,scalar_t__,int) ;int super; int block_map; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,char*,unsigned long long,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,scalar_t__,scalar_t__,int) ;

void FUNC_15(ext2_filsys VAR_1, blk64_t VAR_2,
        blk_t VAR_3, int VAR_4)
{

 if (VAR_2 + VAR_3 > FUNC_5(VAR_1->super)) {
  FUNC_1("ext2fs_block_alloc_stats_range", 0,
   "Illegal block range: %llu (%u) ",
   (unsigned long long) VAR_2, VAR_3);
  return;
 }

 if (VAR_4 == 0)
  return;
 if (VAR_4 > 0) {
  FUNC_11(VAR_1->block_map, VAR_2, VAR_3);
  VAR_4 = 1;
 } else {
  FUNC_13(VAR_1->block_map, VAR_2, VAR_3);
  VAR_4 = -1;
 }
 while (VAR_3) {
  int VAR_5 = FUNC_9(VAR_1, VAR_2);
  blk64_t VAR_6 = FUNC_8(VAR_1, VAR_5);
  blk64_t VAR_7 = VAR_3;

  if (VAR_2 + VAR_3 > VAR_6)
   VAR_7 = VAR_6 - VAR_2 + 1;

  FUNC_4(VAR_1, VAR_5,
   FUNC_3(VAR_1, VAR_5) -
   VAR_4*VAR_7/FUNC_0(VAR_1));
  FUNC_2(VAR_1, VAR_5, VAR_0);
  FUNC_7(VAR_1, VAR_5);
  FUNC_6(VAR_1->super, -VAR_4 * (blk64_t) VAR_7);
  VAR_2 += VAR_7;
  VAR_3 -= VAR_7;
 }
 FUNC_12(VAR_1);
 FUNC_10(VAR_1);
 if (VAR_1->block_alloc_stats_range)
  (VAR_1->block_alloc_stats_range)(VAR_1, VAR_2, VAR_3, VAR_4);
}
