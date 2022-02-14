
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hdmi_spec_per_cvt {void* maxbps; int formats; int rates; void* channels_max; } ;
struct TYPE_7__ {int chmap_validate; int cea_alloc_to_tlv_chmap; int chmap_cea_alloc_validate_get_type; int pin_set_slot_channel; int pin_get_slot_channel; } ;
struct TYPE_8__ {void* channels_max; TYPE_3__ ops; } ;
struct TYPE_6__ {int setup_stream; int pin_hbr_setup; int pin_setup_infoframe; int pin_get_eld; } ;
struct hdmi_spec {int num_cvts; TYPE_4__ chmap; TYPE_2__ ops; } ;
struct TYPE_5__ {int init; } ;
struct hda_codec {int link_down_at_suspend; struct hdmi_spec* spec; TYPE_1__ patch_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct hda_codec*,int *,int ) ;
 struct hdmi_spec_per_cvt* FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 void* FUNC_3 (void*,unsigned int) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_14)
{
 struct hdmi_spec *VAR_15;
 struct hdmi_spec_per_cvt *VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = FUNC_4(VAR_14);

 if (VAR_17)
  return VAR_17;

 VAR_14->patch_ops.init = VAR_3;

 VAR_15 = VAR_14->spec;

 VAR_15->ops.pin_get_eld = VAR_7;
 VAR_15->ops.pin_setup_infoframe = VAR_11;
 VAR_15->ops.pin_hbr_setup = VAR_9;
 VAR_15->ops.setup_stream = VAR_13;

 VAR_15->chmap.ops.pin_get_slot_channel = VAR_8;
 VAR_15->chmap.ops.pin_set_slot_channel = VAR_10;

 if (!FUNC_2(VAR_14)) {

  VAR_15->chmap.ops.chmap_cea_alloc_validate_get_type =
   VAR_5;
  VAR_15->chmap.ops.cea_alloc_to_tlv_chmap =
    VAR_4;
  VAR_15->chmap.ops.chmap_validate = VAR_6;
 }


 for (VAR_18 = 0; VAR_18 < VAR_15->num_cvts; VAR_18++) {
  VAR_16 = FUNC_1(VAR_15, VAR_18);
  VAR_16->channels_max = FUNC_3(VAR_16->channels_max, 8u);
  VAR_16->rates |= VAR_1;
  VAR_16->formats |= VAR_0;
  VAR_16->maxbps = FUNC_3(VAR_16->maxbps, 24u);
 }

 VAR_15->chmap.channels_max = FUNC_3(VAR_15->chmap.channels_max, 8u);




 VAR_14->link_down_at_suspend = 1;

 FUNC_0(VAR_14, &VAR_2, VAR_12);

 return 0;
}
