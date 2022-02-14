
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {unsigned int capacity; struct ext2_xattr* attrs; } ;
struct ext2_xattr {int dummy; } ;
typedef scalar_t__ errcode_t ;


 int FUNC_0 (struct ext2_xattr**) ;
 scalar_t__ FUNC_1 (unsigned int,int,struct ext2_xattr**) ;
 int FUNC_2 (struct ext2_xattr*,struct ext2_xattr*,int) ;

__attribute__((used)) static errcode_t FUNC_3(struct ext2_xattr_handle *VAR_0,
          unsigned int VAR_1)
{
 struct ext2_xattr *VAR_2;
 errcode_t VAR_3;

 VAR_3 = FUNC_1(VAR_0->capacity + VAR_1,
       sizeof(struct ext2_xattr), &VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2, VAR_0->attrs, VAR_0->capacity * sizeof(struct ext2_xattr));
 FUNC_0(&VAR_0->attrs);
 VAR_0->capacity += VAR_1;
 VAR_0->attrs = VAR_2;

 return 0;
}
