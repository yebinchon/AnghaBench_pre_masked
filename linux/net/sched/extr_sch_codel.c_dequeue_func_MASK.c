
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int end; } ;
struct codel_vars {int dummy; } ;
struct TYPE_2__ {int backlog; } ;
struct Qdisc {TYPE_1__ qstats; int q; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct codel_vars *VAR_0, void *VAR_1)
{
 struct Qdisc *VAR_2 = VAR_1;
 struct sk_buff *VAR_3 = FUNC_0(&VAR_2->q);

 if (VAR_3) {
  VAR_2->qstats.backlog -= FUNC_2(VAR_3);
  FUNC_1(&VAR_3->end);
 }
 return VAR_3;
}
