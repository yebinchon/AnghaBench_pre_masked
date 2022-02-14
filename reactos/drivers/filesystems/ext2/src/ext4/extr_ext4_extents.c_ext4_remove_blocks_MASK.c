
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct ext4_extent*) ;
 unsigned long FUNC_1 (struct ext4_extent*) ;
 int FUNC_2 (void*,int *,struct inode*,int *,unsigned long,unsigned long,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, handle_t *VAR_1, struct inode *VAR_2,
  struct ext4_extent *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5)
{
 struct buffer_head *VAR_6;
 int VAR_7;

 if (VAR_4 >= FUNC_3(VAR_3->ee_block)
   && VAR_5 == FUNC_3(VAR_3->ee_block) + FUNC_0(VAR_3) - 1) {

  unsigned long VAR_8, VAR_9;
  VAR_8 = FUNC_3(VAR_3->ee_block) + FUNC_0(VAR_3) - VAR_4;
  VAR_9 = FUNC_1(VAR_3) + FUNC_0(VAR_3) - VAR_8;
  FUNC_2(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_9, VAR_8, 0);
 } else if (VAR_4 == FUNC_3(VAR_3->ee_block)
   && VAR_5 <= FUNC_3(VAR_3->ee_block) + FUNC_0(VAR_3) - 1) {
 } else {
 }
 return 0;
}
