
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(((void*)0));
 if (VAR_5)
  return VAR_5;

 if ((VAR_4->f_mode & VAR_0) && (VAR_4->f_flags & VAR_1)) {
  VAR_5 = FUNC_0(((void*)0));
  if (VAR_5 < 0)
   return VAR_5;
 }

 return FUNC_1(VAR_4, &VAR_2);
}
