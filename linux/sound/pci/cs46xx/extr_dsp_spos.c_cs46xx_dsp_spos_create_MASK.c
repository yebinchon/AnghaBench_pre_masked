
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_cs46xx {int dummy; } ;
struct dsp_symbol_entry {int dummy; } ;
struct TYPE_4__ {int symbols; scalar_t__ highest_frag_index; scalar_t__ nsymbols; } ;
struct TYPE_3__ {struct dsp_spos_instance* data; scalar_t__ size; scalar_t__ offset; } ;
struct dsp_spos_instance {int spdif_in_sample_rate; int dac_volume_right; int dac_volume_left; int spdif_input_volume_right; int spdif_input_volume_left; unsigned int spdif_csuv_default; unsigned int spdif_csuv_stream; TYPE_2__ symbol_table; TYPE_1__ code; struct dsp_spos_instance* modules; scalar_t__ nmodules; scalar_t__ ntask; scalar_t__ nscb; } ;
struct dsp_module_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct snd_cs46xx*) ;
 int FUNC_3 (struct dsp_spos_instance*) ;
 struct dsp_spos_instance* FUNC_4 (int ,int ) ;
 struct dsp_spos_instance* FUNC_5 (int ,int,int ) ;
 struct dsp_spos_instance* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

struct dsp_spos_instance *FUNC_9 (struct snd_cs46xx * VAR_5)
{
 struct dsp_spos_instance * VAR_6 = FUNC_6(sizeof(struct dsp_spos_instance), VAR_3);

 if (VAR_6 == ((void*)0))
  return ((void*)0);


 VAR_6->symbol_table.symbols =
  FUNC_8(FUNC_1(VAR_2,
       sizeof(struct dsp_symbol_entry)));
 VAR_6->code.data = FUNC_4(VAR_0, VAR_3);
 VAR_6->modules = FUNC_5(VAR_1,
         sizeof(struct dsp_module_desc),
         VAR_3);
 if (!VAR_6->symbol_table.symbols || !VAR_6->code.data || !VAR_6->modules) {
  FUNC_2(VAR_5);
  goto error;
 }
 VAR_6->symbol_table.nsymbols = 0;
 VAR_6->symbol_table.highest_frag_index = 0;
 VAR_6->code.offset = 0;
 VAR_6->code.size = 0;
 VAR_6->nscb = 0;
 VAR_6->ntask = 0;
 VAR_6->nmodules = 0;



 VAR_6->spdif_in_sample_rate = 48000;


 VAR_6->dac_volume_right = 0x8000;
 VAR_6->dac_volume_left = 0x8000;
 VAR_6->spdif_input_volume_right = 0x8000;
 VAR_6->spdif_input_volume_left = 0x8000;



 VAR_6->spdif_csuv_default =
  VAR_6->spdif_csuv_stream =
                ((unsigned int)FUNC_0( (VAR_4 & 0xff)) << 24) |
                ((unsigned int)FUNC_0( ((VAR_4 >> 8) & 0xff)) << 16) |
                 (unsigned int)FUNC_0( (VAR_4 >> 24) & 0xff) |
                                     (1 << 13) | (1 << 12);

 return VAR_6;

error:
 FUNC_3(VAR_6->modules);
 FUNC_3(VAR_6->code.data);
 FUNC_7(VAR_6->symbol_table.symbols);
 FUNC_3(VAR_6);
 return ((void*)0);
}
