
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_ext_attr_entry {int e_name_len; scalar_t__ e_value_inum; int e_value_size; } ;
typedef int hash ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__u32 FUNC_1(struct ext2_ext_attr_entry *VAR_4, void *VAR_5)
{
 __u32 VAR_6 = 0;
 char *VAR_7 = ((char *) VAR_4) + sizeof(struct ext2_ext_attr_entry);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->e_name_len; VAR_8++) {
  VAR_6 = (VAR_6 << VAR_2) ^
         (VAR_6 >> (8*sizeof(VAR_6) - VAR_2)) ^
         *VAR_7++;
 }


 if (VAR_4->e_value_inum == 0 && VAR_4->e_value_size != 0) {
  __u32 *VAR_9 = (__u32 *)VAR_5;
  for (VAR_8 = (VAR_4->e_value_size + VAR_1) >>
    VAR_0; VAR_8; VAR_8--) {
   VAR_6 = (VAR_6 << VAR_3) ^
          (VAR_6 >> (8*sizeof(VAR_6) - VAR_3)) ^
          FUNC_0(*VAR_9++);
  }
 }

 return VAR_6;
}
