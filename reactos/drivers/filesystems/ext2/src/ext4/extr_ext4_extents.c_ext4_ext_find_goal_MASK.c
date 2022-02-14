
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; TYPE_1__* p_bh; struct ext4_extent* p_ext; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {scalar_t__ b_blocknr; } ;


 scalar_t__ FUNC_0 (struct ext4_extent*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static ext4_fsblk_t FUNC_3(struct inode *VAR_0,
  struct ext4_ext_path *VAR_1,
  ext4_lblk_t VAR_2)
{
 if (VAR_1) {
  int VAR_3 = VAR_1->p_depth;
  struct ext4_extent *VAR_4;
  VAR_4 = VAR_1[VAR_3].p_ext;
  if (VAR_4) {
   ext4_fsblk_t VAR_5 = FUNC_0(VAR_4);
   ext4_lblk_t VAR_6 = FUNC_2(VAR_4->ee_block);

   if (VAR_2 > VAR_6)
    return VAR_5 + (VAR_2 - VAR_6);
   else
    return VAR_5 - (VAR_6 - VAR_2);
  }



  if (VAR_1[VAR_3].p_bh)
   return VAR_1[VAR_3].p_bh->b_blocknr;
 }


 return FUNC_1(VAR_0);
}
