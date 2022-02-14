
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_sched_data {int toplevel; } ;
struct cbq_class {int level; scalar_t__ undertime; struct cbq_class* borrow; } ;
typedef scalar_t__ psched_time_t ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct cbq_sched_data *VAR_0, struct cbq_class *VAR_1)
{
 int VAR_2 = VAR_0->toplevel;

 if (VAR_2 > VAR_1->level) {
  psched_time_t VAR_3 = FUNC_0();

  do {
   if (VAR_1->undertime < VAR_3) {
    VAR_0->toplevel = VAR_1->level;
    return;
   }
  } while ((VAR_1 = VAR_1->borrow) != ((void*)0) && VAR_2 > VAR_1->level);
 }
}
