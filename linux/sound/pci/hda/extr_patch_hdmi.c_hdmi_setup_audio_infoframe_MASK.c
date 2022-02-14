
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int conn_type; int spk_alloc; } ;
struct hdmi_eld {TYPE_3__ info; } ;
struct hdmi_spec_per_pin {int channels; int non_pcm; int chmap_set; int chmap; int cvt_nid; struct hdmi_eld sink_eld; int pin_nid; } ;
struct TYPE_5__ {int (* pin_setup_infoframe ) (struct hda_codec*,int ,int,int,int ) ;} ;
struct TYPE_4__ {int (* set_channel_count ) (int *,int ,int) ;} ;
struct hdac_chmap {TYPE_1__ ops; } ;
struct hdmi_spec {TYPE_2__ ops; struct hdac_chmap chmap; } ;
struct hda_codec {int core; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int,int ,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct hdac_chmap*,int ,int,int,int,int ,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct hda_codec*,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_7(struct hda_codec *VAR_3,
           struct hdmi_spec_per_pin *VAR_4,
           bool VAR_5)
{
 struct hdmi_spec *VAR_6 = VAR_3->spec;
 struct hdac_chmap *VAR_7 = &VAR_6->chmap;
 hda_nid_t VAR_8 = VAR_4->pin_nid;
 int VAR_9 = VAR_4->channels;
 int VAR_10;
 struct hdmi_eld *VAR_11;
 int VAR_12;

 if (!VAR_9)
  return;


 if (FUNC_0(VAR_3, VAR_8) & VAR_1)
  FUNC_1(VAR_3, VAR_8, 0,
         VAR_0,
         VAR_2);

 VAR_11 = &VAR_4->sink_eld;

 VAR_12 = FUNC_2(&VAR_3->core,
   VAR_11->info.spk_alloc, VAR_9,
   VAR_4->chmap_set, VAR_5, VAR_4->chmap);

 VAR_10 = FUNC_3(VAR_12);

 VAR_7->ops.set_channel_count(&VAR_3->core, VAR_4->cvt_nid,
      VAR_10);





 FUNC_4(&VAR_6->chmap,
    VAR_8, VAR_5, VAR_12, VAR_9,
    VAR_4->chmap, VAR_4->chmap_set);

 VAR_6->ops.pin_setup_infoframe(VAR_3, VAR_8, VAR_12, VAR_10,
          VAR_11->info.conn_type);

 VAR_4->non_pcm = VAR_5;
}
