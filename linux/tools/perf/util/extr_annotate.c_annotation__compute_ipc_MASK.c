
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cyc_hist {int num_aggr; int cycles_aggr; int cycles_min; int cycles_max; int start; scalar_t__ have_start; scalar_t__ cycles; } ;
struct annotation_line {int cycles; int cycles_min; int cycles_max; } ;
struct annotation {int have_cycles; int lock; struct annotation_line** offsets; TYPE_1__* src; scalar_t__ cover_insn; scalar_t__ hit_insn; scalar_t__ hit_cycles; int total_insn; } ;
typedef size_t s64 ;
struct TYPE_2__ {struct cyc_hist* cycles_hist; } ;


 int FUNC_0 (struct annotation*,int ,size_t,struct cyc_hist*) ;
 int FUNC_1 (struct annotation*,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct annotation *VAR_0, size_t VAR_1)
{
 s64 VAR_2;

 if (!VAR_0->src || !VAR_0->src->cycles_hist)
  return;

 VAR_0->total_insn = FUNC_1(VAR_0, 0, VAR_1 - 1);
 VAR_0->hit_cycles = 0;
 VAR_0->hit_insn = 0;
 VAR_0->cover_insn = 0;

 FUNC_2(&VAR_0->lock);
 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; --VAR_2) {
  struct cyc_hist *VAR_3;

  VAR_3 = &VAR_0->src->cycles_hist[VAR_2];
  if (VAR_3 && VAR_3->cycles) {
   struct annotation_line *VAR_4;

   if (VAR_3->have_start)
    FUNC_0(VAR_0, VAR_3->start, VAR_2, VAR_3);
   VAR_4 = VAR_0->offsets[VAR_2];
   if (VAR_4 && VAR_3->num_aggr) {
    VAR_4->cycles = VAR_3->cycles_aggr / VAR_3->num_aggr;
    VAR_4->cycles_max = VAR_3->cycles_max;
    VAR_4->cycles_min = VAR_3->cycles_min;
   }
   VAR_0->have_cycles = 1;
  }
 }
 FUNC_3(&VAR_0->lock);
}
