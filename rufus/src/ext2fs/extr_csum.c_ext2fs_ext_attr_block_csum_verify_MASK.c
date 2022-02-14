
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_ext_attr_header {int h_checksum; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int super; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,struct ext2_ext_attr_header*,scalar_t__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(ext2_filsys VAR_0, ext2_ino_t VAR_1,
          blk64_t VAR_2,
          struct ext2_ext_attr_header *VAR_3)
{
 __u32 VAR_4;
 errcode_t VAR_5;

 if (!FUNC_1(VAR_0->super))
  return 1;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_5)
  return 0;

 return FUNC_2(VAR_3->h_checksum) == VAR_4;
}
