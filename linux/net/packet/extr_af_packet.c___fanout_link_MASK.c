
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct packet_sock {struct packet_fanout* fanout; } ;
struct packet_fanout {size_t num_members; int lock; int prot_hook; struct sock** arr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0, struct packet_sock *VAR_1)
{
 struct packet_fanout *VAR_2 = VAR_1->fanout;

 FUNC_2(&VAR_2->lock);
 VAR_2->arr[VAR_2->num_members] = VAR_0;
 FUNC_1();
 VAR_2->num_members++;
 if (VAR_2->num_members == 1)
  FUNC_0(&VAR_2->prot_hook);
 FUNC_3(&VAR_2->lock);
}
