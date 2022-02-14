
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_fastopen_cookie {int dummy; } ;
struct tcp_fastopen_context {int * key; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;


 int FUNC_0 (struct request_sock*,struct sk_buff*,int *,struct tcp_fastopen_cookie*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct tcp_fastopen_context* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0,
        struct request_sock *VAR_1,
        struct sk_buff *VAR_2,
        struct tcp_fastopen_cookie *VAR_3)
{
 struct tcp_fastopen_context *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_3(VAR_0);
 if (VAR_4)
  FUNC_0(VAR_1, VAR_2, &VAR_4->key[0], VAR_3);
 FUNC_2();
}
