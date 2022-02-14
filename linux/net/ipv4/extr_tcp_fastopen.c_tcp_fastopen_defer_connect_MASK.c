
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tcp_sock {TYPE_1__* fastopen_req; scalar_t__ fastopen_connect; } ;
struct tcp_fastopen_cookie {int len; } ;
struct sock {int sk_allocation; } ;
struct TYPE_4__ {int defer_connect; } ;
struct TYPE_3__ {struct tcp_fastopen_cookie cookie; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct sock*,int *,struct tcp_fastopen_cookie*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

bool FUNC_4(struct sock *VAR_1, int *VAR_2)
{
 struct tcp_fastopen_cookie VAR_3 = { .len = 0 };
 struct tcp_sock *VAR_4 = FUNC_3(VAR_1);
 u16 VAR_5;

 if (VAR_4->fastopen_connect && !VAR_4->fastopen_req) {
  if (FUNC_2(VAR_1, &VAR_5, &VAR_3)) {
   FUNC_0(VAR_1)->defer_connect = 1;
   return 1;
  }




  VAR_4->fastopen_req = FUNC_1(sizeof(*VAR_4->fastopen_req),
        VAR_1->sk_allocation);
  if (VAR_4->fastopen_req)
   VAR_4->fastopen_req->cookie = VAR_3;
  else
   *VAR_2 = -VAR_0;
 }
 return 0;
}
