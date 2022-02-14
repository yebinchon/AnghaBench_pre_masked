
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {int dummy; } ;
struct ext2_inline_data {int * ea_data; int ea_size; int ino; int fs; } ;
typedef scalar_t__ errcode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ext2_xattr_handle*,char*,void**,int *) ;
 int FUNC_1 (struct ext2_xattr_handle**) ;
 scalar_t__ FUNC_2 (int ,int ,struct ext2_xattr_handle**) ;
 scalar_t__ FUNC_3 (struct ext2_xattr_handle*) ;

__attribute__((used)) static errcode_t FUNC_4(struct ext2_inline_data *VAR_1)
{
 struct ext2_xattr_handle *VAR_2;
 errcode_t VAR_3;

 VAR_1->ea_size = 0;
 VAR_1->ea_data = 0;

 VAR_3 = FUNC_2(VAR_1->fs, VAR_1->ino, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_0(VAR_2, "system.data",
      (void **)&VAR_1->ea_data, &VAR_1->ea_size);
 if (VAR_3 == VAR_0) {
  VAR_1->ea_size = 0;
  VAR_1->ea_data = ((void*)0);
  VAR_3 = 0;
 } else if (VAR_3)
  goto err;

err:
 (void) FUNC_1(&VAR_2);
 return VAR_3;
}
