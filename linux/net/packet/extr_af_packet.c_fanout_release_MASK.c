
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct packet_sock {struct packet_fanout* fanout; } ;
struct packet_fanout {int list; int sk_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct packet_sock* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static struct packet_fanout *FUNC_5(struct sock *VAR_1)
{
 struct packet_sock *VAR_2 = FUNC_3(VAR_1);
 struct packet_fanout *VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = VAR_2->fanout;
 if (VAR_3) {
  VAR_2->fanout = ((void*)0);

  if (FUNC_4(&VAR_3->sk_ref))
   FUNC_0(&VAR_3->list);
  else
   VAR_3 = ((void*)0);
 }
 FUNC_2(&VAR_0);

 return VAR_3;
}
