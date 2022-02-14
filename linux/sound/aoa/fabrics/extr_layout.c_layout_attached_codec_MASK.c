
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct snd_kcontrol {TYPE_3__ id; } ;
struct TYPE_9__ {TYPE_2__* methods; } ;
struct layout_dev {int have_headphone_detect; int have_lineout_detect; int selfptr_lineout; int selfptr_headphone; struct snd_kcontrol* lineout_detected_ctrl; TYPE_4__ gpio; struct snd_kcontrol* lineout_ctrl; struct snd_kcontrol* headphone_detected_ctrl; struct snd_kcontrol* headphone_ctrl; struct snd_kcontrol* speaker_ctrl; struct snd_kcontrol* master_ctrl; TYPE_1__* methods; } ;
struct codec_connection {int connected; } ;
struct aoa_codec {struct layout_dev* gpio; struct codec_connection* fabric_data; } ;
struct TYPE_7__ {int (* set_notify ) (TYPE_4__*,int ,int (*) (int *),int *) ;int (* set_lineout ) (struct layout_dev*,int) ;int (* set_headphone ) (struct layout_dev*,int) ;int (* set_speakers ) (struct layout_dev*,int) ;} ;
struct TYPE_6__ {int (* get_detect ) (struct layout_dev*,int ) ;scalar_t__ set_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_kcontrol*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct layout_dev* VAR_9 ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct snd_kcontrol* FUNC_2 (int *,struct layout_dev*) ;
 int VAR_14 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct layout_dev*,int ) ;
 int FUNC_5 (struct layout_dev*,int ) ;
 int FUNC_6 (struct layout_dev*,int) ;
 int FUNC_7 (struct layout_dev*,int) ;
 int FUNC_8 (TYPE_4__*,int ,int (*) (int *),int *) ;
 int FUNC_9 (struct layout_dev*,int) ;
 int FUNC_10 (TYPE_4__*,int ,int (*) (int *),int *) ;

__attribute__((used)) static void FUNC_11(struct aoa_codec *VAR_15)
{
 struct codec_connection *VAR_16;
 struct snd_kcontrol *VAR_17;
 int VAR_18, VAR_19;
 struct layout_dev *VAR_20 = VAR_9;



 VAR_16 = VAR_15->fabric_data;

 VAR_18 = VAR_15->gpio->methods->get_detect(VAR_15->gpio,
            VAR_0);
  VAR_19 = VAR_15->gpio->methods->get_detect(VAR_15->gpio,
         VAR_1);

 if (VAR_15->gpio->methods->set_master) {
  VAR_17 = FUNC_2(&VAR_13, VAR_15->gpio);
  VAR_20->master_ctrl = VAR_17;
  FUNC_0(VAR_17);
 }
 while (VAR_16->connected) {
  if (VAR_16->connected & VAR_5) {
   if (VAR_18 <= 0 && VAR_19 <= 0)
    VAR_20->gpio.methods->set_speakers(VAR_15->gpio, 1);
   VAR_17 = FUNC_2(&VAR_14, VAR_15->gpio);
   VAR_20->speaker_ctrl = VAR_17;
   FUNC_0(VAR_17);
  }
  if (VAR_16->connected & VAR_2) {
   if (VAR_18 == 1)
    VAR_20->gpio.methods->set_headphone(VAR_15->gpio, 1);
   VAR_17 = FUNC_2(&VAR_6, VAR_15->gpio);
   VAR_20->headphone_ctrl = VAR_17;
   FUNC_0(VAR_17);
   VAR_20->have_headphone_detect =
    !VAR_20->gpio.methods
     ->set_notify(&VAR_20->gpio,
           VAR_0,
           FUNC_1,
           &VAR_20->selfptr_headphone);
   if (VAR_20->have_headphone_detect) {
    VAR_17 = FUNC_2(&VAR_7,
         VAR_20);
    FUNC_0(VAR_17);
    VAR_17 = FUNC_2(&VAR_8,
         VAR_20);
    VAR_20->headphone_detected_ctrl = VAR_17;
    FUNC_0(VAR_17);
   }
  }
  if (VAR_16->connected & VAR_3) {
   if (VAR_19 == 1)
    VAR_20->gpio.methods->set_lineout(VAR_15->gpio, 1);
   VAR_17 = FUNC_2(&VAR_10, VAR_15->gpio);
   if (VAR_16->connected & VAR_4)
    FUNC_3(VAR_17->id.name,
     "Headphone Switch", sizeof(VAR_17->id.name));
   VAR_20->lineout_ctrl = VAR_17;
   FUNC_0(VAR_17);
   VAR_20->have_lineout_detect =
    !VAR_20->gpio.methods
     ->set_notify(&VAR_20->gpio,
           VAR_1,
           FUNC_1,
           &VAR_20->selfptr_lineout);
   if (VAR_20->have_lineout_detect) {
    VAR_17 = FUNC_2(&VAR_11,
         VAR_20);
    if (VAR_16->connected & VAR_4)
     FUNC_3(VAR_17->id.name,
      "Headphone Detect Autoswitch",
      sizeof(VAR_17->id.name));
    FUNC_0(VAR_17);
    VAR_17 = FUNC_2(&VAR_12,
         VAR_20);
    if (VAR_16->connected & VAR_4)
     FUNC_3(VAR_17->id.name,
      "Headphone Detected",
      sizeof(VAR_17->id.name));
    VAR_20->lineout_detected_ctrl = VAR_17;
    FUNC_0(VAR_17);
   }
  }
  VAR_16++;
 }

 if (VAR_20->have_headphone_detect)
  FUNC_1(&VAR_20->selfptr_headphone);
 if (VAR_20->have_lineout_detect)
  FUNC_1(&VAR_20->selfptr_lineout);
}
