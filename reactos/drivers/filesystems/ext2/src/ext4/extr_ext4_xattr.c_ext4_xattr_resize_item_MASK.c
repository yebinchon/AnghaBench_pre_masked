
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {size_t inode_size_rem; size_t block_size_rem; size_t ea_size; void* dirty; } ;
struct ext4_xattr_item {size_t data_size; void* in_inode; int name_len; } ;
typedef void* BOOL ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (struct ext4_xattr_item*,size_t) ;

__attribute__((used)) static int FUNC_3(struct ext4_xattr_ref *VAR_3,
      struct ext4_xattr_item *VAR_4,
      size_t VAR_5)
{
 int VAR_6 = 0;
 BOOL VAR_7 = VAR_1, VAR_8 = VAR_1;
 size_t VAR_9 = VAR_4->data_size;
 size_t VAR_10 = VAR_4->in_inode ?
  VAR_3->inode_size_rem :
  VAR_3->block_size_rem;
 if (VAR_4->in_inode) {
  if (VAR_3->inode_size_rem +
          FUNC_1(VAR_9) <
          FUNC_1(VAR_5)) {
   if (VAR_3->block_size_rem <
           FUNC_1(VAR_5) +
           FUNC_0(VAR_4->name_len))
    return -VAR_0;

   VAR_8 = VAR_2;
  }
 } else {
  if (VAR_3->block_size_rem +
    FUNC_1(VAR_9) <
    FUNC_1(VAR_5)) {
   if (VAR_3->inode_size_rem <
     FUNC_1(VAR_5) +
     FUNC_0(VAR_4->name_len))
    return -VAR_0;

   VAR_7 = VAR_2;
  }
 }
 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->ea_size =
     VAR_3->ea_size -
     FUNC_1(VAR_9) +
     FUNC_1(VAR_5);





 if (VAR_8) {
  VAR_3->inode_size_rem +=
   FUNC_1(VAR_9) +
   FUNC_0(VAR_4->name_len);
  VAR_3->block_size_rem -=
   FUNC_1(VAR_5) +
   FUNC_0(VAR_4->name_len);
  VAR_4->in_inode = VAR_1;
 } else if (VAR_7) {
  VAR_3->block_size_rem +=
   FUNC_1(VAR_9) +
   FUNC_0(VAR_4->name_len);
  VAR_3->inode_size_rem -=
   FUNC_1(VAR_5) +
   FUNC_0(VAR_4->name_len);
  VAR_4->in_inode = VAR_2;
 } else {




  VAR_10 +=
   FUNC_1(VAR_9);
  VAR_10 -=
   FUNC_1(VAR_5);
  if (VAR_4->in_inode)
   VAR_3->inode_size_rem = VAR_10;
  else
   VAR_3->block_size_rem = VAR_10;

 }
 VAR_3->dirty = VAR_2;
 return VAR_6;
}
