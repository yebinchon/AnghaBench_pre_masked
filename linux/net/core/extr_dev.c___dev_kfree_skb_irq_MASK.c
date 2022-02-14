
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int next; int users; } ;
typedef enum skb_free_reason { ____Placeholder_skb_free_reason } skb_free_reason ;
struct TYPE_4__ {int reason; } ;
struct TYPE_3__ {int completion_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct sk_buff *VAR_2, enum skb_free_reason VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_11(!VAR_2))
  return;

 if (FUNC_3(FUNC_8(&VAR_2->users) == 1)) {
  FUNC_10();
  FUNC_9(&VAR_2->users, 0);
 } else if (FUNC_3(!FUNC_7(&VAR_2->users))) {
  return;
 }
 FUNC_2(VAR_2)->reason = VAR_3;
 FUNC_5(VAR_4);
 VAR_2->next = FUNC_0(VAR_1.completion_queue);
 FUNC_1(VAR_1.completion_queue, VAR_2);
 FUNC_6(VAR_0);
 FUNC_4(VAR_4);
}
