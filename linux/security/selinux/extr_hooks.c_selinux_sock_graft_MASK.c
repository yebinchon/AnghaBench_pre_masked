
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sock {scalar_t__ sk_family; struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sclass; int sid; } ;
struct inode_security_struct {int sclass; int sid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct socket*) ;
 struct inode_security_struct* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_3, struct socket *VAR_4)
{
 struct inode_security_struct *VAR_5 =
  FUNC_1(FUNC_0(VAR_4));
 struct sk_security_struct *VAR_6 = VAR_3->sk_security;

 if (VAR_3->sk_family == VAR_0 || VAR_3->sk_family == VAR_1 ||
     VAR_3->sk_family == VAR_2)
  VAR_5->sid = VAR_6->sid;
 VAR_6->sclass = VAR_5->sclass;
}
