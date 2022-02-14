
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__* ops; } ;
struct TYPE_3__ {struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;


 int FUNC_0 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_1 (struct Qdisc*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct Qdisc *VAR_0, struct Qdisc *VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = VAR_1->ops->dequeue(VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_0, VAR_2);
 VAR_0->q.qlen--;

 return VAR_2;
}
