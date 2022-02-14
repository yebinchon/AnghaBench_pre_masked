
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_max_ack_backlog; } ;
struct sctp_sock {char* sctp_hmac_alg; struct crypto_shash* hmac; struct sctp_endpoint* ep; } ;
struct TYPE_4__ {int port; } ;
struct TYPE_5__ {TYPE_1__ bind_addr; } ;
struct sctp_endpoint {TYPE_2__ base; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_6__ {int inet_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct crypto_shash* FUNC_2 (char*,int ,int ) ;
 TYPE_3__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (char*,char*,int ) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sctp_endpoint*) ;
 struct sctp_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_5, int VAR_6)
{
 struct sctp_sock *VAR_7 = FUNC_9(VAR_5);
 struct sctp_endpoint *VAR_8 = VAR_7->ep;
 struct crypto_shash *VAR_9 = ((void*)0);
 char VAR_10[32];


 if (!VAR_7->hmac && VAR_7->sctp_hmac_alg) {
  FUNC_10(VAR_10, "hmac(%s)", VAR_7->sctp_hmac_alg);
  VAR_9 = FUNC_2(VAR_10, 0, 0);
  if (FUNC_0(VAR_9)) {
   FUNC_5("failed to load transform for %s: %ld\n",
          VAR_7->sctp_hmac_alg, FUNC_1(VAR_9));
   return -VAR_2;
  }
  FUNC_9(VAR_5)->hmac = VAR_9;
 }
 FUNC_4(VAR_5, VAR_4);
 if (!VAR_8->base.bind_addr.port) {
  if (FUNC_6(VAR_5))
   return -VAR_1;
 } else {
  if (FUNC_7(VAR_5, FUNC_3(VAR_5)->inet_num)) {
   FUNC_4(VAR_5, VAR_3);
   return -VAR_0;
  }
 }

 VAR_5->sk_max_ack_backlog = VAR_6;
 return FUNC_8(VAR_8);
}
