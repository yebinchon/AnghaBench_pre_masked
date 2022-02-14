
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_sndbuf; } ;
struct TYPE_3__ {struct sock* sk; } ;
struct sctp_association {int sndbuf_used; TYPE_2__* ep; TYPE_1__ base; } ;
struct TYPE_4__ {scalar_t__ sndbuf_policy; } ;


 int FUNC_0 (struct sock*) ;

__attribute__((used)) static inline int FUNC_1(struct sctp_association *VAR_0)
{
 struct sock *VAR_1 = VAR_0->base.sk;

 return VAR_0->ep->sndbuf_policy ? VAR_1->sk_sndbuf - VAR_0->sndbuf_used
           : FUNC_0(VAR_1);
}
