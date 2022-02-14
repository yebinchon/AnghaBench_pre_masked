
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_sock {unsigned short va; int ack_queue; TYPE_1__* neighbour; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct x25_sock* FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_2, unsigned short VAR_3)
{
 struct sk_buff *VAR_4;
 struct x25_sock *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = VAR_5->neighbour->extended ? VAR_0 : VAR_1;




 if (VAR_5->va != VAR_3)
  while (FUNC_2(&VAR_5->ack_queue) && VAR_5->va != VAR_3) {
   VAR_4 = FUNC_1(&VAR_5->ack_queue);
   FUNC_0(VAR_4);
   VAR_5->va = (VAR_5->va + 1) % VAR_6;
  }
}
