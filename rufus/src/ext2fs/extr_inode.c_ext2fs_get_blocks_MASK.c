
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_inode {int * i_block; } ;
typedef scalar_t__ ext2_ino_t ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
struct TYPE_8__ {int (* get_blocks ) (TYPE_2__*,scalar_t__,int *) ;TYPE_1__* super; } ;
struct TYPE_7__ {scalar_t__ s_inodes_count; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,struct ext2_inode*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int *) ;

errcode_t FUNC_3(ext2_filsys VAR_3, ext2_ino_t VAR_4, blk_t *VAR_5)
{
 struct ext2_inode VAR_6;
 int VAR_7;
 errcode_t VAR_8;

 FUNC_0(VAR_3, VAR_1);

 if (VAR_4 > VAR_3->super->s_inodes_count)
  return VAR_0;

 if (VAR_3->get_blocks) {
  if (!(*VAR_3->get_blocks)(VAR_3, VAR_4, VAR_5))
   return 0;
 }
 VAR_8 = FUNC_1(VAR_3, VAR_4, &VAR_6);
 if (VAR_8)
  return VAR_8;
 for (VAR_7=0; VAR_7 < VAR_2; VAR_7++)
  VAR_5[VAR_7] = VAR_6.i_block[VAR_7];
 return 0;
}
