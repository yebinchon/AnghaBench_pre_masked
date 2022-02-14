
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_head {int dummy; } ;
struct inode {scalar_t__ i_security; } ;


 int FUNC_0 (struct rcu_head*,int ) ;
 int FUNC_1 (int ,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_2)
{
 FUNC_2(VAR_2);
 FUNC_1(VAR_1, VAR_2);
 if (VAR_2->i_security)
  FUNC_0((struct rcu_head *)VAR_2->i_security,
    VAR_0);
}
