
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct ext3_dir_entry_2 {int file_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct super_block *VAR_1,
                      struct ext3_dir_entry_2 *VAR_2,
                      umode_t VAR_3)
{
    if (FUNC_0(VAR_1, VAR_0))
        VAR_2->file_type = FUNC_1(VAR_3);
}
