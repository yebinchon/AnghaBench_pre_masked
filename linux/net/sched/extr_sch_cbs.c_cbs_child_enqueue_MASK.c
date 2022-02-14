
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {int qlen; } ;
struct TYPE_5__ {unsigned int backlog; } ;
struct Qdisc {TYPE_3__ q; TYPE_2__ qstats; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* enqueue ) (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct Qdisc *VAR_2,
        struct Qdisc *VAR_3,
        struct sk_buff **VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 VAR_6 = VAR_3->ops->enqueue(VAR_1, VAR_3, VAR_4);
 if (VAR_6 != VAR_0)
  return VAR_6;

 VAR_2->qstats.backlog += VAR_5;
 VAR_2->q.qlen++;

 return VAR_0;
}
