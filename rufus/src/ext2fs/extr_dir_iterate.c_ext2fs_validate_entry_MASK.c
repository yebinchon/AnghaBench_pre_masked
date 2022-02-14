
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_dir_entry {int dummy; } ;
typedef TYPE_1__* ext2_filsys ;
struct TYPE_4__ {unsigned int blocksize; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ext2_dir_entry*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct ext2_dir_entry*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(ext2_filsys VAR_1, char *VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4)
{
 struct ext2_dir_entry *VAR_5;
 unsigned int VAR_6;


 while ((VAR_3 < VAR_4) &&
        (VAR_3 <= VAR_1->blocksize - 12)) {
  VAR_5 = (struct ext2_dir_entry *)(VAR_2 + VAR_3);
  if (FUNC_1(VAR_1, VAR_5, &VAR_6))
   return 0;
  VAR_3 += VAR_6;
  if ((VAR_6 < 8) ||
      ((VAR_6 % 4) != 0) ||
      ((FUNC_0(VAR_5)+8) > (int) VAR_6))
   return 0;
 }
 return (VAR_3 == VAR_4);
}
