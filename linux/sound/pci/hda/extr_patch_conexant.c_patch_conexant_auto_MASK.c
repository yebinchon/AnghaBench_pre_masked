
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vendor_id; int subsystem_id; int chip_name; } ;
struct hda_codec {int single_adc_amp; int pin_amp_workaround; int power_save_node; TYPE_4__* bus; TYPE_2__ core; int patch_ops; struct conexant_spec* spec; } ;
struct TYPE_6__ {int hook; } ;
struct TYPE_10__ {int own_eapd_ctl; int mixer_nid; int vmaster_mute_enum; int autocfg; void* add_stereo_mix_input; TYPE_1__ vmaster_mute; } ;
struct conexant_spec {TYPE_5__ gen; int parse_flags; scalar_t__ dynamic_eapd; } ;
struct TYPE_8__ {int sync_write; } ;
struct TYPE_9__ {int allow_bus_reset; TYPE_3__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,char*,...) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct conexant_spec* FUNC_5 (int,int ) ;
 int FUNC_6 (struct hda_codec*,int ) ;
 int FUNC_7 (struct hda_codec*,int *) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct hda_codec*,int *,int *,int ) ;
 int FUNC_10 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct hda_codec *VAR_16)
{
 struct conexant_spec *VAR_17;
 int VAR_18;

 FUNC_1(VAR_16, "%s: BIOS auto-probing.\n", VAR_16->core.chip_name);

 VAR_17 = FUNC_5(sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  return -VAR_0;
 FUNC_8(&VAR_17->gen);
 VAR_16->spec = VAR_17;
 VAR_16->patch_ops = VAR_5;

 FUNC_4(VAR_16);
 VAR_17->gen.own_eapd_ctl = 1;
 if (VAR_17->dynamic_eapd)
  VAR_17->gen.vmaster_mute.hook = VAR_6;

 switch (VAR_16->core.vendor_id) {
 case 0x14f15045:
  VAR_16->single_adc_amp = 1;
  VAR_17->gen.mixer_nid = 0x17;
  VAR_17->gen.add_stereo_mix_input = VAR_4;
  FUNC_10(VAR_16, VAR_7,
       VAR_8, VAR_15);
  break;
 case 0x14f15047:
  VAR_16->pin_amp_workaround = 1;
  VAR_17->gen.mixer_nid = 0x19;
  VAR_17->gen.add_stereo_mix_input = VAR_4;
  FUNC_10(VAR_16, VAR_9,
       VAR_10, VAR_15);
  break;
 case 0x14f15051:
  FUNC_0(VAR_16);
  VAR_16->pin_amp_workaround = 1;
  FUNC_10(VAR_16, VAR_11,
       VAR_12, VAR_15);
  break;
 case 0x14f150f2:
  VAR_16->power_save_node = 1;

 default:
  VAR_16->pin_amp_workaround = 1;
  FUNC_10(VAR_16, VAR_13,
       VAR_14, VAR_15);
  break;
 }







 switch (VAR_16->core.subsystem_id >> 16) {
 case 0x103c:
  VAR_17->gen.vmaster_mute_enum = 1;
  break;
 }

 FUNC_6(VAR_16, VAR_2);

 VAR_18 = FUNC_9(VAR_16, &VAR_17->gen.autocfg, ((void*)0),
           VAR_17->parse_flags);
 if (VAR_18 < 0)
  goto error;

 VAR_18 = FUNC_7(VAR_16, &VAR_17->gen.autocfg);
 if (VAR_18 < 0)
  goto error;

 VAR_18 = FUNC_3(VAR_16);
 if (VAR_18 < 0)
  goto error;





 if (!VAR_16->bus->core.sync_write) {
  FUNC_1(VAR_16,
      "Enable sync_write for stable communication\n");
  VAR_16->bus->core.sync_write = 1;
  VAR_16->bus->allow_bus_reset = 1;
 }

 FUNC_6(VAR_16, VAR_3);

 return 0;

 error:
 FUNC_2(VAR_16);
 return VAR_18;
}
