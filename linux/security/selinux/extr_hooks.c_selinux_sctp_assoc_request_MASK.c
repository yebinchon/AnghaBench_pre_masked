
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_security_struct {scalar_t__ sctp_assoc_state; scalar_t__ peer_sid; int sid; int sclass; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {TYPE_2__* sk; } ;
struct sctp_endpoint {scalar_t__ peer_secid; scalar_t__ secid; TYPE_3__ base; } ;
struct lsm_network_audit {TYPE_2__* sk; int member_0; } ;
struct TYPE_4__ {struct lsm_network_audit* net; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;
struct TYPE_5__ {int sk_family; struct sk_security_struct* sk_security; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct sctp_endpoint*,struct sk_buff*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*,int ,scalar_t__*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct sctp_endpoint *VAR_7,
          struct sk_buff *VAR_8)
{
 struct sk_security_struct *VAR_9 = VAR_7->base.sk->sk_security;
 struct common_audit_data VAR_10;
 struct lsm_network_audit VAR_11 = {0,};
 u8 VAR_12;
 u32 VAR_13 = VAR_4;
 u32 VAR_14;
 int VAR_15 = 0;

 if (!FUNC_4())
  return 0;

 VAR_12 = FUNC_3();

 if (VAR_12) {



  VAR_15 = FUNC_5(VAR_8, VAR_7->base.sk->sk_family,
           &VAR_13);
  if (VAR_15)
   return VAR_15;

  if (VAR_13 == VAR_5)
   VAR_13 = VAR_4;
 }

 if (VAR_9->sctp_assoc_state == VAR_2) {
  VAR_9->sctp_assoc_state = VAR_1;






  VAR_9->peer_sid = VAR_13;
 } else if (VAR_9->peer_sid != VAR_13) {



  VAR_10.type = VAR_0;
  VAR_10.u.net = &VAR_11;
  VAR_10.u.net->sk = VAR_7->base.sk;
  VAR_15 = FUNC_0(&VAR_6,
       VAR_9->peer_sid, VAR_13, VAR_9->sclass,
       VAR_3, &VAR_10);
  if (VAR_15)
   return VAR_15;
 }







 VAR_15 = FUNC_1(VAR_9->sid, VAR_13, &VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_7->secid = VAR_14;
 VAR_7->peer_secid = VAR_13;


 return FUNC_2(VAR_7, VAR_8);
}
