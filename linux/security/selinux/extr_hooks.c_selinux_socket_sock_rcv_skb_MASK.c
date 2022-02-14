
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sock {scalar_t__ sk_family; struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; } ;
struct sk_buff {scalar_t__ protocol; int secmark; int skb_iif; } ;
struct lsm_network_audit {scalar_t__ family; int netif; int member_0; } ;
struct TYPE_2__ {struct lsm_network_audit* net; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,scalar_t__,int ,struct common_audit_data*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,int,int ) ;
 int FUNC_4 (struct sk_buff*,struct common_audit_data*,char**,int,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,scalar_t__,int *) ;
 int FUNC_9 (struct sock*,struct sk_buff*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_9, struct sk_buff *VAR_10)
{
 int VAR_11;
 struct sk_security_struct *VAR_12 = VAR_9->sk_security;
 u16 VAR_13 = VAR_9->sk_family;
 u32 VAR_14 = VAR_12->sid;
 struct common_audit_data VAR_15;
 struct lsm_network_audit VAR_16 = {0,};
 char *VAR_17;
 u8 VAR_18;
 u8 VAR_19;

 if (VAR_13 != VAR_4 && VAR_13 != VAR_5)
  return 0;


 if (VAR_13 == VAR_5 && VAR_10->protocol == FUNC_1(VAR_0))
  VAR_13 = VAR_4;





 if (!FUNC_6())
  return FUNC_9(VAR_9, VAR_10, VAR_13);

 VAR_18 = FUNC_7();
 VAR_19 = FUNC_5();
 if (!VAR_18 && !VAR_19)
  return 0;

 VAR_15.type = VAR_1;
 VAR_15.u.net = &VAR_16;
 VAR_15.u.net->netif = VAR_10->skb_iif;
 VAR_15.u.net->family = VAR_13;
 VAR_11 = FUNC_4(VAR_10, &VAR_15, &VAR_17, 1, ((void*)0));
 if (VAR_11)
  return VAR_11;

 if (VAR_19) {
  u32 VAR_20;

  VAR_11 = FUNC_8(VAR_10, VAR_13, &VAR_20);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_2(FUNC_10(VAR_9), VAR_10->skb_iif,
            VAR_17, VAR_13, VAR_20, &VAR_15);
  if (VAR_11) {
   FUNC_3(VAR_10, VAR_13, VAR_11, 0);
   return VAR_11;
  }
  VAR_11 = FUNC_0(&VAR_8,
       VAR_14, VAR_20, VAR_7,
       VAR_3, &VAR_15);
  if (VAR_11) {
   FUNC_3(VAR_10, VAR_13, VAR_11, 0);
   return VAR_11;
  }
 }

 if (VAR_18) {
  VAR_11 = FUNC_0(&VAR_8,
       VAR_14, VAR_10->secmark, VAR_6,
       VAR_2, &VAR_15);
  if (VAR_11)
   return VAR_11;
 }

 return VAR_11;
}
