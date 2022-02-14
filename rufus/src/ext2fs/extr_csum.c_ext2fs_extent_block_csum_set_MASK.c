
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
typedef int __u32 ;
struct TYPE_4__ {int super; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ext3_extent_header*,int *) ;
 int FUNC_2 (int ) ;
 struct ext3_extent_tail* FUNC_3 (struct ext3_extent_header*) ;

errcode_t FUNC_4(ext2_filsys VAR_0, ext2_ino_t VAR_1,
           struct ext3_extent_header *VAR_2)
{
 errcode_t VAR_3;
 __u32 VAR_4;
 struct ext3_extent_tail *VAR_5 = FUNC_3(VAR_2);

 if (!FUNC_2(VAR_0->super))
  return 0;





 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (VAR_3)
  return VAR_3;
 VAR_5->et_checksum = FUNC_0(VAR_4);
 return VAR_3;
}
