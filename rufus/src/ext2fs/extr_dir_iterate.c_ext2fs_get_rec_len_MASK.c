
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_dir_entry {unsigned int rec_len; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
struct TYPE_3__ {int blocksize; } ;


 unsigned int VAR_0 ;

errcode_t FUNC_0(ext2_filsys VAR_1,
        struct ext2_dir_entry *VAR_2,
        unsigned int *VAR_3)
{
 unsigned int VAR_4 = VAR_2->rec_len;

 if (VAR_1->blocksize < 65536)
  *VAR_3 = VAR_4;
 else if (VAR_4 == VAR_0 || VAR_4 == 0)
  *VAR_3 = VAR_1->blocksize;
 else
  *VAR_3 = (VAR_4 & 65532) | ((VAR_4 & 3) << 16);
 return 0;
}
