
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_inode_large {int i_extra_isize; } ;
struct ext2_inode {int dummy; } ;
struct ext2_ext_attr_entry {unsigned int e_value_offs; scalar_t__ e_value_size; int e_value_inum; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int super; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct ext2_ext_attr_entry* FUNC_1 (struct ext2_ext_attr_entry*) ;
 unsigned int VAR_2 ;
 size_t FUNC_2 (unsigned int) ;
 int FUNC_3 (struct ext2_ext_attr_entry*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ext2_inode_large**) ;
 scalar_t__ FUNC_6 (size_t,struct ext2_inode_large**) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,struct ext2_inode*,int) ;
 int FUNC_8 (scalar_t__*,char*,int) ;
 int FUNC_9 (char*) ;

errcode_t FUNC_10(ext2_filsys VAR_4, ext2_ino_t VAR_5,
          size_t *VAR_6)
{
 struct ext2_ext_attr_entry *VAR_7;
 struct ext2_inode_large *VAR_8;
 __u32 VAR_9;
 unsigned int VAR_10;
 char *VAR_11;
 size_t VAR_12;
 errcode_t VAR_13;

 VAR_12 = FUNC_4(VAR_4->super);
 if (VAR_12 < sizeof(*VAR_8))
  VAR_12 = sizeof(*VAR_8);
 VAR_13 = FUNC_6(VAR_12, &VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_7(VAR_4, VAR_5, (struct ext2_inode *)VAR_8,
         FUNC_4(VAR_4->super));
 if (VAR_13)
  goto out;


 if (FUNC_4(VAR_4->super) <= VAR_3 +
        VAR_8->i_extra_isize +
        sizeof(__u32)) {
  VAR_13 = VAR_0;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_4->super) - sizeof(*VAR_8) - sizeof(__u32);
 FUNC_8(&VAR_9, ((char *) VAR_8) + VAR_3 +
        VAR_8->i_extra_isize, sizeof(__u32));
 if (VAR_9 == VAR_1) {

  VAR_11= ((char *) VAR_8) + VAR_3 +
   VAR_8->i_extra_isize + sizeof(__u32);
  VAR_7 = (struct ext2_ext_attr_entry *) VAR_11;
  while (!FUNC_3(VAR_7)) {
   if (!VAR_7->e_value_inum && VAR_7->e_value_size) {
    unsigned int VAR_14 = VAR_7->e_value_offs;
    if (VAR_14 < VAR_10)
     VAR_10 = VAR_14;
   }
   VAR_7 = FUNC_1(VAR_7);
  }
  *VAR_6 = VAR_10 - ((char *)VAR_7 - (char *)VAR_11) - sizeof(__u32);
 } else {

  *VAR_6 = FUNC_2(VAR_10 -
        FUNC_0(FUNC_9("data")) -
        VAR_2 - sizeof(__u32));
 }

out:
 FUNC_5(&VAR_8);
 return VAR_13;
}
