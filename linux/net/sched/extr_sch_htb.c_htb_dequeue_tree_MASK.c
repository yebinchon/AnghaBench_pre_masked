
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct htb_sched {int* row_mask; struct htb_level* hlevel; } ;
struct htb_prio {int ptr; } ;
struct htb_level {struct htb_prio* hprio; } ;
struct TYPE_12__ {scalar_t__* deficit; TYPE_6__* q; } ;
struct htb_class {scalar_t__ quantum; TYPE_5__ leaf; TYPE_3__* parent; int bstats; } ;
struct TYPE_11__ {scalar_t__ qlen; } ;
struct TYPE_13__ {TYPE_4__ q; struct sk_buff* (* dequeue ) (TYPE_6__*) ;} ;
struct TYPE_9__ {TYPE_1__* clprio; } ;
struct TYPE_10__ {TYPE_2__ inner; } ;
struct TYPE_8__ {int ptr; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct htb_sched*,struct htb_class*,int const,struct sk_buff*) ;
 int FUNC_2 (struct htb_sched*,struct htb_class*) ;
 struct htb_class* FUNC_3 (struct htb_prio*,int const) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*,TYPE_6__*) ;
 struct sk_buff* FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct htb_sched *VAR_0, const int VAR_1,
     const int VAR_2)
{
 struct sk_buff *VAR_3 = ((void*)0);
 struct htb_class *VAR_4, *VAR_5;
 struct htb_level *VAR_6 = &VAR_0->hlevel[VAR_2];
 struct htb_prio *VAR_7 = &VAR_6->hprio[VAR_1];


 VAR_5 = VAR_4 = FUNC_3(VAR_7, VAR_1);

 do {
next:
  if (FUNC_9(!VAR_4))
   return ((void*)0);






  if (FUNC_9(VAR_4->leaf.q->q.qlen == 0)) {
   struct htb_class *VAR_8;
   FUNC_2(VAR_0, VAR_4);


   if ((VAR_0->row_mask[VAR_2] & (1 << VAR_1)) == 0)
    return ((void*)0);

   VAR_8 = FUNC_3(VAR_7, VAR_1);

   if (VAR_4 == VAR_5)
    VAR_5 = VAR_8;
   VAR_4 = VAR_8;
   goto next;
  }

  VAR_3 = VAR_4->leaf.q->dequeue(VAR_4->leaf.q);
  if (FUNC_5(VAR_3 != ((void*)0)))
   break;

  FUNC_7("htb", VAR_4->leaf.q);
  FUNC_4(VAR_2 ? &VAR_4->parent->inner.clprio[VAR_1].ptr:
      &VAR_0->hlevel[0].hprio[VAR_1].ptr);
  VAR_4 = FUNC_3(VAR_7, VAR_1);

 } while (VAR_4 != VAR_5);

 if (FUNC_5(VAR_3 != ((void*)0))) {
  FUNC_0(&VAR_4->bstats, VAR_3);
  VAR_4->leaf.deficit[VAR_2] -= FUNC_6(VAR_3);
  if (VAR_4->leaf.deficit[VAR_2] < 0) {
   VAR_4->leaf.deficit[VAR_2] += VAR_4->quantum;
   FUNC_4(VAR_2 ? &VAR_4->parent->inner.clprio[VAR_1].ptr :
       &VAR_0->hlevel[0].hprio[VAR_1].ptr);
  }



  if (!VAR_4->leaf.q->q.qlen)
   FUNC_2(VAR_0, VAR_4);
  FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
 }
 return VAR_3;
}
