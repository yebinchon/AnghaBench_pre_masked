
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct symbol {int dummy; } ;
struct TYPE_2__ {struct symbol* sym; } ;
struct hist_entry {TYPE_1__ ms; } ;
struct annotation {double hit_insn; double cover_insn; scalar_t__ total_insn; scalar_t__ hit_cycles; } ;


 int FUNC_0 (char*,size_t,char*,unsigned int,char*) ;
 int FUNC_1 (char*,int,char*,double,double) ;
 struct annotation* FUNC_2 (struct symbol*) ;

__attribute__((used)) static int FUNC_3(struct hist_entry *VAR_0, char *VAR_1,
     size_t VAR_2, unsigned int VAR_3)
{

 struct symbol *VAR_4 = VAR_0->ms.sym;
 struct annotation *VAR_5;
 double VAR_6 = 0.0, VAR_7 = 0.0;
 char VAR_8[64];

 if (!VAR_4)
  return FUNC_0(VAR_1, VAR_2, "%-*s", VAR_3, "-");

 VAR_5 = FUNC_2(VAR_4);

 if (VAR_5->hit_cycles)
  VAR_6 = VAR_5->hit_insn / ((double)VAR_5->hit_cycles);

 if (VAR_5->total_insn) {
  VAR_7 = VAR_5->cover_insn * 100.0 /
   ((double)VAR_5->total_insn);
 }

 FUNC_1(VAR_8, sizeof(VAR_8), "%-5.2f [%5.1f%%]", VAR_6, VAR_7);
 return FUNC_0(VAR_1, VAR_2, "%-*s", VAR_3, VAR_8);
}
