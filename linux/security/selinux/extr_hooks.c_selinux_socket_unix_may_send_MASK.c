
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* sk; } ;
struct sk_security_struct {int sclass; int sid; } ;
struct lsm_network_audit {TYPE_2__* sk; int member_0; } ;
struct TYPE_3__ {struct lsm_network_audit* net; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;
struct TYPE_4__ {struct sk_security_struct* sk_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_3,
     struct socket *VAR_4)
{
 struct sk_security_struct *VAR_5 = VAR_3->sk->sk_security;
 struct sk_security_struct *VAR_6 = VAR_4->sk->sk_security;
 struct common_audit_data VAR_7;
 struct lsm_network_audit VAR_8 = {0,};

 VAR_7.type = VAR_0;
 VAR_7.u.net = &VAR_8;
 VAR_7.u.net->sk = VAR_4->sk;

 return FUNC_0(&VAR_2,
       VAR_5->sid, VAR_6->sid, VAR_6->sclass, VAR_1,
       &VAR_7);
}
