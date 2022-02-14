
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {int dummy; } ;
struct ext4_xattr_item {size_t data_size; int data; } ;
typedef int __u8 ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_xattr_item* FUNC_0 (struct ext4_xattr_ref*,int ,char const*,size_t,void const*,size_t,int*) ;
 struct ext4_xattr_item* FUNC_1 (struct ext4_xattr_ref*,int ,char const*,size_t) ;
 int FUNC_2 (struct ext4_xattr_ref*,struct ext4_xattr_item*,size_t) ;
 int FUNC_3 (int ,void const*,size_t) ;

int FUNC_4(struct ext4_xattr_ref *VAR_2, __u8 VAR_3,
        const char *VAR_4, size_t VAR_5, const void *VAR_6,
        size_t VAR_7, BOOL VAR_8)
{
 int VAR_9 = 0;
 struct ext4_xattr_item *VAR_10 =
     FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8) {
  if (!VAR_10) {
   VAR_9 = -VAR_1;
   goto Finish;
  }
  if (VAR_10->data_size != VAR_7)
   VAR_9 = FUNC_2(VAR_2, VAR_10, VAR_7);

  if (VAR_9 != 0) {
   goto Finish;
  }
  FUNC_3(VAR_10->data, VAR_6, VAR_7);
 } else {
  if (VAR_10) {
   VAR_9 = -VAR_0;
   goto Finish;
  }
  VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7, &VAR_9);
 }
Finish:
 return VAR_9;
}
