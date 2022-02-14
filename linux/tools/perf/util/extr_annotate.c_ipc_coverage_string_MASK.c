
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotation {double hit_insn; double cover_insn; scalar_t__ total_insn; scalar_t__ hit_cycles; } ;


 int FUNC_0 (char*,int,char*,double,double) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, int VAR_1, struct annotation *VAR_2)
{
 double VAR_3 = 0.0, VAR_4 = 0.0;

 if (VAR_2->hit_cycles)
  VAR_3 = VAR_2->hit_insn / ((double)VAR_2->hit_cycles);

 if (VAR_2->total_insn) {
  VAR_4 = VAR_2->cover_insn * 100.0 /
   ((double)VAR_2->total_insn);
 }

 FUNC_0(VAR_0, VAR_1, "(Average IPC: %.2f, IPC Coverage: %.1f%%)",
    VAR_3, VAR_4);
}
