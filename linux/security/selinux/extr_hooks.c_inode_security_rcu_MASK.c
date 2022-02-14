
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_security_struct {int dummy; } ;
struct inode {int dummy; } ;


 struct inode_security_struct* FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int *,int) ;
 struct inode_security_struct* FUNC_2 (struct inode*) ;

__attribute__((used)) static struct inode_security_struct *FUNC_3(struct inode *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, ((void*)0), !VAR_1);
 if (VAR_2)
  return FUNC_0(VAR_2);
 return FUNC_2(VAR_0);
}
