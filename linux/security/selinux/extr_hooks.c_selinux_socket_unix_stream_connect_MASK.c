
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; int peer_sid; int sclass; } ;
struct lsm_network_audit {struct sock* sk; int member_0; } ;
struct TYPE_2__ {struct lsm_network_audit* net; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_3,
           struct sock *VAR_4,
           struct sock *VAR_5)
{
 struct sk_security_struct *VAR_6 = VAR_3->sk_security;
 struct sk_security_struct *VAR_7 = VAR_4->sk_security;
 struct sk_security_struct *VAR_8 = VAR_5->sk_security;
 struct common_audit_data VAR_9;
 struct lsm_network_audit VAR_10 = {0,};
 int VAR_11;

 VAR_9.type = VAR_0;
 VAR_9.u.net = &VAR_10;
 VAR_9.u.net->sk = VAR_4;

 VAR_11 = FUNC_0(&VAR_2,
      VAR_6->sid, VAR_7->sid,
      VAR_7->sclass,
      VAR_1, &VAR_9);
 if (VAR_11)
  return VAR_11;


 VAR_8->peer_sid = VAR_6->sid;
 VAR_11 = FUNC_1(&VAR_2, VAR_7->sid,
        VAR_6->sid, &VAR_8->sid);
 if (VAR_11)
  return VAR_11;


 VAR_6->peer_sid = VAR_8->sid;

 return 0;
}
