
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int dummy; } ;
typedef int ext4_fsblk_t ;


 unsigned int FUNC_0 (struct ext4_extent*) ;
 int FUNC_1 (struct ext4_extent*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct ext4_extent *VAR_1)
{
 ext4_fsblk_t VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_1);

 VAR_4 = 0;

 return VAR_4;
}
