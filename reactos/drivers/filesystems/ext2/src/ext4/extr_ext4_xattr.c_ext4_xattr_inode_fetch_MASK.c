
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_xattr_ref {int ea_size; int inode_size_rem; TYPE_2__* OnDiskInode; TYPE_1__* fs; } ;
struct ext4_xattr_item {scalar_t__ name_len; int data_size; int in_inode; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_xattr_entry {int e_value_size; scalar_t__ e_name_len; int e_name_index; } ;
struct TYPE_4__ {int i_extra_isize; } ;
struct TYPE_3__ {int InodeSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ext4_xattr_entry*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 char* FUNC_4 (struct ext4_xattr_entry*) ;
 struct ext4_xattr_entry* FUNC_5 (struct ext4_xattr_entry*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 void* FUNC_7 (struct ext4_xattr_ref*,struct ext4_xattr_entry*,int ) ;
 struct ext4_xattr_item* FUNC_8 (int ,char*,size_t) ;
 scalar_t__ FUNC_9 (struct ext4_xattr_item*,void*,int ) ;
 int FUNC_10 (struct ext4_xattr_item*) ;
 int FUNC_11 (struct ext4_xattr_ref*,struct ext4_xattr_item*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct ext4_xattr_ref *VAR_4)
{
 void *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;
 struct ext4_xattr_ibody_header *VAR_8 = ((void*)0);
 struct ext4_xattr_entry *VAR_9 = ((void*)0);
 int VAR_10 = VAR_4->fs->InodeSize;

 VAR_8 = FUNC_1(VAR_4->OnDiskInode);
 VAR_9 = FUNC_0(VAR_8);

 VAR_6 = VAR_10 - VAR_2 -
     VAR_4->OnDiskInode->i_extra_isize;
 for (; VAR_6 > 0 && !FUNC_2(VAR_9);
      VAR_9 = FUNC_5(VAR_9),
      VAR_6 -= FUNC_3(VAR_9->e_name_len)) {
  struct ext4_xattr_item *VAR_11;
  char *VAR_12 = FUNC_4(VAR_9);

  VAR_5 = FUNC_7(VAR_4, VAR_9, VAR_3);
  if (!VAR_5) {
   VAR_7 = -VAR_0;
   goto Finish;
  }

  VAR_11 = FUNC_8(VAR_9->e_name_index, VAR_12,
          (size_t)VAR_9->e_name_len);
  if (!VAR_11) {
   VAR_7 = -VAR_1;
   goto Finish;
  }
  if (FUNC_9(
   VAR_11, VAR_5, FUNC_12(VAR_9->e_value_size)) != 0) {
   FUNC_10(VAR_11);
   VAR_7 = -VAR_1;
   goto Finish;
  }
  VAR_11->in_inode = VAR_3;
  FUNC_11(VAR_4, VAR_11);
  VAR_4->inode_size_rem -=
   FUNC_6(VAR_11->data_size) +
   FUNC_3(VAR_11->name_len);
  VAR_4->ea_size += FUNC_6(VAR_11->data_size) +
          FUNC_3(VAR_11->name_len);
 }

Finish:
 return VAR_7;
}
