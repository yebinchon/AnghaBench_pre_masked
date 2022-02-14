
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_class {int filters; } ;
struct Qdisc {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct cbq_class *VAR_2 = (struct cbq_class *)VAR_1;

 VAR_2->filters--;
}
