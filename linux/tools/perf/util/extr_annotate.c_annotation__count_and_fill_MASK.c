
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct cyc_hist {unsigned int num; int reset; scalar_t__ cycles; } ;
struct annotation_line {double ipc; } ;
struct annotation {unsigned int hit_insn; unsigned int cover_insn; int hit_cycles; struct annotation_line** offsets; } ;


 unsigned int FUNC_0 (struct annotation*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct annotation *VAR_0, u64 VAR_1, u64 VAR_2, struct cyc_hist *VAR_3)
{
 unsigned VAR_4;
 unsigned int VAR_5 = 0;
 u64 VAR_6;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_4 && VAR_3->num && VAR_3->cycles) {
  float VAR_7 = VAR_4 / ((double)VAR_3->cycles / (double)VAR_3->num);


  if (VAR_3->reset >= 0x7fff)
   return;

  for (VAR_6 = VAR_1; VAR_6 <= VAR_2; VAR_6++) {
   struct annotation_line *VAR_8 = VAR_0->offsets[VAR_6];

   if (VAR_8 && VAR_8->ipc == 0.0) {
    VAR_8->ipc = VAR_7;
    VAR_5++;
   }
  }

  if (VAR_5) {
   VAR_0->hit_cycles += VAR_3->cycles;
   VAR_0->hit_insn += VAR_4 * VAR_3->num;
   VAR_0->cover_insn += VAR_5;
  }
 }
}
