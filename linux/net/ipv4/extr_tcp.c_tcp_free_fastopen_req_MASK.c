
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int * fastopen_req; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct tcp_sock *VAR_0)
{
 if (VAR_0->fastopen_req) {
  FUNC_0(VAR_0->fastopen_req);
  VAR_0->fastopen_req = ((void*)0);
 }
}
