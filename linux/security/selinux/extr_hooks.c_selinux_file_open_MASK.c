
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_security_struct {int sid; } ;
struct file_security_struct {int pseqno; int isid; } ;
struct file {int f_cred; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ,struct file*,int ) ;
 struct inode_security_struct* FUNC_3 (int ) ;
 int FUNC_4 (struct file*) ;
 struct file_security_struct* FUNC_5 (struct file*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1)
{
 struct file_security_struct *VAR_2;
 struct inode_security_struct *VAR_3;

 VAR_2 = FUNC_5(VAR_1);
 VAR_3 = FUNC_3(FUNC_1(VAR_1));







 VAR_2->isid = VAR_3->sid;
 VAR_2->pseqno = FUNC_0(&VAR_0);
 return FUNC_2(VAR_1->f_cred, VAR_1, FUNC_4(VAR_1));
}
