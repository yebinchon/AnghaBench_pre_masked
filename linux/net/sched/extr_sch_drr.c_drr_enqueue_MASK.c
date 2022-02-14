
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct drr_sched {int active; } ;
struct TYPE_7__ {int drops; } ;
struct drr_class {int quantum; int deficit; int alist; TYPE_2__ qstats; TYPE_5__* qdisc; } ;
struct TYPE_9__ {int qlen; } ;
struct TYPE_8__ {unsigned int backlog; } ;
struct Qdisc {TYPE_4__ q; TYPE_3__ qstats; } ;
struct TYPE_6__ {int qlen; } ;
struct TYPE_10__ {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff**) ;
 struct drr_class* FUNC_1 (struct sk_buff*,struct Qdisc*,int*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,TYPE_5__*,struct sk_buff**) ;
 unsigned int FUNC_5 (struct sk_buff*) ;
 struct drr_sched* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2, struct Qdisc *VAR_3,
         struct sk_buff **VAR_4)
{
 unsigned int VAR_5 = FUNC_5(VAR_2);
 struct drr_sched *VAR_6 = FUNC_6(VAR_3);
 struct drr_class *VAR_7;
 int VAR_8 = 0;
 bool VAR_9;

 VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_8);
 if (VAR_7 == ((void*)0)) {
  if (VAR_8 & VAR_1)
   FUNC_7(VAR_3);
  FUNC_0(VAR_2, VAR_4);
  return VAR_8;
 }

 VAR_9 = !VAR_7->qdisc->q.qlen;
 VAR_8 = FUNC_4(VAR_2, VAR_7->qdisc, VAR_4);
 if (FUNC_8(VAR_8 != VAR_0)) {
  if (FUNC_3(VAR_8)) {
   VAR_7->qstats.drops++;
   FUNC_7(VAR_3);
  }
  return VAR_8;
 }

 if (VAR_9) {
  FUNC_2(&VAR_7->alist, &VAR_6->active);
  VAR_7->deficit = VAR_7->quantum;
 }

 VAR_3->qstats.backlog += VAR_5;
 VAR_3->q.qlen++;
 return VAR_8;
}
