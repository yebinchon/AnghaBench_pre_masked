
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,struct file*) ;
 int FUNC_4 (struct file*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

int FUNC_7(struct file *VAR_4, loff_t VAR_5,
        struct file *VAR_6, loff_t VAR_7,
        size_t *VAR_8, unsigned int VAR_9)
{
 struct inode *VAR_10 = FUNC_2(VAR_4);
 struct inode *VAR_11 = FUNC_2(VAR_6);
 uint64_t VAR_12 = *VAR_8;
 loff_t VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_4, VAR_6);
 if (VAR_14)
  return VAR_14;


 if (FUNC_0(VAR_11))
  return -VAR_2;

 if (FUNC_1(VAR_10) || FUNC_1(VAR_11))
  return -VAR_3;


 if (VAR_5 + VAR_12 < VAR_5 || VAR_7 + VAR_12 < VAR_7)
  return -VAR_1;


 VAR_13 = FUNC_5(VAR_10);
 if (VAR_5 >= VAR_13)
  VAR_12 = 0;
 else
  VAR_12 = FUNC_6(VAR_12, VAR_13 - (uint64_t)VAR_5);

 VAR_14 = FUNC_4(VAR_6, VAR_7, &VAR_12);
 if (VAR_14)
  return VAR_14;


 if (VAR_10 == VAR_11 &&
     VAR_7 + VAR_12 > VAR_5 &&
     VAR_7 < VAR_5 + VAR_12)
  return -VAR_0;

 *VAR_8 = VAR_12;
 return 0;
}
