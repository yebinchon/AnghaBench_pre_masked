
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {scalar_t__ sid; int sclass; } ;
struct lsm_network_audit {struct sock* sk; int member_0; } ;
struct TYPE_2__ {struct lsm_network_audit* net; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ,int ,struct common_audit_data*) ;
 int FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_3, u32 VAR_4)
{
 struct sk_security_struct *VAR_5 = VAR_3->sk_security;
 struct common_audit_data VAR_6;
 struct lsm_network_audit VAR_7 = {0,};

 if (VAR_5->sid == VAR_1)
  return 0;

 VAR_6.type = VAR_0;
 VAR_6.u.net = &VAR_7;
 VAR_6.u.net->sk = VAR_3;

 return FUNC_0(&VAR_2,
       FUNC_1(), VAR_5->sid, VAR_5->sclass, VAR_4,
       &VAR_6);
}
