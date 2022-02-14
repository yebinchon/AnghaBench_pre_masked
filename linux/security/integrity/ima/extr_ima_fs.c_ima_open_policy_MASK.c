
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct file*,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_10, struct file *VAR_11)
{
 if (!(VAR_11->f_flags & VAR_7)) {

  return -VAR_1;







 }
 if (FUNC_2(VAR_4, &VAR_8))
  return -VAR_2;
 return 0;
}
