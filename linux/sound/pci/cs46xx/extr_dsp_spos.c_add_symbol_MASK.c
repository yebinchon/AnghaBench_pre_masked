
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_symbol_entry {int symbol_type; scalar_t__ deleted; int * module; int address; int symbol_name; } ;
struct TYPE_4__ {int nsymbols; int highest_frag_index; struct dsp_symbol_entry* symbols; } ;
struct dsp_spos_instance {TYPE_2__ symbol_table; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int * FUNC_0 (struct snd_cs46xx*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct dsp_spos_instance*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct dsp_symbol_entry *
FUNC_4 (struct snd_cs46xx * VAR_1, char * VAR_2, u32 VAR_3, int VAR_4)
{
 struct dsp_spos_instance * VAR_5 = VAR_1->dsp_spos_instance;
 struct dsp_symbol_entry * VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_5->symbol_table.nsymbols == (VAR_0 - 1)) {
  FUNC_1(VAR_1->card->dev, "dsp_spos: symbol table is full\n");
  return ((void*)0);
 }

 if (FUNC_0(VAR_1,
         VAR_2,
         VAR_4) != ((void*)0)) {
  FUNC_1(VAR_1->card->dev,
   "dsp_spos: symbol <%s> duplicated\n", VAR_2);
  return ((void*)0);
 }

 VAR_7 = FUNC_2 (VAR_5);

 FUNC_3 (VAR_5->symbol_table.symbols[VAR_7].symbol_name, VAR_2);
 VAR_5->symbol_table.symbols[VAR_7].address = VAR_3;
 VAR_5->symbol_table.symbols[VAR_7].symbol_type = VAR_4;
 VAR_5->symbol_table.symbols[VAR_7].module = ((void*)0);
 VAR_5->symbol_table.symbols[VAR_7].deleted = 0;
 VAR_6 = (VAR_5->symbol_table.symbols + VAR_7);

 if (VAR_7 > VAR_5->symbol_table.highest_frag_index)
  VAR_5->symbol_table.highest_frag_index = VAR_7;

 if (VAR_7 == VAR_5->symbol_table.nsymbols)
  VAR_5->symbol_table.nsymbols++;

 return VAR_6;
}
