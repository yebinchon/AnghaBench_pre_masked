
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ext2_ino_t ;
typedef TYPE_2__* ext2_filsys ;
struct TYPE_17__ {TYPE_1__* super; int inode_map; } ;
struct TYPE_16__ {scalar_t__ s_inodes_count; int s_inodes_per_group; int s_free_inodes_count; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,unsigned long) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,scalar_t__) ;

void FUNC_15(ext2_filsys VAR_1, ext2_ino_t VAR_2,
          int VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_9(VAR_1, VAR_2);

 if (VAR_2 > VAR_1->super->s_inodes_count) {

  FUNC_0("ext2fs_inode_alloc_stats2", 0,
   "Illegal inode number: %lu", (unsigned long) VAR_2);

  return;
 }
 if (VAR_3 > 0)
  FUNC_12(VAR_1->inode_map, VAR_2);
 else
  FUNC_14(VAR_1->inode_map, VAR_2);
 FUNC_3(VAR_1, VAR_5, FUNC_2(VAR_1, VAR_5) - VAR_3);
 if (VAR_4)
  FUNC_7(VAR_1, VAR_5, FUNC_6(VAR_1, VAR_5) + VAR_3);



 FUNC_1(VAR_1, VAR_5, VAR_0);
 if (FUNC_10(VAR_1)) {
  ext2_ino_t VAR_6 = VAR_1->super->s_inodes_per_group -
   FUNC_4(VAR_1, VAR_5) +
   VAR_5 * VAR_1->super->s_inodes_per_group + 1;

  if (VAR_2 >= VAR_6)
   FUNC_5(VAR_1, VAR_5, VAR_5 * VAR_1->super->s_inodes_per_group + VAR_1->super->s_inodes_per_group - VAR_2);
  FUNC_8(VAR_1, VAR_5);
 }

 VAR_1->super->s_free_inodes_count -= VAR_3;
 FUNC_13(VAR_1);
 FUNC_11(VAR_1);
}
