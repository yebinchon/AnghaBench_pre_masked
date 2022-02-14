
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,unsigned int,struct qdisc_walker*) ;} ;
struct Qdisc {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct Qdisc*,unsigned int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_1(struct Qdisc *VAR_1, struct qdisc_walker *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->stop)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->count < VAR_2->skip) {
   VAR_2->count++;
   continue;
  }
  if (VAR_2->fn(VAR_1, VAR_3 + 1, VAR_2) < 0) {
   VAR_2->stop = 1;
   break;
  }
  VAR_2->count++;
 }
}
