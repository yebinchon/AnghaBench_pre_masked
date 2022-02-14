
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_dir_entry_tail {int det_reserved_name_len; } ;
struct ext2_dir_entry {int dummy; } ;
typedef int ext2_filsys ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct ext2_dir_entry*) ;
 int FUNC_1 (struct ext2_dir_entry_tail*,int ,int) ;

void FUNC_2(ext2_filsys VAR_1,
       struct ext2_dir_entry_tail *VAR_2)
{
 FUNC_1(VAR_2, 0, sizeof(struct ext2_dir_entry_tail));
 FUNC_0(VAR_1, sizeof(struct ext2_dir_entry_tail),
      (struct ext2_dir_entry *)VAR_2);
 VAR_2->det_reserved_name_len = VAR_0;
}
