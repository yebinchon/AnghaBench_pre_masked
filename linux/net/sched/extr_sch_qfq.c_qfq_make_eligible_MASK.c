
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {unsigned long V; unsigned long min_slot_shift; unsigned long oldV; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct qfq_sched*,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qfq_sched *VAR_4)
{
 unsigned long VAR_5 = VAR_4->V >> VAR_4->min_slot_shift;
 unsigned long VAR_6 = VAR_4->oldV >> VAR_4->min_slot_shift;

 if (VAR_5 != VAR_6) {
  unsigned long VAR_7;
  int VAR_8 = FUNC_0(VAR_5 ^ VAR_6);

  if (VAR_8 > 31)
   VAR_7 = ~0UL;
  else
   VAR_7 = (1UL << VAR_8) - 1;

  FUNC_1(VAR_4, VAR_7, VAR_3, VAR_1);
  FUNC_1(VAR_4, VAR_7, VAR_2, VAR_0);
 }
}
