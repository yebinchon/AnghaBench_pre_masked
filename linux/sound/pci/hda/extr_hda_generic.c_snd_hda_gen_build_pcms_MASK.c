
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hda_pcm {TYPE_4__* stream; scalar_t__ pcm_type; } ;
struct TYPE_6__ {scalar_t__ num_dacs; scalar_t__ dig_out_nid; int slave_dig_outs; int max_channels; scalar_t__* dac_nids; } ;
struct TYPE_5__ {scalar_t__ line_out_type; int line_outs; } ;
struct hda_gen_spec {int num_adc_nids; scalar_t__* adc_nids; int * stream_analog_alt_capture; scalar_t__ alt_dac_nid; int * stream_analog_alt_playback; struct hda_pcm** pcm_rec; int stream_name_alt_analog; int auto_mic; scalar_t__ dyn_adc_switch; scalar_t__ no_analog; scalar_t__ dig_in_nid; int * stream_digital_capture; TYPE_2__ multiout; int * stream_digital_playback; scalar_t__ dig_out_type; int stream_name_digital; int * stream_analog_capture; TYPE_1__ autocfg; int * stream_analog_playback; int stream_name_analog; } ;
struct TYPE_7__ {int chip_name; } ;
struct hda_codec {TYPE_3__ core; int slave_dig_outs; struct hda_gen_spec* spec; } ;
struct TYPE_8__ {int substreams; int chmap; int channels_max; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_4__*,int *,int *,scalar_t__) ;
 struct hda_pcm* FUNC_2 (struct hda_codec*,char*,int ) ;
 int VAR_13 ;

int FUNC_3(struct hda_codec *VAR_14)
{
 struct hda_gen_spec *VAR_15 = VAR_14->spec;
 struct hda_pcm *VAR_16;
 bool VAR_17;

 if (VAR_15->no_analog)
  goto skip_analog;

 FUNC_0(VAR_15->stream_name_analog,
        sizeof(VAR_15->stream_name_analog),
        " Analog", VAR_14->core.chip_name);
 VAR_16 = FUNC_2(VAR_14, "%s", VAR_15->stream_name_analog);
 if (!VAR_16)
  return -VAR_1;
 VAR_15->pcm_rec[0] = VAR_16;

 if (VAR_15->multiout.num_dacs > 0) {
  FUNC_1(&VAR_16->stream[VAR_4],
     &VAR_9,
     VAR_15->stream_analog_playback,
     VAR_15->multiout.dac_nids[0]);
  VAR_16->stream[VAR_4].channels_max =
   VAR_15->multiout.max_channels;
  if (VAR_15->autocfg.line_out_type == VAR_0 &&
      VAR_15->autocfg.line_outs == 2)
   VAR_16->stream[VAR_4].chmap =
    VAR_13;
 }
 if (VAR_15->num_adc_nids) {
  FUNC_1(&VAR_16->stream[VAR_3],
     (VAR_15->dyn_adc_switch ?
      &VAR_5 : &VAR_8),
     VAR_15->stream_analog_capture,
     VAR_15->adc_nids[0]);
 }

 skip_analog:

 if (VAR_15->multiout.dig_out_nid || VAR_15->dig_in_nid) {
  FUNC_0(VAR_15->stream_name_digital,
         sizeof(VAR_15->stream_name_digital),
         " Digital", VAR_14->core.chip_name);
  VAR_16 = FUNC_2(VAR_14, "%s",
          VAR_15->stream_name_digital);
  if (!VAR_16)
   return -VAR_1;
  VAR_14->slave_dig_outs = VAR_15->multiout.slave_dig_outs;
  VAR_15->pcm_rec[1] = VAR_16;
  if (VAR_15->dig_out_type)
   VAR_16->pcm_type = VAR_15->dig_out_type;
  else
   VAR_16->pcm_type = VAR_2;
  if (VAR_15->multiout.dig_out_nid)
   FUNC_1(&VAR_16->stream[VAR_4],
      &VAR_11,
      VAR_15->stream_digital_playback,
      VAR_15->multiout.dig_out_nid);
  if (VAR_15->dig_in_nid)
   FUNC_1(&VAR_16->stream[VAR_3],
      &VAR_10,
      VAR_15->stream_digital_capture,
      VAR_15->dig_in_nid);
 }

 if (VAR_15->no_analog)
  return 0;




 VAR_17 = (VAR_15->num_adc_nids > 1) &&
  !VAR_15->dyn_adc_switch && !VAR_15->auto_mic;

 if (VAR_15->alt_dac_nid || VAR_17) {
  FUNC_0(VAR_15->stream_name_alt_analog,
         sizeof(VAR_15->stream_name_alt_analog),
        " Alt Analog", VAR_14->core.chip_name);
  VAR_16 = FUNC_2(VAR_14, "%s",
          VAR_15->stream_name_alt_analog);
  if (!VAR_16)
   return -VAR_1;
  VAR_15->pcm_rec[2] = VAR_16;
  if (VAR_15->alt_dac_nid)
   FUNC_1(&VAR_16->stream[VAR_4],
      &VAR_7,
      VAR_15->stream_analog_alt_playback,
      VAR_15->alt_dac_nid);
  else
   FUNC_1(&VAR_16->stream[VAR_4],
      &VAR_12, ((void*)0), 0);
  if (VAR_17) {
   FUNC_1(&VAR_16->stream[VAR_3],
      &VAR_6,
      VAR_15->stream_analog_alt_capture,
      VAR_15->adc_nids[1]);
   VAR_16->stream[VAR_3].substreams =
    VAR_15->num_adc_nids - 1;
  } else {
   FUNC_1(&VAR_16->stream[VAR_3],
      &VAR_12, ((void*)0), 0);
  }
 }

 return 0;
}
