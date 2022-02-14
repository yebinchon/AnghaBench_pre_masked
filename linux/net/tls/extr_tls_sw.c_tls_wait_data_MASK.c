
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_rx {struct sk_buff* recv_pkt; } ;
struct tls_context {int dummy; } ;
struct sock {int sk_shutdown; scalar_t__ sk_err; } ;
struct sk_psock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sock*) ;
 scalar_t__ FUNC_5 (struct sk_psock*) ;
 int FUNC_6 (int ,struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,long*,int,int *) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (long) ;
 struct tls_context* FUNC_12 (struct sock*) ;
 struct tls_sw_context_rx* FUNC_13 (struct tls_context*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct sk_buff *FUNC_14(struct sock *VAR_8, struct sk_psock *VAR_9,
         int VAR_10, long VAR_11, int *VAR_12)
{
 struct tls_context *VAR_13 = FUNC_12(VAR_8);
 struct tls_sw_context_rx *VAR_14 = FUNC_13(VAR_13);
 struct sk_buff *VAR_15;
 FUNC_0(VAR_6, VAR_7);

 while (!(VAR_15 = VAR_14->recv_pkt) && FUNC_5(VAR_9)) {
  if (VAR_8->sk_err) {
   *VAR_12 = FUNC_9(VAR_8);
   return ((void*)0);
  }

  if (VAR_8->sk_shutdown & VAR_2)
   return ((void*)0);

  if (FUNC_10(VAR_8, VAR_4))
   return ((void*)0);

  if ((VAR_10 & VAR_1) || !VAR_11) {
   *VAR_12 = -VAR_0;
   return ((void*)0);
  }

  FUNC_1(FUNC_7(VAR_8), &VAR_6);
  FUNC_6(VAR_3, VAR_8);
  FUNC_8(VAR_8, &VAR_11,
         VAR_14->recv_pkt != VAR_15 ||
         !FUNC_5(VAR_9),
         &VAR_6);
  FUNC_4(VAR_3, VAR_8);
  FUNC_2(FUNC_7(VAR_8), &VAR_6);


  if (FUNC_3(VAR_5)) {
   *VAR_12 = FUNC_11(VAR_11);
   return ((void*)0);
  }
 }

 return VAR_15;
}
