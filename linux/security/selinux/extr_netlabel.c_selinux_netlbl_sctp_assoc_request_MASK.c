
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; int sin6_family; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sk_security_struct {int nlbl_state; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {TYPE_3__* sk; } ;
struct sctp_endpoint {TYPE_2__ base; int secid; } ;
struct netlbl_lsm_secattr {int dummy; } ;
struct TYPE_10__ {int version; int saddr; } ;
struct TYPE_9__ {int saddr; } ;
struct TYPE_8__ {scalar_t__ sk_family; struct sk_security_struct* sk_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_1 (struct sk_buff*) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_3__*,void*,struct netlbl_lsm_secattr*) ;
 int FUNC_4 (struct netlbl_lsm_secattr*) ;
 int FUNC_5 (struct netlbl_lsm_secattr*) ;
 int FUNC_6 (int *,int ,struct netlbl_lsm_secattr*) ;
 int VAR_7 ;

int FUNC_7(struct sctp_endpoint *VAR_8,
         struct sk_buff *VAR_9)
{
 int VAR_10;
 struct netlbl_lsm_secattr VAR_11;
 struct sk_security_struct *VAR_12 = VAR_8->base.sk->sk_security;
 struct sockaddr_in VAR_13;
 struct sockaddr_in6 VAR_14;

 if (VAR_8->base.sk->sk_family != VAR_5 &&
    VAR_8->base.sk->sk_family != VAR_6)
  return 0;

 FUNC_5(&VAR_11);
 VAR_10 = FUNC_6(&VAR_7,
         VAR_8->secid, &VAR_11);
 if (VAR_10 != 0)
  goto assoc_request_return;




 if (FUNC_1(VAR_9)->version == 4) {
  VAR_13 = VAR_0;
  VAR_13 = FUNC_1(VAR_9)->saddr;
  VAR_10 = FUNC_3(VAR_8->base.sk, (void *)&VAR_13, &VAR_11);
 } else if (FUNC_0(VAR_2) && FUNC_1(VAR_9)->version == 6) {
  VAR_14 = VAR_1;
  VAR_14 = FUNC_2(VAR_9)->saddr;
  VAR_10 = FUNC_3(VAR_8->base.sk, (void *)&VAR_14, &VAR_11);
 } else {
  VAR_10 = -VAR_3;
 }

 if (VAR_10 == 0)
  VAR_12->nlbl_state = VAR_4;

assoc_request_return:
 FUNC_4(&VAR_11);
 return VAR_10;
}
