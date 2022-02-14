
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_dir_entry {int dummy; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
struct TYPE_7__ {int flags; int super; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct ext2_dir_entry*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct ext2_dir_entry*,int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,struct ext2_dir_entry*) ;
 int FUNC_3 (TYPE_1__*,int ,struct ext2_dir_entry*) ;
 int FUNC_4 (int ) ;

errcode_t FUNC_5(ext2_filsys VAR_2, ext2_ino_t VAR_3,
        struct ext2_dir_entry *VAR_4)
{
 if (!FUNC_4(VAR_2->super))
  return 0;

 if (FUNC_0(VAR_2, VAR_4, ((void*)0), 1) == 0)
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_2, VAR_4, ((void*)0), ((void*)0), 1) == 0)
  return FUNC_3(VAR_2, VAR_3, VAR_4);

 if (VAR_2->flags & VAR_1)
  return 0;
 return VAR_0;
}
