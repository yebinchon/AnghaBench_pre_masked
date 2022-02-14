
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clocksource {int mask; int mult; int maxadj; int max_idle_ns; int max_cycles; int name; int shift; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int*,int *,int,int,int) ;
 void* FUNC_2 (struct clocksource*) ;
 int FUNC_3 (struct clocksource*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,int ,scalar_t__,int ,int ) ;

void FUNC_6(struct clocksource *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u64 VAR_5;





 if (VAR_4) {
  VAR_5 = VAR_2->mask;
  FUNC_4(VAR_5, VAR_4);
  FUNC_4(VAR_5, VAR_3);
  if (!VAR_5)
   VAR_5 = 1;
  else if (VAR_5 > 600 && VAR_2->mask > VAR_1)
   VAR_5 = 600;

  FUNC_1(&VAR_2->mult, &VAR_2->shift, VAR_4,
           VAR_0 / VAR_3, VAR_5 * VAR_3);
 }




 VAR_2->maxadj = FUNC_2(VAR_2);
 while (VAR_4 && ((VAR_2->mult + VAR_2->maxadj < VAR_2->mult)
  || (VAR_2->mult - VAR_2->maxadj > VAR_2->mult))) {
  VAR_2->mult >>= 1;
  VAR_2->shift--;
  VAR_2->maxadj = FUNC_2(VAR_2);
 }





 FUNC_0(VAR_2->mult + VAR_2->maxadj < VAR_2->mult,
  "timekeeping: Clocksource %s might overflow on 11%% adjustment\n",
  VAR_2->name);

 FUNC_3(VAR_2);

 FUNC_5("%s: mask: 0x%llx max_cycles: 0x%llx, max_idle_ns: %lld ns\n",
  VAR_2->name, VAR_2->mask, VAR_2->max_cycles, VAR_2->max_idle_ns);
}
