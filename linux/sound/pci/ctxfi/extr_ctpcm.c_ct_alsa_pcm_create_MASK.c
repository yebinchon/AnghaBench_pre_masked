
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_chmap_elem {int dummy; } ;
struct snd_pcm {int name; int dev_subclass; scalar_t__ info_flags; struct ct_atc* private_data; } ;
struct ct_atc {struct snd_pcm** pcms; int pci; TYPE_1__* card; } ;
typedef enum CTALSADEVS { ____Placeholder_CTALSADEVS } CTALSADEVS ;
struct TYPE_2__ {int dev; } ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 struct snd_pcm_chmap_elem* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 struct snd_pcm_chmap_elem* VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,struct snd_pcm_chmap_elem const*,int,int ,int *) ;
 int FUNC_3 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_5 (struct snd_pcm*,int ,int *) ;
 struct snd_pcm_chmap_elem* VAR_9 ;
 int FUNC_6 (int ,char const*,int) ;
 struct snd_pcm_chmap_elem* VAR_10 ;

int FUNC_7(struct ct_atc *VAR_11,
         enum CTALSADEVS VAR_12,
         const char *VAR_13)
{
 struct snd_pcm *VAR_14;
 const struct snd_pcm_chmap_elem *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;

 VAR_18 = (VAR_0 == VAR_12) ? 1 : 256;
 VAR_19 = (130 == VAR_12) ? 1 : 0;
 VAR_17 = FUNC_4(VAR_11->card, "ctxfi", VAR_12,
     VAR_18, VAR_19, &VAR_14);
 if (VAR_17 < 0) {
  FUNC_0(VAR_11->card->dev, "snd_pcm_new failed!! Err=%d\n",
   VAR_17);
  return VAR_17;
 }

 VAR_14->private_data = VAR_11;
 VAR_14->info_flags = 0;
 VAR_14->dev_subclass = VAR_4;
 FUNC_6(VAR_14->name, VAR_13, sizeof(VAR_14->name));

 FUNC_5(VAR_14, VAR_3, &VAR_7);

 if (130 == VAR_12)
  FUNC_5(VAR_14,
    VAR_2, &VAR_6);

 FUNC_3(VAR_14, VAR_1,
   FUNC_1(VAR_11->pci), 128*1024, 128*1024);

 VAR_16 = 2;
 switch (VAR_12) {
 case 130:
  VAR_16 = 8;
  VAR_15 = VAR_9;
  break;
 case 128:
  VAR_15 = VAR_10;
  break;
 case 131:
  VAR_15 = VAR_5;
  break;
 case 129:
  VAR_15 = VAR_8;
  break;
 default:
  VAR_15 = VAR_9;
  break;
 }
 VAR_17 = FUNC_2(VAR_14, VAR_3, VAR_15, VAR_16,
         0, ((void*)0));
 if (VAR_17 < 0)
  return VAR_17;





 return 0;
}
