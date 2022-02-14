
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol_new {scalar_t__ name; } ;
struct TYPE_3__ {int index; } ;
struct snd_kcontrol {scalar_t__ private_value; TYPE_1__ id; } ;
struct hda_spdif_out {int ctls; int status; int nid; } ;
struct TYPE_4__ {scalar_t__ used; } ;
struct hda_codec {int core; TYPE_2__ spdif_out; struct hda_bus* bus; } ;
struct hda_bus {int primary_dig_out_type; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (int) ;
 struct snd_kcontrol_new* VAR_5 ;
 int FUNC_2 (struct hda_codec*,char*,int) ;
 struct snd_kcontrol* FUNC_3 (struct hda_codec*,scalar_t__,int ,int ) ;
 struct hda_spdif_out* FUNC_4 (TYPE_2__*) ;
 struct snd_kcontrol* FUNC_5 (struct snd_kcontrol_new*,struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*,int ,struct snd_kcontrol*) ;
 int FUNC_7 (int *,int ,int ,int*) ;

int FUNC_8(struct hda_codec *VAR_6,
    hda_nid_t VAR_7,
    hda_nid_t VAR_8,
    int VAR_9)
{
 int VAR_10;
 struct snd_kcontrol *VAR_11;
 struct snd_kcontrol_new *VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 const int VAR_15 = 16;
 struct hda_spdif_out *VAR_16;
 struct hda_bus *VAR_17 = VAR_6->bus;

 if (VAR_17->primary_dig_out_type == VAR_3 &&
     VAR_9 == VAR_4) {
  VAR_13 = VAR_15;
 } else if (VAR_17->primary_dig_out_type == VAR_4 &&
     VAR_9 == VAR_3) {

  for (VAR_12 = VAR_5; VAR_12->name; VAR_12++) {
   VAR_11 = FUNC_3(VAR_6, VAR_12->name, 0, 0);
   if (!VAR_11)
    break;
   VAR_11->id.index = VAR_15;
  }
  VAR_17->primary_dig_out_type = VAR_3;
 }
 if (!VAR_17->primary_dig_out_type)
  VAR_17->primary_dig_out_type = VAR_9;

 VAR_13 = FUNC_2(VAR_6, "IEC958 Playback Switch", VAR_13);
 if (VAR_13 < 0) {
  FUNC_0(VAR_6, "too many IEC958 outputs\n");
  return -VAR_1;
 }
 VAR_16 = FUNC_4(&VAR_6->spdif_out);
 if (!VAR_16)
  return -VAR_2;
 for (VAR_12 = VAR_5; VAR_12->name; VAR_12++) {
  VAR_11 = FUNC_5(VAR_12, VAR_6);
  if (!VAR_11)
   return -VAR_2;
  VAR_11->id.index = VAR_13;
  VAR_11->private_value = VAR_6->spdif_out.used - 1;
  VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_11);
  if (VAR_10 < 0)
   return VAR_10;
 }
 VAR_16->nid = VAR_8;
 FUNC_7(&VAR_6->core, VAR_8,
        VAR_0, &VAR_14);
 VAR_16->ctls = VAR_14;
 VAR_16->status = FUNC_1(VAR_16->ctls);
 return 0;
}
