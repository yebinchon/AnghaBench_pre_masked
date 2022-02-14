
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 VAR_3->private_data = FUNC_0(128, VAR_1);
 if (!VAR_3->private_data)
  return -VAR_0;
 return 0;
}
