
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {int count; struct ext2_xattr* attrs; } ;
struct ext2_xattr {char* name; char* value; size_t value_len; } ;
typedef int errcode_t ;


 int FUNC_0 (struct ext2_xattr_handle*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ext2_xattr_handle*) ;

errcode_t FUNC_2(struct ext2_xattr_handle *VAR_3,
    int (*VAR_4)(char *VAR_5, char *VAR_6,
         size_t VAR_7, void *VAR_8),
    void *VAR_9)
{
 struct ext2_xattr *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_0(VAR_3, VAR_0);
 for (VAR_10 = VAR_3->attrs; VAR_10 < VAR_3->attrs + VAR_3->count; VAR_10++) {
  VAR_12 = VAR_4(VAR_10->name, VAR_10->value, VAR_10->value_len, VAR_9);
  if (VAR_12 & VAR_2)
   VAR_11 = 1;
  if (VAR_12 & VAR_1)
   break;
 }

 if (VAR_11)
  return FUNC_1(VAR_3);
 return 0;
}
