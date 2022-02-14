
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ext2_dx_tail {int dt_checksum; } ;
struct ext2_dx_entry {int dummy; } ;
struct ext2_dx_countlimit {int count; int limit; } ;
struct ext2_dir_entry {int dummy; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u32 ;
struct TYPE_5__ {int blocksize; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct ext2_dir_entry*,struct ext2_dx_countlimit**,int*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ext2_dir_entry*,scalar_t__*,int,int,struct ext2_dx_tail*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(ext2_filsys VAR_0, ext2_ino_t VAR_1,
     struct ext2_dir_entry *VAR_2)
{
 __u32 VAR_3;
 errcode_t VAR_4;
 struct ext2_dx_countlimit *VAR_5;
 struct ext2_dx_tail *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_4 = FUNC_0(VAR_0, VAR_2, &VAR_5, &VAR_7, 1);
 if (VAR_4)
  return 1;
 VAR_8 = FUNC_2(VAR_5->limit);
 VAR_9 = FUNC_2(VAR_5->count);
 if (VAR_7 + (VAR_8 * sizeof(struct ext2_dx_entry)) >
     VAR_0->blocksize - sizeof(struct ext2_dx_tail))
  return 0;

 VAR_6 = (struct ext2_dx_tail *)(((struct ext2_dx_entry *)VAR_5) + VAR_8);
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3, VAR_7,
    VAR_9, VAR_6);
 if (VAR_4)
  return 0;

 return FUNC_3(VAR_6->dt_checksum) == VAR_3;
}
