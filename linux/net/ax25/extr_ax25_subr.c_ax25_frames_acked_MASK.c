
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {unsigned short va; int modulus; int ack_queue; } ;
typedef TYPE_1__ ax25_cb ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

void FUNC_3(ax25_cb *VAR_0, unsigned short VAR_1)
{
 struct sk_buff *VAR_2;




 if (VAR_0->va != VAR_1) {
  while (FUNC_2(&VAR_0->ack_queue) != ((void*)0) && VAR_0->va != VAR_1) {
   VAR_2 = FUNC_1(&VAR_0->ack_queue);
   FUNC_0(VAR_2);
   VAR_0->va = (VAR_0->va + 1) % VAR_0->modulus;
  }
 }
}
