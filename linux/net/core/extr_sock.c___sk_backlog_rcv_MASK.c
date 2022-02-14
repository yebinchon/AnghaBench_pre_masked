
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_backlog_rcv ) (struct sock*,struct sk_buff*) ;} ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;

int FUNC_5(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;


 FUNC_0(!FUNC_3(VAR_1, VAR_0));

 VAR_4 = FUNC_2();
 VAR_3 = VAR_1->sk_backlog_rcv(VAR_1, VAR_2);
 FUNC_1(VAR_4);

 return VAR_3;
}
