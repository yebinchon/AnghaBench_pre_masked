
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_ext_attr_entry {scalar_t__ e_value_inum; } ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct ext2_ext_attr_entry*,void*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int*) ;

errcode_t FUNC_2(ext2_filsys VAR_1,
          struct ext2_ext_attr_entry *VAR_2,
          void *VAR_3, __u32 *VAR_4)
{
 *VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_2->e_value_inum) {
  __u32 VAR_5;
  errcode_t VAR_6;

  VAR_6 = FUNC_1(VAR_1, VAR_2->e_value_inum,
         &VAR_5);
  if (VAR_6)
   return VAR_6;

  *VAR_4 = (*VAR_4 << VAR_0) ^
   (*VAR_4 >> (8*sizeof(*VAR_4) - VAR_0)) ^
   VAR_5;
 }
 return 0;
}
