
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short FUNC_0 (struct ext4_extent*) ;
 scalar_t__ FUNC_1 (struct ext4_extent*) ;
 scalar_t__ FUNC_2 (struct ext4_extent*) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(struct inode *VAR_2, struct ext4_extent *VAR_3,
  struct ext4_extent *VAR_4)
{
 unsigned short VAR_5, VAR_6;







 if (FUNC_1(VAR_3) != FUNC_1(VAR_4))
  return 0;

 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = FUNC_0(VAR_4);

 if (FUNC_3(VAR_3->ee_block) + VAR_5 !=
   FUNC_3(VAR_4->ee_block))
  return 0;






 if (VAR_5 + VAR_6 > VAR_0)
  return 0;
 if (FUNC_1(VAR_3) &&
   (VAR_5 + VAR_6 > VAR_1))
  return 0;





 if (FUNC_2(VAR_3) + VAR_5 == FUNC_2(VAR_4))
  return 1;
 return 0;
}
