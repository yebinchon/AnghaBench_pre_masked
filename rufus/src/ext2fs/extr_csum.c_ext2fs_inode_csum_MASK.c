
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_inode_large {void* i_checksum_hi; void* i_checksum_lo; int i_generation; } ;
typedef int inum ;
typedef int gen ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef int __u32 ;
typedef void* __u16 ;
struct TYPE_3__ {int csum_seed; int super; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,size_t) ;

__attribute__((used)) static errcode_t FUNC_3(ext2_filsys VAR_0, ext2_ino_t VAR_1,
          struct ext2_inode_large *VAR_2,
          __u32 *VAR_3, int VAR_4)
{
 __u32 VAR_5;
 struct ext2_inode_large *VAR_6 = VAR_2;
 size_t VAR_7 = FUNC_0(VAR_0->super);
 __u16 VAR_8;
 __u16 VAR_9 = 0;

 VAR_8 = VAR_2->i_checksum_lo;
 VAR_2->i_checksum_lo = 0;
 if (VAR_4) {
  VAR_9 = VAR_2->i_checksum_hi;
  VAR_2->i_checksum_hi = 0;
 }

 VAR_1 = FUNC_1(VAR_1);
 VAR_5 = VAR_2->i_generation;
 *VAR_3 = FUNC_2(VAR_0->csum_seed, (unsigned char *)&VAR_1,
    sizeof(VAR_1));
 *VAR_3 = FUNC_2(*VAR_3, (unsigned char *)&VAR_5, sizeof(VAR_5));
 *VAR_3 = FUNC_2(*VAR_3, (unsigned char *)VAR_6, VAR_7);

 VAR_2->i_checksum_lo = VAR_8;
 if (VAR_4)
  VAR_2->i_checksum_hi = VAR_9;
 return 0;
}
