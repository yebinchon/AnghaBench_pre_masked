
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_dir_entry {int dummy; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
struct TYPE_7__ {int super; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct ext2_dir_entry*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct ext2_dir_entry*,int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,struct ext2_dir_entry*) ;
 int FUNC_3 (TYPE_1__*,int ,struct ext2_dir_entry*) ;
 int FUNC_4 (int ) ;

int FUNC_5(ext2_filsys VAR_0, ext2_ino_t VAR_1,
     struct ext2_dir_entry *VAR_2)
{
 if (!FUNC_4(VAR_0->super))
  return 1;

 if (FUNC_0(VAR_0, VAR_2, ((void*)0), 1) == 0)
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 if (FUNC_1(VAR_0, VAR_2, ((void*)0), ((void*)0), 1) == 0)
  return FUNC_3(VAR_0, VAR_1, VAR_2);

 return 0;
}
