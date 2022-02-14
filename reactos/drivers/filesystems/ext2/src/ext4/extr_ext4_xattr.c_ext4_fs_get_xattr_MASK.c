
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {int dummy; } ;
struct ext4_xattr_item {size_t data_size; int data; } ;
typedef int __u8 ;


 int VAR_0 ;
 struct ext4_xattr_item* FUNC_0 (struct ext4_xattr_ref*,int ,char const*,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

int FUNC_2(struct ext4_xattr_ref *VAR_1, __u8 VAR_2,
        const char *VAR_3, size_t VAR_4, void *VAR_5,
        size_t VAR_6, size_t *VAR_7)
{
 int VAR_8 = 0;
 size_t VAR_9 = 0;
 struct ext4_xattr_item *VAR_10 =
     FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 if (!VAR_10) {
  VAR_8 = -VAR_0;
  goto Finish;
 }
 VAR_9 = VAR_10->data_size;
 if (VAR_6 > VAR_9)
  VAR_6 = VAR_9;

 if (VAR_5)
  FUNC_1(VAR_5, VAR_10->data, VAR_6);

Finish:
 if (VAR_7)
  *VAR_7 = VAR_9;

 return VAR_8;
}
