
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fq_flow {int qlen; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 (struct Qdisc*,struct fq_flow*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct fq_flow*) ;
 int FUNC_2 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct Qdisc *VAR_0, struct fq_flow *VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_3(VAR_2);
  VAR_1->qlen--;
  FUNC_2(VAR_0, VAR_2);
  VAR_0->q.qlen--;
 }
 return VAR_2;
}
