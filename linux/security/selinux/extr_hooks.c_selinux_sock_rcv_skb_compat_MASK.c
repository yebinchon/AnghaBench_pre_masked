
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; } ;
struct sk_buff {int secmark; int skb_iif; } ;
struct lsm_network_audit {int family; int netif; int member_0; } ;
struct TYPE_2__ {struct lsm_network_audit* net; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (struct sk_security_struct*,struct sk_buff*,int ,struct common_audit_data*) ;
 int FUNC_2 (struct sk_buff*,struct common_audit_data*,char**,int,int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int ,struct sk_buff*,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_4, struct sk_buff *VAR_5,
           u16 VAR_6)
{
 int VAR_7 = 0;
 struct sk_security_struct *VAR_8 = VAR_4->sk_security;
 u32 VAR_9 = VAR_8->sid;
 struct common_audit_data VAR_10;
 struct lsm_network_audit VAR_11 = {0,};
 char *VAR_12;

 VAR_10.type = VAR_0;
 VAR_10.u.net = &VAR_11;
 VAR_10.u.net->netif = VAR_5->skb_iif;
 VAR_10.u.net->family = VAR_6;
 VAR_7 = FUNC_2(VAR_5, &VAR_10, &VAR_12, 1, ((void*)0));
 if (VAR_7)
  return VAR_7;

 if (FUNC_3()) {
  VAR_7 = FUNC_0(&VAR_3,
       VAR_9, VAR_5->secmark, VAR_2,
       VAR_1, &VAR_10);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_8, VAR_5, VAR_6, &VAR_10);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_4(VAR_8->sid, VAR_5, &VAR_10);

 return VAR_7;
}
