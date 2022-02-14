
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int bfactor; int boffset; int maxq; int minq; TYPE_1__* led; } ;
typedef TYPE_2__ rule_t ;
struct TYPE_4__ {int sysfspath; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;

void FUNC_1(rule_t *VAR_1)
{
 rule_t *VAR_2 = VAR_1;
 while (VAR_2)
 {
  FUNC_0(VAR_0, " %s r: %d..%d, o: %d, f: %d\n",
   VAR_2->led->sysfspath,
   VAR_2->minq, VAR_2->maxq,
   VAR_2->boffset, VAR_2->bfactor);
  VAR_2 = VAR_2->next;
 }
}
