
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cbq_sched_data {int dummy; } ;
struct cbq_class {scalar_t__ level; int filters; } ;
struct Qdisc {int dummy; } ;


 struct cbq_class* FUNC_0 (struct cbq_sched_data*,int ) ;
 struct cbq_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static unsigned long FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1,
         u32 VAR_2)
{
 struct cbq_sched_data *VAR_3 = FUNC_1(VAR_0);
 struct cbq_class *VAR_4 = (struct cbq_class *)VAR_1;
 struct cbq_class *VAR_5 = FUNC_0(VAR_3, VAR_2);

 if (VAR_5) {
  if (VAR_4 && VAR_4->level <= VAR_5->level)
   return 0;
  VAR_5->filters++;
  return (unsigned long)VAR_5;
 }
 return 0;
}
