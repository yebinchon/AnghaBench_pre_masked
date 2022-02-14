
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_dir_entry {unsigned int rec_len; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
struct TYPE_3__ {unsigned int blocksize; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

errcode_t FUNC_0(ext2_filsys VAR_2,
        unsigned int VAR_3,
        struct ext2_dir_entry *VAR_4)
{
 if ((VAR_3 > VAR_2->blocksize) || (VAR_2->blocksize > (1 << 18)) || (VAR_3 & 3))
  return VAR_0;
 if (VAR_3 < 65536) {
  VAR_4->rec_len = VAR_3;
  return 0;
 }
 if (VAR_3 == VAR_2->blocksize) {
  if (VAR_2->blocksize == 65536)
   VAR_4->rec_len = VAR_1;
  else
   VAR_4->rec_len = 0;
 } else
  VAR_4->rec_len = (VAR_3 & 65532) | ((VAR_3 >> 16) & 3);
 return 0;
}
