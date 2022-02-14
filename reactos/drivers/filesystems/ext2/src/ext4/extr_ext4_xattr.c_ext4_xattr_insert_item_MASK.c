
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {scalar_t__ inode_size_rem; scalar_t__ block_size_rem; void* dirty; int ea_size; } ;
struct ext4_xattr_item {size_t data_size; int name_len; void* in_inode; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct ext4_xattr_item* FUNC_2 (int ,char const*,size_t) ;
 scalar_t__ FUNC_3 (struct ext4_xattr_item*,void const*,size_t) ;
 int FUNC_4 (struct ext4_xattr_item*) ;
 int FUNC_5 (struct ext4_xattr_ref*,struct ext4_xattr_item*) ;

__attribute__((used)) static struct ext4_xattr_item *
FUNC_6(struct ext4_xattr_ref *VAR_4, __u8 VAR_5,
         const char *VAR_6, size_t VAR_7, const void *VAR_8,
         size_t VAR_9,
         int *VAR_10)
{
 struct ext4_xattr_item *VAR_11;
 VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (!VAR_11) {
  if (VAR_10)
   *VAR_10 = -VAR_0;

  return ((void*)0);
 }

 VAR_11->in_inode = VAR_3;
 if (VAR_4->inode_size_rem <
    FUNC_1(VAR_9) +
    FUNC_0(VAR_11->name_len)) {
  if (VAR_4->block_size_rem <
     FUNC_1(VAR_9) +
     FUNC_0(VAR_11->name_len)) {
   if (VAR_10)
    *VAR_10 = -VAR_1;

   return ((void*)0);
  }

  VAR_11->in_inode = VAR_2;
 }
 if (FUNC_3(VAR_11, VAR_8, VAR_9) != 0) {
  FUNC_4(VAR_11);
  if (VAR_10)
   *VAR_10 = -VAR_0;

  return ((void*)0);
 }
 FUNC_5(VAR_4, VAR_11);
 VAR_4->ea_size +=
     FUNC_1(VAR_11->data_size) + FUNC_0(VAR_11->name_len);
 if (VAR_11->in_inode) {
  VAR_4->inode_size_rem -=
   FUNC_1(VAR_11->data_size) +
   FUNC_0(VAR_11->name_len);
 } else {
  VAR_4->block_size_rem -=
   FUNC_1(VAR_11->data_size) +
   FUNC_0(VAR_11->name_len);
 }
 VAR_4->dirty = VAR_3;
 if (VAR_10)
  *VAR_10 = 0;

 return VAR_11;
}
