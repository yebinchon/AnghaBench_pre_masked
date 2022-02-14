
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
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1);
 if (VAR_7)
  return VAR_7;

 if ((VAR_6->f_mode & VAR_0) && (VAR_6->f_flags & VAR_2)) {
  VAR_7 = FUNC_0(&VAR_4);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return FUNC_2(VAR_6, &VAR_3);
}
