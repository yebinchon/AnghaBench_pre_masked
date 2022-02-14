
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {struct sock* sk; int bind_addr; int inqueue; int dead; } ;
struct sctp_endpoint {TYPE_1__ base; int secret_key; int endpoint_shared_keys; struct sctp_endpoint* digest; } ;
struct TYPE_4__ {int * ep; scalar_t__ bind_hash; } ;


 int FUNC_0 (struct sctp_endpoint*) ;
 int FUNC_1 (int,char*,struct sctp_endpoint*) ;
 int FUNC_2 (struct sctp_endpoint*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sctp_endpoint*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 TYPE_2__* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct sctp_endpoint *VAR_0)
{
 struct sock *VAR_1;

 if (FUNC_11(!VAR_0->base.dead)) {
  FUNC_1(1, "Attempt to destroy undead endpoint %p!\n", VAR_0);
  return;
 }


 FUNC_2(VAR_0->digest);




 FUNC_4(&VAR_0->endpoint_shared_keys);
 FUNC_5(VAR_0);


 FUNC_7(&VAR_0->base.inqueue);
 FUNC_6(&VAR_0->base.bind_addr);

 FUNC_3(VAR_0->secret_key, 0, sizeof(VAR_0->secret_key));

 VAR_1 = VAR_0->base.sk;

 if (FUNC_9(VAR_1)->bind_hash)
  FUNC_8(VAR_1);

 FUNC_9(VAR_1)->ep = ((void*)0);

 FUNC_10(VAR_1);

 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
}
