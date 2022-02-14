
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_symbol_entry {int deleted; } ;
struct TYPE_2__ {int nsymbols; int highest_frag_index; struct dsp_symbol_entry* symbols; } ;
struct dsp_spos_instance {TYPE_1__ symbol_table; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (struct snd_cs46xx * VAR_0, struct dsp_symbol_entry * VAR_1)
{
 struct dsp_spos_instance * VAR_2 = VAR_0->dsp_spos_instance;
 int VAR_3 = (int)(VAR_1 - VAR_2->symbol_table.symbols);

 if (FUNC_0(VAR_2->symbol_table.nsymbols <= 0))
  return;
 if (FUNC_0(VAR_3 < 0 ||
         VAR_3 >= VAR_2->symbol_table.nsymbols))
  return;

 VAR_2->symbol_table.symbols[VAR_3].deleted = 1;

 if (VAR_3 < VAR_2->symbol_table.highest_frag_index) {
  VAR_2->symbol_table.highest_frag_index = VAR_3;
 }

 if (VAR_3 == VAR_2->symbol_table.nsymbols - 1)
  VAR_2->symbol_table.nsymbols --;

 if (VAR_2->symbol_table.highest_frag_index > VAR_2->symbol_table.nsymbols) {
  VAR_2->symbol_table.highest_frag_index = VAR_2->symbol_table.nsymbols;
 }

}
