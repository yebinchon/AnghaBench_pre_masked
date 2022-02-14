
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_item {int data_size; int name_index; scalar_t__ name_len; } ;
struct ext4_xattr_header {int dummy; } ;
struct ext4_xattr_entry {int e_value_size; scalar_t__ e_value_block; int e_value_offs; int e_name_index; scalar_t__ e_name_len; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ext4_xattr_item *VAR_0,
           struct ext4_xattr_header *VAR_1,
           struct ext4_xattr_entry *VAR_2,
           void *VAR_3)
{
 VAR_2->e_name_len = (__u8)VAR_0->name_len;
 VAR_2->e_name_index = VAR_0->name_index;
 VAR_2->e_value_offs =
     FUNC_0((char *)VAR_3 - (char *)VAR_1);
 VAR_2->e_value_block = 0;
 VAR_2->e_value_size = FUNC_1(VAR_0->data_size);
}
