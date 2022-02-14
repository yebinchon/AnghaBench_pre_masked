
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct packet_sock {scalar_t__ running; } ;


 int FUNC_0 (struct sock*,int) ;
 struct packet_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, bool VAR_1)
{
 struct packet_sock *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->running)
  FUNC_0(VAR_0, VAR_1);
}
