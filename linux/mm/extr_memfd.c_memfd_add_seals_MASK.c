
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; int f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned int* FUNC_5 (struct file*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_6, unsigned int VAR_7)
{
 struct inode *VAR_8 = FUNC_0(VAR_6);
 unsigned int *VAR_9;
 int VAR_10;
 if (!(VAR_6->f_mode & VAR_2))
  return -VAR_1;
 if (VAR_7 & ~(unsigned int)VAR_3)
  return -VAR_0;

 FUNC_1(VAR_8);

 VAR_9 = FUNC_5(VAR_6);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto unlock;
 }

 if (*VAR_9 & VAR_4) {
  VAR_10 = -VAR_1;
  goto unlock;
 }

 if ((VAR_7 & VAR_5) && !(*VAR_9 & VAR_5)) {
  VAR_10 = FUNC_4(VAR_6->f_mapping);
  if (VAR_10)
   goto unlock;

  VAR_10 = FUNC_6(VAR_6->f_mapping);
  if (VAR_10) {
   FUNC_3(VAR_6->f_mapping);
   goto unlock;
  }
 }

 *VAR_9 |= VAR_7;
 VAR_10 = 0;

unlock:
 FUNC_2(VAR_8);
 return VAR_10;
}
