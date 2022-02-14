
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_ext_attr_header {int h_hash; } ;
struct ext2_ext_attr_entry {int e_hash; } ;
typedef int hash ;
typedef int __u32 ;


 int VAR_0 ;
 struct ext2_ext_attr_entry* FUNC_0 (struct ext2_ext_attr_entry*) ;
 int FUNC_1 (struct ext2_ext_attr_entry*) ;

void FUNC_2(struct ext2_ext_attr_header *VAR_1,
      struct ext2_ext_attr_entry *VAR_2)
{
 struct ext2_ext_attr_entry *VAR_3;
 __u32 VAR_4 = 0;

 VAR_3 = (struct ext2_ext_attr_entry *)(VAR_1+1);
 while (VAR_3 < VAR_2 && !FUNC_1(VAR_3)) {
  if (!VAR_3->e_hash) {

   VAR_4 = 0;
   break;
  }
  VAR_4 = (VAR_4 << VAR_0) ^
         (VAR_4 >> (8*sizeof(VAR_4) - VAR_0)) ^
         VAR_3->e_hash;
  VAR_3 = FUNC_0(VAR_3);
 }
 VAR_1->h_hash = VAR_4;
}
