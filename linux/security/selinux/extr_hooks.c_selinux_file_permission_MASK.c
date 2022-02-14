
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode_security_struct {scalar_t__ sid; } ;
struct inode {int dummy; } ;
struct file_security_struct {scalar_t__ sid; scalar_t__ isid; scalar_t__ pseqno; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 struct inode* FUNC_2 (struct file*) ;
 struct inode_security_struct* FUNC_3 (struct inode*) ;
 struct file_security_struct* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = FUNC_2(VAR_1);
 struct file_security_struct *VAR_4 = FUNC_4(VAR_1);
 struct inode_security_struct *VAR_5;
 u32 VAR_6 = FUNC_1();

 if (!VAR_2)

  return 0;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_6 == VAR_4->sid && VAR_4->isid == VAR_5->sid &&
     VAR_4->pseqno == FUNC_0(&VAR_0))

  return 0;

 return FUNC_5(VAR_1, VAR_2);
}
