
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_reuseport_cb; } ;
struct sctp_hashbucket {int lock; } ;
struct TYPE_2__ {int port; } ;
struct sctp_ep_common {size_t hashent; int node; TYPE_1__ bind_addr; struct sock* sk; } ;
struct sctp_endpoint {struct sctp_ep_common base; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 size_t FUNC_3 (int ,int ) ;
 struct sctp_hashbucket* VAR_0 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sctp_endpoint *VAR_1)
{
 struct sock *VAR_2 = VAR_1->base.sk;
 struct sctp_hashbucket *VAR_3;
 struct sctp_ep_common *VAR_4;

 VAR_4 = &VAR_1->base;

 VAR_4->hashent = FUNC_3(FUNC_4(VAR_2), VAR_4->bind_addr.port);

 VAR_3 = &VAR_0[VAR_4->hashent];

 if (FUNC_1(VAR_2->sk_reuseport_cb))
  FUNC_2(VAR_2);

 FUNC_5(&VAR_3->lock);
 FUNC_0(&VAR_4->node);
 FUNC_6(&VAR_3->lock);
}
