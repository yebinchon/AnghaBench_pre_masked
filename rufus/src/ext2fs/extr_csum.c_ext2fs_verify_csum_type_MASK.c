
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_super_block {scalar_t__ s_checksum_type; } ;
typedef TYPE_1__* ext2_filsys ;
struct TYPE_3__ {int super; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(ext2_filsys VAR_1, struct ext2_super_block *VAR_2)
{
 if (!FUNC_0(VAR_1->super))
  return 1;

 return VAR_2->s_checksum_type == VAR_0;
}
