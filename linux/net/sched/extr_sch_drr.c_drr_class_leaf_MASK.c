
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drr_class {struct Qdisc* qdisc; } ;
struct Qdisc {int dummy; } ;



__attribute__((used)) static struct Qdisc *FUNC_0(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct drr_class *VAR_2 = (struct drr_class *)VAR_1;

 return VAR_2->qdisc;
}
