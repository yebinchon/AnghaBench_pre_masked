
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_fastopen_cookie {int len; } ;
struct tcp_fastopen_context {int * key; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;


 int FUNC_0 (struct request_sock*,struct sk_buff*,int *,struct tcp_fastopen_cookie*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct tcp_fastopen_context*) ;
 scalar_t__ FUNC_4 (struct tcp_fastopen_cookie*,struct tcp_fastopen_cookie*) ;
 struct tcp_fastopen_context* FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_0,
      struct request_sock *VAR_1,
      struct sk_buff *VAR_2,
      struct tcp_fastopen_cookie *VAR_3,
      struct tcp_fastopen_cookie *VAR_4)
{
 struct tcp_fastopen_cookie VAR_5 = { .len = -1 };
 struct tcp_fastopen_cookie *VAR_6 = VAR_4;
 struct tcp_fastopen_context *VAR_7;
 int VAR_8, VAR_9 = 0;

 FUNC_1();
 VAR_7 = FUNC_5(VAR_0);
 if (!VAR_7)
  goto out;
 for (VAR_8 = 0; VAR_8 < FUNC_3(VAR_7); VAR_8++) {
  FUNC_0(VAR_1, VAR_2, &VAR_7->key[VAR_8], VAR_6);
  if (FUNC_4(VAR_6, VAR_3)) {
   VAR_9 = VAR_8 + 1;
   goto out;
  }
  VAR_6 = &VAR_5;
 }
out:
 FUNC_2();
 return VAR_9;
}
