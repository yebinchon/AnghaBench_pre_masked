
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int write_queue; int ack_queue; } ;
typedef TYPE_1__ ax25_cb ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;

void FUNC_2(ax25_cb *VAR_0)
{
 struct sk_buff *VAR_1;






 while ((VAR_1 = FUNC_0(&VAR_0->ack_queue)) != ((void*)0))
  FUNC_1(&VAR_0->write_queue, VAR_1);
}
