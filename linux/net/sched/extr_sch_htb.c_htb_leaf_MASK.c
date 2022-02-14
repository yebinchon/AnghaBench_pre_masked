
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct Qdisc* q; } ;
struct htb_class {TYPE_1__ leaf; int level; } ;
struct Qdisc {int dummy; } ;



__attribute__((used)) static struct Qdisc *FUNC_0(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct htb_class *VAR_2 = (struct htb_class *)VAR_1;
 return !VAR_2->level ? VAR_2->leaf.q : ((void*)0);
}
