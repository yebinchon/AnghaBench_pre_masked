
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_inode {void* i_generation; } ;
struct ext2_dx_tail {void* dt_checksum; } ;
struct ext2_dx_entry {int dummy; } ;
struct ext2_dir_entry {int dummy; } ;
typedef int inum ;
typedef int gen ;
typedef void* ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef void* __u32 ;
struct TYPE_4__ {void* csum_seed; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*,unsigned char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,void*,struct ext2_inode*) ;

__attribute__((used)) static errcode_t FUNC_3(ext2_filsys VAR_0, ext2_ino_t VAR_1,
    struct ext2_dir_entry *VAR_2,
    __u32 *VAR_3, int VAR_4, int VAR_5,
    struct ext2_dx_tail *VAR_6)
{
 errcode_t VAR_7;
 char *VAR_8 = (char *)VAR_2;
 int VAR_9;
 __u32 VAR_10, VAR_11;
 struct ext2_inode VAR_12;

 VAR_9 = VAR_4 + (VAR_5 * sizeof(struct ext2_dx_entry));
 VAR_10 = VAR_6->dt_checksum;
 VAR_6->dt_checksum = 0;

 VAR_7 = FUNC_2(VAR_0, VAR_1, &VAR_12);
 if (VAR_7)
  return VAR_7;

 VAR_1 = FUNC_0(VAR_1);
 VAR_11 = FUNC_0(VAR_12.i_generation);
 *VAR_3 = FUNC_1(VAR_0->csum_seed, (unsigned char *)&VAR_1,
    sizeof(VAR_1));
 *VAR_3 = FUNC_1(*VAR_3, (unsigned char *)&VAR_11, sizeof(VAR_11));
 *VAR_3 = FUNC_1(*VAR_3, (unsigned char *)VAR_8, VAR_9);
 *VAR_3 = FUNC_1(*VAR_3, (unsigned char *)VAR_6,
    sizeof(struct ext2_dx_tail));
 VAR_6->dt_checksum = VAR_10;

 return 0;
}
