
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_emu10k1_fx8010_info {int external_tram_size; int gpr_controls; int * extout_names; int * extin_names; int * fxbus_names; int internal_tram_size; } ;
struct TYPE_3__ {int bytes; } ;
struct TYPE_4__ {unsigned short fxbus_mask; unsigned short extin_mask; unsigned short extout_mask; int gpr_count; TYPE_1__ etram_pages; int itram_size; } ;
struct snd_emu10k1 {TYPE_2__ fx8010; scalar_t__ audigy; } ;


 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int ,char*,char*,int) ;
 char** VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;

__attribute__((used)) static void FUNC_1(struct snd_emu10k1 *VAR_5,
       struct snd_emu10k1_fx8010_info *VAR_6)
{
 char **VAR_7, **VAR_8, **VAR_9;
 unsigned short VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_6->internal_tram_size = VAR_5->fx8010.itram_size;
 VAR_6->external_tram_size = VAR_5->fx8010.etram_pages.bytes / 2;
 VAR_7 = VAR_4;
 VAR_8 = VAR_5->audigy ? VAR_0 : VAR_2;
 VAR_9 = VAR_5->audigy ? VAR_1 : VAR_3;
 VAR_10 = VAR_5->fx8010.fxbus_mask;
 VAR_11 = VAR_5->fx8010.extin_mask;
 VAR_12 = VAR_5->fx8010.extout_mask;
 for (VAR_13 = 0; VAR_13 < 16; VAR_13++, VAR_7++, VAR_8++, VAR_9++) {
  FUNC_0(VAR_6->fxbus_names[VAR_13], VAR_10 & (1 << VAR_13) ? *VAR_7 : ((void*)0), "FXBUS", VAR_13);
  FUNC_0(VAR_6->extin_names[VAR_13], VAR_11 & (1 << VAR_13) ? *VAR_8 : ((void*)0), "Unused", VAR_13);
  FUNC_0(VAR_6->extout_names[VAR_13], VAR_12 & (1 << VAR_13) ? *VAR_9 : ((void*)0), "Unused", VAR_13);
 }
 for (VAR_13 = 16; VAR_13 < 32; VAR_13++, VAR_9++)
  FUNC_0(VAR_6->extout_names[VAR_13], VAR_12 & (1 << VAR_13) ? *VAR_9 : ((void*)0), "Unused", VAR_13);
 VAR_6->gpr_controls = VAR_5->fx8010.gpr_count;
}
