
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rx_errors; } ;
struct l2tp_session {scalar_t__ magic; TYPE_1__ stats; int reorder_q; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct l2tp_session *VAR_1)
{
 struct sk_buff *VAR_2 = ((void*)0);
 FUNC_0(!VAR_1);
 FUNC_0(VAR_1->magic != VAR_0);
 while ((VAR_2 = FUNC_3(&VAR_1->reorder_q))) {
  FUNC_1(&VAR_1->stats.rx_errors);
  FUNC_2(VAR_2);
 }
 return 0;
}
