
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sctp_sock {int hmac; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 struct sctp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct sctp_sock *VAR_1 = FUNC_2(VAR_0);


 FUNC_0(VAR_1->hmac);

 FUNC_1(VAR_0);
}
