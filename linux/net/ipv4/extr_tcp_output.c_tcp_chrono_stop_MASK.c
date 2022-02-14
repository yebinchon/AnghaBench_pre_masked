
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int const chrono_type; } ;
struct sock {int dummy; } ;
typedef enum tcp_chrono { ____Placeholder_tcp_chrono } tcp_chrono ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcp_sock*,int ) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

void FUNC_3(struct sock *VAR_2, const enum tcp_chrono VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_2(VAR_2);
 if (FUNC_1(VAR_2))
  FUNC_0(VAR_4, VAR_1);
 else if (VAR_3 == VAR_4->chrono_type)
  FUNC_0(VAR_4, VAR_0);
}
