
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_inode {void* i_generation; } ;
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
        struct ext2_dir_entry *VAR_2, __u32 *VAR_3,
        int VAR_4)
{
 errcode_t VAR_5;
 char *VAR_6 = (char *)VAR_2;
 __u32 VAR_7;
 struct ext2_inode VAR_8;

 VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_8);
 if (VAR_5)
  return VAR_5;

 VAR_1 = FUNC_0(VAR_1);
 VAR_7 = FUNC_0(VAR_8.i_generation);
 *VAR_3 = FUNC_1(VAR_0->csum_seed, (unsigned char *)&VAR_1,
    sizeof(VAR_1));
 *VAR_3 = FUNC_1(*VAR_3, (unsigned char *)&VAR_7, sizeof(VAR_7));
 *VAR_3 = FUNC_1(*VAR_3, (unsigned char *)VAR_6, VAR_4);

 return 0;
}
