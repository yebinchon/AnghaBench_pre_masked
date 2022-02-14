
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct TYPE_6__ {unsigned long qlen; int lock; } ;
struct TYPE_5__ {unsigned long expires; } ;
struct neigh_table {TYPE_3__ proxy_queue; TYPE_1__ proxy_timer; } ;
struct neigh_parms {int dummy; } ;
struct TYPE_7__ {unsigned long sched_next; int flags; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 unsigned long FUNC_1 (struct neigh_parms*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 unsigned long VAR_3 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (TYPE_1__*,unsigned long) ;
 unsigned long FUNC_7 () ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (unsigned long,unsigned long) ;

void FUNC_12(struct neigh_table *VAR_4, struct neigh_parms *VAR_5,
      struct sk_buff *VAR_6)
{
 unsigned long VAR_7 = VAR_3;

 unsigned long VAR_8 = VAR_7 + (FUNC_7() %
       FUNC_1(VAR_5, VAR_1));

 if (VAR_4->proxy_queue.qlen > FUNC_1(VAR_5, VAR_2)) {
  FUNC_5(VAR_6);
  return;
 }

 FUNC_0(VAR_6)->sched_next = VAR_8;
 FUNC_0(VAR_6)->flags |= VAR_0;

 FUNC_9(&VAR_4->proxy_queue.lock);
 if (FUNC_3(&VAR_4->proxy_timer)) {
  if (FUNC_11(VAR_4->proxy_timer.expires, VAR_8))
   VAR_8 = VAR_4->proxy_timer.expires;
 }
 FUNC_8(VAR_6);
 FUNC_4(VAR_6->dev);
 FUNC_2(&VAR_4->proxy_queue, VAR_6);
 FUNC_6(&VAR_4->proxy_timer, VAR_8);
 FUNC_10(&VAR_4->proxy_queue.lock);
}
