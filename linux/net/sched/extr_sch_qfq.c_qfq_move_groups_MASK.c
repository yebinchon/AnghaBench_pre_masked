
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {unsigned long* bitmaps; } ;



__attribute__((used)) static inline void FUNC_0(struct qfq_sched *VAR_0, unsigned long VAR_1,
       int VAR_2, int VAR_3)
{
 VAR_0->bitmaps[VAR_3] |= VAR_0->bitmaps[VAR_2] & VAR_1;
 VAR_0->bitmaps[VAR_2] &= ~VAR_1;
}
