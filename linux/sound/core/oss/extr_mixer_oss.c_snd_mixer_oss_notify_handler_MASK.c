
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_mixer_oss {int oss_dev_alloc; struct snd_card* card; TYPE_1__* slots; int name; int reg_mutex; } ;
struct snd_card {int number; struct snd_mixer_oss* mixer_oss; scalar_t__* mixername; int dev; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int ) ;
 struct snd_mixer_oss* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct snd_mixer_oss*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_mixer_oss*) ;
 int VAR_7 ;
 int FUNC_5 (struct snd_mixer_oss*) ;
 int FUNC_6 (struct snd_mixer_oss*) ;
 int FUNC_7 (struct snd_mixer_oss*) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,struct snd_card*,int ,int *,struct snd_card*) ;
 int FUNC_11 (int ,struct snd_card*,int ) ;
 int FUNC_12 (int ,int,char*,int) ;
 int FUNC_13 (int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_14(struct snd_card *VAR_8, int VAR_9)
{
 struct snd_mixer_oss *VAR_10;

 if (VAR_9 == VAR_6) {
  int VAR_11, VAR_12;

  VAR_10 = FUNC_1(2, sizeof(*VAR_10), VAR_1);
  if (VAR_10 == ((void*)0))
   return -VAR_0;
  FUNC_3(&VAR_10->reg_mutex);
  if ((VAR_12 = FUNC_10(VAR_2,
         VAR_8, 0,
         &VAR_7, VAR_8)) < 0) {
   FUNC_0(VAR_8->dev,
    "unable to register OSS mixer device %i:%i\n",
    VAR_8->number, 0);
   FUNC_2(VAR_10);
   return VAR_12;
  }
  VAR_10->oss_dev_alloc = 1;
  VAR_10->card = VAR_8;
  if (*VAR_8->mixername)
   FUNC_13(VAR_10->name, VAR_8->mixername, sizeof(VAR_10->name));
  else
   FUNC_12(VAR_10->name, sizeof(VAR_10->name),
     "mixer%i", VAR_8->number);





  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
   VAR_10->slots[VAR_11].number = VAR_11;
  VAR_8->mixer_oss = VAR_10;
  FUNC_4(VAR_10);
  FUNC_7(VAR_10);
 } else {
  VAR_10 = VAR_8->mixer_oss;
  if (VAR_10 == ((void*)0))
   return 0;
  if (VAR_10->oss_dev_alloc) {



   FUNC_11(VAR_2, VAR_10->card, 0);
   VAR_10->oss_dev_alloc = 0;
  }
  if (VAR_9 == VAR_5)
   return 0;
  FUNC_6(VAR_10);
  return FUNC_5(VAR_10);
 }
 return 0;
}
