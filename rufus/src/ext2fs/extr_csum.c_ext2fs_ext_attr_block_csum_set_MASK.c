
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
typedef int __u32 ;
struct TYPE_4__ {int super; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,struct ext2_ext_attr_header*,int *) ;
 int FUNC_2 (int ) ;

errcode_t FUNC_3(ext2_filsys VAR_0, ext2_ino_t VAR_1,
      blk64_t VAR_2,
      struct ext2_ext_attr_header *VAR_3)
{
 errcode_t VAR_4;
 __u32 VAR_5;

 if (!FUNC_2(VAR_0->super))
  return 0;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
 if (VAR_4)
  return VAR_4;
 VAR_3->h_checksum = FUNC_0(VAR_5);
 return 0;
}
