
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_devinfo {int dummy; } ;
struct file {struct seq_oss_devinfo* private_data; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 long FUNC_1 (struct seq_oss_devinfo*,unsigned int,unsigned long) ;

__attribute__((used)) static long
FUNC_2(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct seq_oss_devinfo *VAR_4;
 VAR_4 = VAR_1->private_data;
 if (FUNC_0(!VAR_4))
  return -VAR_0;
 return FUNC_1(VAR_4, VAR_2, VAR_3);
}
