
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ext2_super_block {scalar_t__ s_mmp_update_interval; int s_mmp_block; } ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_5__ {int * mmp_buf; int blocksize; struct ext2_super_block* super; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

errcode_t FUNC_3(ext2_filsys VAR_4)
{
 return VAR_1;

}
