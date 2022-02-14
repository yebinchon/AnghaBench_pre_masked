
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode_security_struct {int initialized; int task_sid; int sclass; int sid; struct inode* inode; int list; int lock; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 struct inode_security_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3)
{
 struct inode_security_struct *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5 = FUNC_1();

 FUNC_3(&VAR_4->lock);
 FUNC_0(&VAR_4->list);
 VAR_4->inode = VAR_3;
 VAR_4->sid = VAR_2;
 VAR_4->sclass = VAR_1;
 VAR_4->task_sid = VAR_5;
 VAR_4->initialized = VAR_0;

 return 0;
}
