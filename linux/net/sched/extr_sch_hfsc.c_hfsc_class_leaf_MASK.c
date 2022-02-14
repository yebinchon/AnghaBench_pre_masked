
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {scalar_t__ level; struct Qdisc* qdisc; } ;
struct Qdisc {int dummy; } ;



__attribute__((used)) static struct Qdisc *
FUNC_0(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct hfsc_class *VAR_2 = (struct hfsc_class *)VAR_1;

 if (VAR_2->level == 0)
  return VAR_2->qdisc;

 return ((void*)0);
}
