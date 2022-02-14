
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct inode_security_struct {int lock; int initialized; int sid; int sclass; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct inode_security_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_1,
      struct inode *VAR_2)
{
 struct inode_security_struct *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = FUNC_4(VAR_1);

 FUNC_2(&VAR_3->lock);
 VAR_3->sclass = FUNC_0(VAR_2->i_mode);
 VAR_3->sid = VAR_4;
 VAR_3->initialized = VAR_0;
 FUNC_3(&VAR_3->lock);
}
