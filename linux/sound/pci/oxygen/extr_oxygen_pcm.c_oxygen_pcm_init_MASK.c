
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {int name; struct oxygen* private_data; TYPE_1__* streams; } ;
struct TYPE_4__ {int device_config; } ;
struct oxygen {int pci; int card; TYPE_2__ model; scalar_t__ has_ac97_1; } ;
struct TYPE_3__ {int substream; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct oxygen*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct snd_pcm*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_5 (struct snd_pcm*,size_t,int *) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct oxygen *VAR_27)
{
 struct snd_pcm *VAR_28;
 int VAR_29, VAR_30;
 int VAR_31;

 VAR_29 = !!(VAR_27->model.device_config & VAR_15);
 VAR_30 = !!(VAR_27->model.device_config & (VAR_2 |
           VAR_3));
 if (VAR_29 | VAR_30) {
  VAR_31 = FUNC_4(VAR_27->card, "Multichannel",
      0, VAR_29, VAR_30, &VAR_28);
  if (VAR_31 < 0)
   return VAR_31;
  if (VAR_29)
   FUNC_5(VAR_28, VAR_20,
     &VAR_22);
  if (VAR_27->model.device_config & VAR_2)
   FUNC_5(VAR_28, VAR_19,
     &VAR_23);
  else if (VAR_27->model.device_config & VAR_3)
   FUNC_5(VAR_28, VAR_19,
     &VAR_24);
  VAR_28->private_data = VAR_27;
  FUNC_6(VAR_28->name, "Multichannel");
  if (VAR_29)
   FUNC_2(VAR_28->streams[VAR_20].substream,
            VAR_18,
            FUNC_1(VAR_27->pci),
            VAR_9,
            VAR_1);
  if (VAR_30)
   FUNC_2(VAR_28->streams[VAR_19].substream,
            VAR_18,
            FUNC_1(VAR_27->pci),
            VAR_8,
            VAR_0);
 }

 VAR_29 = !!(VAR_27->model.device_config & VAR_16);
 VAR_30 = !!(VAR_27->model.device_config & VAR_4);
 if (VAR_29 | VAR_30) {
  VAR_31 = FUNC_4(VAR_27->card, "Digital", 1, VAR_29, VAR_30, &VAR_28);
  if (VAR_31 < 0)
   return VAR_31;
  if (VAR_29)
   FUNC_5(VAR_28, VAR_20,
     &VAR_26);
  if (VAR_30)
   FUNC_5(VAR_28, VAR_19,
     &VAR_25);
  VAR_28->private_data = VAR_27;
  FUNC_6(VAR_28->name, "Digital");
  FUNC_3(VAR_28, VAR_18,
            FUNC_1(VAR_27->pci),
            VAR_8,
            VAR_0);
 }

 if (VAR_27->has_ac97_1) {
  VAR_29 = !!(VAR_27->model.device_config & VAR_17);
  VAR_30 = !!(VAR_27->model.device_config & VAR_5);
 } else {
  VAR_29 = 0;
  VAR_30 = !!(VAR_27->model.device_config & VAR_6);
 }
 if (VAR_29 | VAR_30) {
  VAR_31 = FUNC_4(VAR_27->card, VAR_29 ? "AC97" : "Analog2",
      2, VAR_29, VAR_30, &VAR_28);
  if (VAR_31 < 0)
   return VAR_31;
  if (VAR_29) {
   FUNC_5(VAR_28, VAR_20,
     &VAR_21);
   FUNC_0(VAR_27, VAR_14,
          VAR_10,
          VAR_11);
  }
  if (VAR_30)
   FUNC_5(VAR_28, VAR_19,
     &VAR_24);
  VAR_28->private_data = VAR_27;
  FUNC_6(VAR_28->name, VAR_29 ? "Front Panel" : "Analog 2");
  FUNC_3(VAR_28, VAR_18,
            FUNC_1(VAR_27->pci),
            VAR_8,
            VAR_0);
 }

 VAR_30 = !!(VAR_27->model.device_config & VAR_7);
 if (VAR_30) {
  VAR_31 = FUNC_4(VAR_27->card, "Analog3", 3, 0, VAR_30, &VAR_28);
  if (VAR_31 < 0)
   return VAR_31;
  FUNC_5(VAR_28, VAR_19,
    &VAR_25);
  FUNC_0(VAR_27, VAR_14,
         VAR_12,
         VAR_13);
  VAR_28->private_data = VAR_27;
  FUNC_6(VAR_28->name, "Analog 3");
  FUNC_3(VAR_28, VAR_18,
            FUNC_1(VAR_27->pci),
            VAR_8,
            VAR_0);
 }
 return 0;
}
