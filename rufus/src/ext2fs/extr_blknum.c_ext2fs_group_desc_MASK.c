
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct opaque_ext2_group_desc {int dummy; } ;
struct ext2_group_desc {int dummy; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
struct TYPE_3__ {int super; } ;


 int FUNC_0 (int ) ;

struct ext2_group_desc *FUNC_1(ext2_filsys VAR_0,
       struct opaque_ext2_group_desc *VAR_1,
       dgrp_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0->super) & ~7;

 return (struct ext2_group_desc *)((char *)VAR_1 + VAR_2 * VAR_3);
}
