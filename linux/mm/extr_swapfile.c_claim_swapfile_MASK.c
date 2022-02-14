
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_info_struct {int * bdev; int flags; int old_block_size; } ;
struct inode {TYPE_1__* i_sb; int i_mode; } ;
struct TYPE_2__ {int * s_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int,struct swap_info_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct swap_info_struct *VAR_6, struct inode *VAR_7)
{
 int VAR_8;

 if (FUNC_2(VAR_7->i_mode)) {
  VAR_6->bdev = FUNC_4(FUNC_1(VAR_7));
  VAR_8 = FUNC_5(VAR_6->bdev,
       VAR_2 | VAR_3 | VAR_1, VAR_6);
  if (VAR_8 < 0) {
   VAR_6->bdev = ((void*)0);
   return VAR_8;
  }
  VAR_6->old_block_size = FUNC_6(VAR_6->bdev);
  VAR_8 = FUNC_8(VAR_6->bdev, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_6->flags |= VAR_5;
 } else if (FUNC_3(VAR_7->i_mode)) {
  VAR_6->bdev = VAR_7->i_sb->s_bdev;
 }

 FUNC_7(VAR_7);
 if (FUNC_0(VAR_7))
  return -VAR_0;

 return 0;
}
