
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lapb_cb {int mode; unsigned short va; int ack_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct lapb_cb *VAR_3, unsigned short VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_6 = (VAR_3->mode & VAR_1) ? VAR_0 : VAR_2;




 if (VAR_3->va != VAR_4)
  while (FUNC_2(&VAR_3->ack_queue) && VAR_3->va != VAR_4) {
   VAR_5 = FUNC_1(&VAR_3->ack_queue);
   FUNC_0(VAR_5);
   VAR_3->va = (VAR_3->va + 1) % VAR_6;
  }
}
