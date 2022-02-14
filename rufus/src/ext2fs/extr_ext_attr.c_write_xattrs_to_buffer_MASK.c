
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr {char* name; int value_len; char const* value; scalar_t__ ea_ino; } ;
struct ext2_ext_attr_entry {int e_name_len; int e_name_index; int e_value_size; int e_value_offs; scalar_t__ e_hash; scalar_t__ e_value_inum; } ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u32 ;


 struct ext2_ext_attr_entry* FUNC_0 (struct ext2_ext_attr_entry*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct ext2_ext_attr_entry*,char*,scalar_t__*) ;
 int FUNC_2 (char*,char const**,int*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (void*,int ,unsigned int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static errcode_t
FUNC_6(ext2_filsys VAR_1, struct ext2_xattr *VAR_2, int VAR_3,
         void *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6, int VAR_7)
{
 struct ext2_xattr *VAR_8;
 struct ext2_ext_attr_entry *VAR_9 = VAR_4;
 char *VAR_10 = (char *) VAR_4 + VAR_5;
 const char *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;
 errcode_t VAR_15;

 FUNC_4(VAR_4, 0, VAR_5);
 for (VAR_8 = VAR_2; VAR_8 < VAR_2 + VAR_3; VAR_8++) {

  VAR_11 = VAR_8->name;
  VAR_14 = FUNC_2(VAR_8->name, &VAR_11, &VAR_13);

  VAR_12 = ((VAR_8->value_len + VAR_0 - 1) /
         VAR_0) * VAR_0;


  VAR_9->e_name_len = FUNC_5(VAR_11);
  VAR_9->e_name_index = (VAR_14 ? VAR_13 : 0);

  VAR_9->e_value_size = VAR_8->value_len;
  VAR_9->e_value_inum = VAR_8->ea_ino;


  FUNC_3((char *)VAR_9 + sizeof(*VAR_9), VAR_11, VAR_9->e_name_len);
  if (VAR_8->ea_ino) {
   VAR_9->e_value_offs = 0;
  } else {
   VAR_10 -= VAR_12;
   VAR_9->e_value_offs = VAR_10 - (char *) VAR_4 +
      VAR_6;
   FUNC_3(VAR_10, VAR_8->value, VAR_9->e_value_size);
  }

  if (VAR_7 || VAR_8->ea_ino) {
   VAR_15 = FUNC_1(VAR_1, VAR_9,
         VAR_8->ea_ino ? 0 : VAR_10,
         &VAR_9->e_hash);
   if (VAR_15)
    return VAR_15;
  } else
   VAR_9->e_hash = 0;

  VAR_9 = FUNC_0(VAR_9);
  *(__u32 *)VAR_9 = 0;
 }
 return 0;
}
