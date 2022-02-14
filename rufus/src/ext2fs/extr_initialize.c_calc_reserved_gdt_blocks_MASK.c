
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_super_block {unsigned long s_blocks_per_group; unsigned long s_first_data_block; } ;
typedef TYPE_1__* ext2_filsys ;
struct TYPE_3__ {void* desc_blocks; struct ext2_super_block* super; } ;


 unsigned int FUNC_0 (struct ext2_super_block*) ;
 unsigned int FUNC_1 (struct ext2_super_block*) ;
 int FUNC_2 (struct ext2_super_block*) ;
 void* FUNC_3 (unsigned long,unsigned int) ;
 int FUNC_4 (char*,unsigned long,unsigned long,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_5(ext2_filsys VAR_0)
{
 struct ext2_super_block *VAR_1 = VAR_0->super;
 unsigned long VAR_2 = VAR_1->s_blocks_per_group;
 unsigned int VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4 = 0xffffffff;
 unsigned long VAR_5;
 unsigned int VAR_6;




 if (FUNC_2(VAR_1) < VAR_4 / 1024)
  VAR_4 = FUNC_2(VAR_1) * 1024;




 VAR_5 = FUNC_3(VAR_4 - VAR_1->s_first_data_block, VAR_2);
 VAR_6 = FUNC_3(VAR_5, VAR_3) - VAR_0->desc_blocks;
 if (VAR_6 > FUNC_0(VAR_1))
  VAR_6 = FUNC_0(VAR_1);





 return VAR_6;
}
