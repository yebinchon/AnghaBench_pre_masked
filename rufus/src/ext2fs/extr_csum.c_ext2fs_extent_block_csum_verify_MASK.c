
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext3_extent_tail {int et_checksum; } ;
struct ext3_extent_header {int dummy; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int super; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,struct ext3_extent_header*,scalar_t__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ext3_extent_tail* FUNC_3 (struct ext3_extent_header*) ;

int FUNC_4(ext2_filsys VAR_0, ext2_ino_t VAR_1,
        struct ext3_extent_header *VAR_2)
{
 errcode_t VAR_3;
 __u32 VAR_4, VAR_5;
 struct ext3_extent_tail *VAR_6 = FUNC_3(VAR_2);





 if (!FUNC_1(VAR_0->super))
  return 1;

 VAR_4 = FUNC_2(VAR_6->et_checksum);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (VAR_3)
  return 0;

 return VAR_4 == VAR_5;
}
