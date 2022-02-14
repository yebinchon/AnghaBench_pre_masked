
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct packet_sock {int bind_lock; int prot_hook; scalar_t__ fanout; scalar_t__ running; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,struct packet_sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 struct packet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_0, bool VAR_1)
{
 struct packet_sock *VAR_2 = FUNC_4(VAR_0);

 FUNC_3(&VAR_2->bind_lock);

 VAR_2->running = 0;

 if (VAR_2->fanout)
  FUNC_1(VAR_0, VAR_2);
 else
  FUNC_0(&VAR_2->prot_hook);

 FUNC_2(VAR_0);

 if (VAR_1) {
  FUNC_6(&VAR_2->bind_lock);
  FUNC_7();
  FUNC_5(&VAR_2->bind_lock);
 }
}
