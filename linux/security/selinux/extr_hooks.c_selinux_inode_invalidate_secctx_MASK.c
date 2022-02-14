
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_security_struct {int lock; int initialized; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct inode_security_struct* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_1)
{
 struct inode_security_struct *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->lock);
 VAR_2->initialized = VAR_0;
 FUNC_2(&VAR_2->lock);
}
