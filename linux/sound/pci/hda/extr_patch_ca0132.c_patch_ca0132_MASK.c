
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pci_quirk {void* value; } ;
struct hda_codec {int pcm_format_first; int no_sticky_stream; TYPE_1__* bus; int patch_ops; struct ca0132_spec* spec; } ;
struct ca0132_spec {int num_mixers; int use_alt_controls; int use_alt_functions; int use_pci_mmio; int autocfg; int unsol_hp_work; int base_exit_verbs; int base_init_verbs; void* quirk; int * mem_base; void** mixers; int dsp_state; struct hda_codec* codec; } ;
struct TYPE_2__ {int pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;

 void* VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct ca0132_spec*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct hda_codec*,char*) ;
 int FUNC_7 (struct hda_codec*,char*) ;
 int VAR_10 ;
 void* VAR_11 ;
 struct ca0132_spec* FUNC_8 (int,int ) ;
 int * FUNC_9 (int ,int,int) ;
 void* VAR_12 ;
 int FUNC_10 (struct hda_codec*) ;
 int FUNC_11 (struct hda_codec*,char*) ;
 int FUNC_12 (struct hda_codec*,int *,int *) ;
 struct snd_pci_quirk* FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct hda_codec *VAR_13)
{
 struct ca0132_spec *VAR_14;
 int VAR_15;
 const struct snd_pci_quirk *VAR_16;

 FUNC_6(VAR_13, "patch_ca0132\n");

 VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;
 VAR_13->spec = VAR_14;
 VAR_14->codec = VAR_13;


 VAR_16 = FUNC_13(VAR_13->bus->pci, VAR_8);
 if (VAR_16)
  VAR_14->quirk = VAR_16->value;
 else
  VAR_14->quirk = VAR_3;
 if (FUNC_5(VAR_14) == 130)
  FUNC_10(VAR_13);

 if (FUNC_5(VAR_14) == 128)
  VAR_13->patch_ops = VAR_10;
 else
  VAR_13->patch_ops = VAR_7;

 VAR_13->pcm_format_first = 1;
 VAR_13->no_sticky_stream = 1;


 VAR_14->dsp_state = VAR_0;
 VAR_14->num_mixers = 1;


 switch (FUNC_5(VAR_14)) {
 case 130:
  VAR_14->mixers[0] = VAR_11;
  FUNC_11(VAR_13, "Sound Blaster Z");
  break;
 case 129:
  VAR_14->mixers[0] = VAR_11;
  FUNC_11(VAR_13, "Sound Blaster ZxR");
  break;
 case 128:
  break;
 case 132:
  VAR_14->mixers[0] = VAR_11;
  FUNC_11(VAR_13, "Recon3D");
  break;
 case 131:
  VAR_14->mixers[0] = VAR_12;
  FUNC_11(VAR_13, "Recon3Di");
  break;
 case 133:
  VAR_14->mixers[0] = VAR_11;
  FUNC_11(VAR_13, "Sound BlasterX AE-5");
  break;
 default:
  VAR_14->mixers[0] = VAR_6;
  break;
 }


 switch (FUNC_5(VAR_14)) {
 case 130:
 case 132:
 case 133:
 case 129:
  VAR_14->use_alt_controls = 1;
  VAR_14->use_alt_functions = 1;
  VAR_14->use_pci_mmio = 1;
  break;
 case 131:
  VAR_14->use_alt_controls = 1;
  VAR_14->use_alt_functions = 1;
  VAR_14->use_pci_mmio = 0;
  break;
 default:
  VAR_14->use_alt_controls = 0;
  VAR_14->use_alt_functions = 0;
  VAR_14->use_pci_mmio = 0;
  break;
 }
 VAR_14->base_init_verbs = VAR_5;
 VAR_14->base_exit_verbs = VAR_4;

 FUNC_0(&VAR_14->unsol_hp_work, VAR_9);

 FUNC_3(VAR_13);

 FUNC_1(VAR_13);

 VAR_15 = FUNC_4(VAR_13);
 if (VAR_15 < 0)
  goto error;

 VAR_15 = FUNC_12(VAR_13, &VAR_14->autocfg, ((void*)0));
 if (VAR_15 < 0)
  goto error;

 return 0;

 error:
 FUNC_2(VAR_13);
 return VAR_15;
}
