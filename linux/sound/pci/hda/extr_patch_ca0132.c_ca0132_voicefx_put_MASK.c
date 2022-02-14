
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int* item; } ;
struct TYPE_7__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int voicefx_val; } ;
struct TYPE_9__ {int * reqs; int mid; } ;
struct TYPE_8__ {int * vals; int name; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,char*,int,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ) ;
 struct hda_codec* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
    struct snd_ctl_elem_value *VAR_4)
{
 struct hda_codec *VAR_5 = FUNC_4(VAR_3);
 struct ca0132_spec *VAR_6 = VAR_5->spec;
 int VAR_7, VAR_8 = 0;
 int VAR_9 = VAR_4->value.enumerated.item[0];

 if (VAR_9 >= FUNC_0(VAR_2))
  return 0;

 FUNC_2(VAR_5, "ca0132_voicefx_put: sel=%d, preset=%s\n",
      VAR_9, VAR_2[VAR_9].name);





 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = FUNC_3(VAR_5, VAR_1.mid,
    VAR_1.reqs[VAR_7],
    VAR_2[VAR_9].vals[VAR_7]);
  if (VAR_8 < 0)
   break;
 }

 if (VAR_8 >= 0) {
  VAR_6->voicefx_val = VAR_9;

  FUNC_1(VAR_5, (VAR_9 ? 1 : 0));
 }

 return 1;
}
