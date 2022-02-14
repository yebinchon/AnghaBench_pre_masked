
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ rcv_nxt; int bytes_received; } ;
struct sock {int dummy; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct tcp_sock *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_1 - VAR_0->rcv_nxt;

 FUNC_1((struct sock *)VAR_0);
 VAR_0->bytes_received += VAR_2;
 FUNC_0(VAR_0->rcv_nxt, VAR_1);
}
