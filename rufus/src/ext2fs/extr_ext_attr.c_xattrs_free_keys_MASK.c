
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {int capacity; scalar_t__ ibody_count; scalar_t__ count; struct ext2_xattr* attrs; } ;
struct ext2_xattr {scalar_t__ value; scalar_t__ name; } ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct ext2_xattr_handle *VAR_0)
{
 struct ext2_xattr *VAR_1 = VAR_0->attrs;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->capacity; VAR_2++) {
  if (VAR_1[VAR_2].name)
   FUNC_0(&VAR_1[VAR_2].name);
  if (VAR_1[VAR_2].value)
   FUNC_0(&VAR_1[VAR_2].value);
 }
 VAR_0->count = 0;
 VAR_0->ibody_count = 0;
}
