
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ blk64_t ;
struct TYPE_12__ {int (* block_alloc_stats ) (TYPE_1__*,scalar_t__,int) ;int super; int block_map; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,char*,unsigned long) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,int) ;

void FUNC_14(ext2_filsys VAR_1, blk64_t VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_8(VAR_1, VAR_2);

 if (VAR_2 >= FUNC_5(VAR_1->super)) {

  FUNC_1("ext2fs_block_alloc_stats", 0,
   "Illegal block number: %lu", (unsigned long) VAR_2);

  return;
 }
 if (VAR_3 > 0)
  FUNC_10(VAR_1->block_map, VAR_2);
 else
  FUNC_12(VAR_1->block_map, VAR_2);
 FUNC_4(VAR_1, VAR_4, FUNC_3(VAR_1, VAR_4) - VAR_3);
 FUNC_2(VAR_1, VAR_4, VAR_0);
 FUNC_7(VAR_1, VAR_4);

 FUNC_6(VAR_1->super,
        -VAR_3 * (blk64_t) FUNC_0(VAR_1));
 FUNC_11(VAR_1);
 FUNC_9(VAR_1);
 if (VAR_1->block_alloc_stats)
  (VAR_1->block_alloc_stats)(VAR_1, (blk64_t) VAR_2, VAR_3);
}
