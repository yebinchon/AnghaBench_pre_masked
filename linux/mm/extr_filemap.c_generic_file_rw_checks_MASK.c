
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct file {int f_mode; int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_6, struct file *VAR_7)
{
 struct inode *VAR_8 = FUNC_2(VAR_6);
 struct inode *VAR_9 = FUNC_2(VAR_7);


 if (FUNC_0(VAR_8->i_mode) || FUNC_0(VAR_9->i_mode))
  return -VAR_2;
 if (!FUNC_1(VAR_8->i_mode) || !FUNC_1(VAR_9->i_mode))
  return -VAR_1;

 if (!(VAR_6->f_mode & VAR_3) ||
     !(VAR_7->f_mode & VAR_4) ||
     (VAR_7->f_flags & VAR_5))
  return -VAR_0;

 return 0;
}
