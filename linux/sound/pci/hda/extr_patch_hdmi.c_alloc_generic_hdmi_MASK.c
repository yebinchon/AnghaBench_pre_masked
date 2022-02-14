
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int get_spk_alloc; int is_pcm_attached; int set_chmap; int get_chmap; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct hdmi_spec {int dev_num; TYPE_2__ chmap; int bind_lock; int pcm_lock; int ops; struct hda_codec* codec; } ;
struct hda_codec {int patch_ops; struct hdmi_spec* spec; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdmi_spec*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct hdmi_spec* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_8)
{
 struct hdmi_spec *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->codec = VAR_8;
 VAR_9->ops = VAR_3;
 VAR_9->dev_num = 1;
 FUNC_2(&VAR_9->pcm_lock);
 FUNC_2(&VAR_9->bind_lock);
 FUNC_3(&VAR_8->core, &VAR_9->chmap);

 VAR_9->chmap.ops.get_chmap = VAR_4;
 VAR_9->chmap.ops.set_chmap = VAR_6;
 VAR_9->chmap.ops.is_pcm_attached = VAR_7;
 VAR_9->chmap.ops.get_spk_alloc = VAR_5,

 VAR_8->spec = VAR_9;
 FUNC_0(VAR_9, 4);

 VAR_8->patch_ops = VAR_2;

 return 0;
}
