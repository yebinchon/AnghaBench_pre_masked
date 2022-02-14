
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_xattr_ref {int ea_size; int block_size_rem; TYPE_1__* fs; TYPE_2__* block_bh; } ;
struct ext4_xattr_item {scalar_t__ name_len; int data_size; } ;
struct ext4_xattr_entry {int e_value_size; scalar_t__ e_name_len; int e_name_index; } ;
struct TYPE_4__ {int b_data; } ;
struct TYPE_3__ {size_t BlockSize; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ext4_xattr_entry* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ext4_xattr_entry*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 char* FUNC_4 (struct ext4_xattr_entry*) ;
 struct ext4_xattr_entry* FUNC_5 (struct ext4_xattr_entry*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 void* FUNC_7 (struct ext4_xattr_ref*,struct ext4_xattr_entry*,int ) ;
 struct ext4_xattr_item* FUNC_8 (int ,char*,size_t) ;
 scalar_t__ FUNC_9 (struct ext4_xattr_item*,void*,int ) ;
 int FUNC_10 (struct ext4_xattr_item*) ;
 int FUNC_11 (struct ext4_xattr_ref*,struct ext4_xattr_item*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct ext4_xattr_ref *VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5;
 void *VAR_6;
 struct ext4_xattr_entry *VAR_7 = ((void*)0);

 FUNC_0(VAR_3->block_bh->b_data);
 VAR_7 = FUNC_1(VAR_3->block_bh);

 VAR_5 = VAR_3->fs->BlockSize;
 for (; VAR_5 > 0 && !FUNC_2(VAR_7);
      VAR_7 = FUNC_5(VAR_7),
      VAR_5 -= FUNC_3(VAR_7->e_name_len)) {
  struct ext4_xattr_item *VAR_8;
  char *VAR_9 = FUNC_4(VAR_7);

  VAR_6 = FUNC_7(VAR_3, VAR_7, VAR_2);
  if (!VAR_6) {
   VAR_4 = -VAR_0;
   goto Finish;
  }

  VAR_8 = FUNC_8(VAR_7->e_name_index, VAR_9,
          (size_t)VAR_7->e_name_len);
  if (!VAR_8) {
   VAR_4 = -VAR_1;
   goto Finish;
  }
  if (FUNC_9(
   VAR_8, VAR_6, FUNC_12(VAR_7->e_value_size)) != 0) {
   FUNC_10(VAR_8);
   VAR_4 = -VAR_1;
   goto Finish;
  }
  FUNC_11(VAR_3, VAR_8);
  VAR_3->block_size_rem -=
   FUNC_6(VAR_8->data_size) +
   FUNC_3(VAR_8->name_len);
  VAR_3->ea_size += FUNC_6(VAR_8->data_size) +
          FUNC_3(VAR_8->name_len);
 }

Finish:
 return VAR_4;
}
