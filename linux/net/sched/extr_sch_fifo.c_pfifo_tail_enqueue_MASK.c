
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {unsigned int backlog; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct Qdisc {scalar_t__ limit; TYPE_1__ qstats; TYPE_2__ q; } ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*,TYPE_2__*,struct sk_buff**) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct Qdisc *VAR_2,
         struct sk_buff **VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_1(VAR_2->q.qlen < VAR_2->limit))
  return FUNC_2(VAR_1, VAR_2);

 VAR_4 = VAR_2->qstats.backlog;

 FUNC_0(VAR_2, &VAR_2->q, VAR_3);
 FUNC_3(VAR_2);
 FUNC_2(VAR_1, VAR_2);

 FUNC_4(VAR_2, 0, VAR_4 - VAR_2->qstats.backlog);
 return VAR_0;
}
