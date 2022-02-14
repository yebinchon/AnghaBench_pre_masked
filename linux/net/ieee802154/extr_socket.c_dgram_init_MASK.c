
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dgram_sock {int want_ack; scalar_t__ want_lqi; } ;


 struct dgram_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_0)
{
 struct dgram_sock *VAR_1 = FUNC_0(VAR_0);

 VAR_1->want_ack = 1;
 VAR_1->want_lqi = 0;
 return 0;
}
