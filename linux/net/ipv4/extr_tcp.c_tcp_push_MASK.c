
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int dummy; } ;
struct sock {int sk_wmem_alloc; int sk_tsq_flags; } ;
struct sk_buff {scalar_t__ truesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sock*,int,int) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*,struct sk_buff*) ;
 int FUNC_7 (struct tcp_sock*,int) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*,int) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;
 struct sk_buff* FUNC_10 (struct sock*) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct sock *VAR_4, int VAR_5, int VAR_6,
       int VAR_7, int VAR_8)
{
 struct tcp_sock *VAR_9 = FUNC_9(VAR_4);
 struct sk_buff *VAR_10;

 VAR_10 = FUNC_10(VAR_4);
 if (!VAR_10)
  return;
 if (!(VAR_5 & VAR_1) || FUNC_2(VAR_9))
  FUNC_6(VAR_9, VAR_10);

 FUNC_7(VAR_9, VAR_5);

 if (FUNC_8(VAR_4, VAR_10, VAR_8)) {


  if (!FUNC_11(VAR_3, &VAR_4->sk_tsq_flags)) {
   FUNC_0(FUNC_5(VAR_4), VAR_0);
   FUNC_4(VAR_3, &VAR_4->sk_tsq_flags);
  }



  if (FUNC_3(&VAR_4->sk_wmem_alloc) > VAR_10->truesize)
   return;
 }

 if (VAR_5 & VAR_1)
  VAR_7 = VAR_2;

 FUNC_1(VAR_4, VAR_6, VAR_7);
}
