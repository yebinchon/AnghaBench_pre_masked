
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_error_report ) (struct sock*) ;int sk_error_queue; int sk_rmem_alloc; int sk_rcvbuf; } ;
struct sk_buff {unsigned int truesize; int destructor; struct sock* sk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*,int ) ;
 int VAR_2 ;
 int FUNC_8 (struct sock*) ;

int FUNC_9(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 if (FUNC_2(&VAR_3->sk_rmem_alloc) + VAR_4->truesize >=
     (unsigned int)FUNC_0(VAR_3->sk_rcvbuf))
  return -VAR_0;

 FUNC_4(VAR_4);
 VAR_4->sk = VAR_3;
 VAR_4->destructor = VAR_2;
 FUNC_1(VAR_4->truesize, &VAR_3->sk_rmem_alloc);
 FUNC_6(VAR_4);


 FUNC_3(VAR_4);

 FUNC_5(&VAR_3->sk_error_queue, VAR_4);
 if (!FUNC_7(VAR_3, VAR_1))
  VAR_3->sk_error_report(VAR_3);
 return 0;
}
