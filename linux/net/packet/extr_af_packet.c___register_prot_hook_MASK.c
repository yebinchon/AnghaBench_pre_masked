
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct packet_sock {int running; int prot_hook; scalar_t__ fanout; } ;


 int FUNC_0 (struct sock*,struct packet_sock*) ;
 int FUNC_1 (int *) ;
 struct packet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 struct packet_sock *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->running) {
  if (VAR_1->fanout)
   FUNC_0(VAR_0, VAR_1);
  else
   FUNC_1(&VAR_1->prot_hook);

  FUNC_3(VAR_0);
  VAR_1->running = 1;
 }
}
