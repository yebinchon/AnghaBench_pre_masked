
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_xattr_handle {int capacity; TYPE_1__* fs; int ino; scalar_t__ count; int attrs; int magic; } ;
struct ext2_xattr {int dummy; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_3__ {int super; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ext2_xattr_handle**) ;
 scalar_t__ FUNC_1 (int,int,int *) ;
 scalar_t__ FUNC_2 (int,struct ext2_xattr_handle**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

errcode_t FUNC_5(ext2_filsys VAR_2, ext2_ino_t VAR_3,
        struct ext2_xattr_handle **VAR_4)
{
 struct ext2_xattr_handle *VAR_5;
 errcode_t VAR_6;

 if (!FUNC_4(VAR_2->super) &&
     !FUNC_3(VAR_2->super))
  return VAR_1;

 VAR_6 = FUNC_2(sizeof(*VAR_5), &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->magic = VAR_0;
 VAR_5->capacity = 4;
 VAR_6 = FUNC_1(VAR_5->capacity, sizeof(struct ext2_xattr),
       &VAR_5->attrs);
 if (VAR_6) {
  FUNC_0(&VAR_5);
  return VAR_6;
 }
 VAR_5->count = 0;
 VAR_5->ino = VAR_3;
 VAR_5->fs = VAR_2;
 *VAR_4 = VAR_5;
 return 0;
}
