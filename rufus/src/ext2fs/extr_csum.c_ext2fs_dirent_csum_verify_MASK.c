
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_dir_entry_tail {int det_checksum; } ;
struct ext2_dir_entry {int dummy; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (int ,struct ext2_dir_entry*,struct ext2_dir_entry_tail**,int) ;
 scalar_t__ FUNC_1 (int ,int ,struct ext2_dir_entry*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(ext2_filsys VAR_0, ext2_ino_t VAR_1,
         struct ext2_dir_entry *VAR_2)
{
 errcode_t VAR_3;
 __u32 VAR_4;
 struct ext2_dir_entry_tail *VAR_5;

 VAR_3 = FUNC_0(VAR_0, VAR_2, &VAR_5, 1);
 if (VAR_3)
  return 1;





 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4,
        (char *)VAR_5 - (char *)VAR_2);
 if (VAR_3)
  return 0;
 return FUNC_2(VAR_5->det_checksum) == VAR_4;
}
