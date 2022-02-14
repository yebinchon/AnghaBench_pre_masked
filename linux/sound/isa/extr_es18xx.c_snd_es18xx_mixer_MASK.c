
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {void* private_free; } ;
struct snd_es18xx {int caps; int version; struct snd_kcontrol* hw_switch; struct snd_kcontrol* hw_volume; struct snd_kcontrol* master_switch; struct snd_kcontrol* master_volume; TYPE_1__* pcm; } ;
struct snd_card {int mixername; struct snd_es18xx* private_data; } ;
struct TYPE_2__ {int name; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (int *,struct snd_es18xx*) ;
 int * VAR_5 ;
 int * VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_19)
{
 struct snd_es18xx *VAR_20 = VAR_19->private_data;
 int VAR_21;
 unsigned int VAR_22;

 FUNC_3(VAR_19->mixername, VAR_20->pcm->name);

 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_5); VAR_22++) {
  struct snd_kcontrol *VAR_23;
  VAR_23 = FUNC_2(&VAR_5[VAR_22], VAR_20);
  if (VAR_20->caps & VAR_1) {
   switch (VAR_22) {
   case 0:
    VAR_20->master_volume = VAR_23;
    VAR_23->private_free = VAR_7;
    break;
   case 1:
    VAR_20->master_switch = VAR_23;
    VAR_23->private_free = VAR_7;
    break;
   }
  }
  if ((VAR_21 = FUNC_1(VAR_19, VAR_23)) < 0)
   return VAR_21;
 }
 if (VAR_20->caps & VAR_2) {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_16); VAR_22++) {
   if ((VAR_21 = FUNC_1(VAR_19, FUNC_2(&VAR_16[VAR_22], VAR_20))) < 0)
    return VAR_21;
  }
 } else {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_15); VAR_22++) {
   if ((VAR_21 = FUNC_1(VAR_19, FUNC_2(&VAR_15[VAR_22], VAR_20))) < 0)
    return VAR_21;
  }
 }

 if (VAR_20->caps & VAR_3) {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_17); VAR_22++) {
   if ((VAR_21 = FUNC_1(VAR_19, FUNC_2(&VAR_17[VAR_22], VAR_20))) < 0)
    return VAR_21;
  }
 }
 switch (VAR_20->version) {
 default:
  if ((VAR_21 = FUNC_1(VAR_19, FUNC_2(&VAR_8, VAR_20))) < 0)
   return VAR_21;
  break;
 case 0x1869:
 case 0x1879:
  if ((VAR_21 = FUNC_1(VAR_19, FUNC_2(&VAR_9, VAR_20))) < 0)
   return VAR_21;
  break;
 }
 if (VAR_20->caps & VAR_4) {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_18); VAR_22++) {
   if ((VAR_21 = FUNC_1(VAR_19, FUNC_2(&VAR_18[VAR_22], VAR_20))) < 0)
    return VAR_21;
  }
 }
 if (VAR_20->caps & VAR_1) {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_6); VAR_22++) {
   struct snd_kcontrol *VAR_24;
   VAR_24 = FUNC_2(&VAR_6[VAR_22], VAR_20);
   if (VAR_22 == 0)
    VAR_20->hw_volume = VAR_24;
   else
    VAR_20->hw_switch = VAR_24;
   VAR_24->private_free = VAR_7;
   if ((VAR_21 = FUNC_1(VAR_19, VAR_24)) < 0)
    return VAR_21;

  }
 }


 if (VAR_20->version != 0x1868) {
  VAR_21 = FUNC_1(VAR_19, FUNC_2(&VAR_14,
           VAR_20));
  if (VAR_21 < 0)
   return VAR_21;
 }
 if (VAR_20->version == 0x1869) {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_10); VAR_22++) {
   VAR_21 = FUNC_1(VAR_19,
       FUNC_2(&VAR_10[VAR_22],
             VAR_20));
   if (VAR_21 < 0)
    return VAR_21;
  }
 } else if (VAR_20->version == 0x1878) {
  VAR_21 = FUNC_1(VAR_19, FUNC_2(&VAR_11,
           VAR_20));
  if (VAR_21 < 0)
   return VAR_21;
 } else if (VAR_20->version == 0x1879) {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_12); VAR_22++) {
   VAR_21 = FUNC_1(VAR_19,
       FUNC_2(&VAR_12[VAR_22],
             VAR_20));
   if (VAR_21 < 0)
    return VAR_21;
  }
 }
 if (VAR_20->caps & VAR_0) {
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_13); VAR_22++) {
   VAR_21 = FUNC_1(VAR_19,
       FUNC_2(&VAR_13[VAR_22],
             VAR_20));
   if (VAR_21 < 0)
    return VAR_21;
  }
 }
 return 0;
}
