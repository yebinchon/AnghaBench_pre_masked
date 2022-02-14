
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_xattr_handle {scalar_t__ count; scalar_t__ capacity; scalar_t__ ino; TYPE_1__* fs; struct ext2_xattr* attrs; } ;
struct ext2_xattr {scalar_t__ ea_ino; unsigned int value_len; scalar_t__ value; scalar_t__ name; } ;
struct ext2_inode_large {scalar_t__ i_generation; } ;
struct ext2_inode {int i_flags; scalar_t__ i_links_count; scalar_t__ i_mtime; scalar_t__ i_generation; } ;
struct ext2_ext_attr_entry {unsigned int e_name_len; scalar_t__ e_value_inum; unsigned int e_value_size; unsigned int e_value_offs; scalar_t__ e_hash; int e_name_index; } ;
typedef int ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int super; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ext2_ext_attr_entry* FUNC_0 (struct ext2_ext_attr_entry*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct ext2_ext_attr_entry*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct ext2_ext_attr_entry*,void*,scalar_t__*) ;
 int FUNC_4 (int ) ;
 struct ext2_inode* FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_9 (unsigned int,scalar_t__*) ;
 scalar_t__ FUNC_10 (unsigned int,scalar_t__*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*,scalar_t__,struct ext2_inode*) ;
 scalar_t__ FUNC_13 (struct ext2_xattr_handle*,int) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,char const*,unsigned int) ;
 unsigned int FUNC_16 (char const*) ;

__attribute__((used)) static errcode_t FUNC_17(struct ext2_xattr_handle *VAR_8,
      struct ext2_inode_large *VAR_9,
      struct ext2_ext_attr_entry *VAR_10,
      unsigned int VAR_11,
      char *VAR_12)
{
 struct ext2_xattr *VAR_13;
 struct ext2_ext_attr_entry *VAR_14, *VAR_15;
 const char *VAR_16;
 unsigned int VAR_17, VAR_18;
 errcode_t VAR_19;
 unsigned int VAR_20 = VAR_11 +
   ((char *)VAR_10 - VAR_12);


 VAR_15 = VAR_10;
 VAR_17 = VAR_11;
 while (VAR_17 >= sizeof(struct ext2_ext_attr_entry) &&
        !FUNC_2(VAR_15)) {


  VAR_17 -= sizeof(struct ext2_ext_attr_entry);


  if (FUNC_1(VAR_15->e_name_len) > VAR_17)
   return VAR_2;


  VAR_17 -= FUNC_1(VAR_15->e_name_len);
  VAR_15 = FUNC_0(VAR_15);
 }

 VAR_14 = VAR_10;
 VAR_17 = VAR_11;
 while (VAR_17 >= sizeof(struct ext2_ext_attr_entry) &&
        !FUNC_2(VAR_14)) {


  if (VAR_8->count == VAR_8->capacity) {
   VAR_19 = FUNC_13(VAR_8, 4);
   if (VAR_19)
    return VAR_19;
  }

  VAR_13 = VAR_8->attrs + VAR_8->count;


  VAR_17 -= sizeof(struct ext2_ext_attr_entry);


  VAR_17 -= FUNC_1(VAR_14->e_name_len);


  VAR_16 = FUNC_14(VAR_14->e_name_index);
  VAR_18 = (VAR_16 ? FUNC_16(VAR_16) : 0);
  VAR_19 = FUNC_10(VAR_14->e_name_len + VAR_18 + 1,
      &VAR_13->name);
  if (VAR_19)
   return VAR_19;
  if (VAR_16)
   FUNC_15(VAR_13->name, VAR_16, VAR_18);
  if (VAR_14->e_name_len)
   FUNC_15(VAR_13->name + VAR_18,
          (char *)VAR_14 + sizeof(*VAR_14),
          VAR_14->e_name_len);


  if (!FUNC_11(VAR_8->fs->super) &&
      VAR_14->e_value_inum != 0)
   return VAR_0;

  if (VAR_14->e_value_inum == 0) {
   if (VAR_14->e_value_size > VAR_17)
    return VAR_4;

   if (VAR_14->e_value_offs + VAR_14->e_value_size > VAR_20)
    return VAR_3;

   if (VAR_14->e_value_size > 0 &&
       VAR_12 + VAR_14->e_value_offs <
       (char *)VAR_15 + sizeof(__u32))
    return VAR_3;

   VAR_17 -= VAR_14->e_value_size;

   VAR_19 = FUNC_9(VAR_14->e_value_size, &VAR_13->value);
   if (VAR_19)
    return VAR_19;
   FUNC_15(VAR_13->value, VAR_12 + VAR_14->e_value_offs,
          VAR_14->e_value_size);
  } else {
   struct ext2_inode *VAR_21;
   ext2_file_t VAR_22;

   if (VAR_14->e_value_offs != 0)
    return VAR_3;

   if (VAR_14->e_value_size > (64 * 1024))
    return VAR_4;

   VAR_19 = FUNC_9(VAR_14->e_value_size, &VAR_13->value);
   if (VAR_19)
    return VAR_19;

   VAR_19 = FUNC_7(VAR_8->fs, VAR_14->e_value_inum,
            0, &VAR_22);
   if (VAR_19)
    return VAR_19;

   VAR_21 = FUNC_5(VAR_22);
   if ((VAR_21->i_flags & VAR_7) ||
       !(VAR_21->i_flags & VAR_6) ||
       VAR_21->i_links_count == 0)
    VAR_19 = VAR_5;
   else if (FUNC_6(VAR_22) !=
       VAR_14->e_value_size)
    VAR_19 = VAR_4;
   else
    VAR_19 = FUNC_8(VAR_22, VAR_13->value,
             VAR_14->e_value_size, 0);
   FUNC_4(VAR_22);
   if (VAR_19)
    return VAR_19;
  }

  VAR_13->ea_ino = VAR_14->e_value_inum;
  VAR_13->value_len = VAR_14->e_value_size;


  if (VAR_14->e_hash != 0) {
   __u32 VAR_23;
   void *VAR_24 = (VAR_14->e_value_inum != 0) ?
     0 : VAR_12 + VAR_14->e_value_offs;

   VAR_19 = FUNC_3(VAR_8->fs, VAR_14,
         VAR_24, &VAR_23);
   if (VAR_19)
    return VAR_19;
   if (VAR_14->e_hash != VAR_23) {
    struct ext2_inode VAR_25;




    VAR_19 = FUNC_12(VAR_8->fs,
       VAR_14->e_value_inum,
       &VAR_25);
    if (VAR_19)
     return VAR_19;
    if (VAR_25.i_mtime != VAR_8->ino ||
        VAR_25.i_generation != VAR_9->i_generation)
     return VAR_1;
   }
  }

  VAR_8->count++;
  VAR_14 = FUNC_0(VAR_14);
 }

 return 0;
}
