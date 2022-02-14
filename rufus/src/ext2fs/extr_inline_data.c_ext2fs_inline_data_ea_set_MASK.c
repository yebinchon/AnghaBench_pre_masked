
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_handle {int dummy; } ;
struct ext2_inline_data {int ea_size; int ea_data; int ino; int fs; } ;
typedef scalar_t__ errcode_t ;


 scalar_t__ FUNC_0 (struct ext2_xattr_handle*,char*,int ,int ) ;
 int FUNC_1 (struct ext2_xattr_handle**) ;
 scalar_t__ FUNC_2 (int ,int ,struct ext2_xattr_handle**) ;
 scalar_t__ FUNC_3 (struct ext2_xattr_handle*) ;

__attribute__((used)) static errcode_t FUNC_4(struct ext2_inline_data *VAR_0)
{
 struct ext2_xattr_handle *VAR_1;
 errcode_t VAR_2;

 VAR_2 = FUNC_2(VAR_0->fs, VAR_0->ino, &VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_0(VAR_1, "system.data",
      VAR_0->ea_data, VAR_0->ea_size);
err:
 (void) FUNC_1(&VAR_1);
 return VAR_2;
}
