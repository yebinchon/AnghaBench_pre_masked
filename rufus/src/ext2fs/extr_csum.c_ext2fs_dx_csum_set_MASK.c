
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
typedef int __u32 ;
struct TYPE_5__ {int blocksize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct ext2_dir_entry*,struct ext2_dx_countlimit**,int*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,struct ext2_dir_entry*,int *,int,int,struct ext2_dx_tail*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static errcode_t FUNC_4(ext2_filsys VAR_1, ext2_ino_t VAR_2,
        struct ext2_dir_entry *VAR_3)
{
 __u32 VAR_4;
 errcode_t VAR_5 = 0;
 struct ext2_dx_countlimit *VAR_6;
 struct ext2_dx_tail *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_5 = FUNC_0(VAR_1, VAR_3, &VAR_6, &VAR_8, 1);
 if (VAR_5)
  return VAR_5;
 VAR_9 = FUNC_3(VAR_6->limit);
 VAR_10 = FUNC_3(VAR_6->count);
 if (VAR_8 + (VAR_9 * sizeof(struct ext2_dx_entry)) >
     VAR_1->blocksize - sizeof(struct ext2_dx_tail))
  return VAR_0;
 VAR_7 = (struct ext2_dx_tail *)(((struct ext2_dx_entry *)VAR_6) + VAR_9);


 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_4, VAR_8, VAR_10, VAR_7);
 if (VAR_5)
  return VAR_5;
 VAR_7->dt_checksum = FUNC_1(VAR_4);
 return VAR_5;
}
