
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_rmem_alloc; } ;
struct sk_buff {struct sock* sk; } ;
struct sctp_ulpevent {int rmem_len; } ;


 int FUNC_0 (int ,int *) ;
 struct sctp_ulpevent* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,int ) ;

void FUNC_3(struct sk_buff *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;
 struct sctp_ulpevent *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->rmem_len, &VAR_1->sk_rmem_alloc);




 FUNC_2(VAR_1, VAR_2->rmem_len);
}
