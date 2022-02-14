
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ali {TYPE_1__* card; scalar_t__ spdif_support; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_ali*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_ali * VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10 = -1;

 FUNC_1(VAR_7->card->dev,
  "find_free_channel: for %s\n", VAR_8 ? "rec" : "pcm");


 if (VAR_8) {
  if (VAR_7->spdif_support &&
      (FUNC_3(FUNC_0(VAR_7, VAR_1)) &
       VAR_4))
   VAR_9 = VAR_3;
  else
   VAR_9 = VAR_2;

  VAR_10 = FUNC_4(VAR_7, VAR_9);
  if (VAR_10 >= 0)
   return VAR_10;
  else {
   FUNC_2(VAR_7->card->dev,
    "ali_find_free_channel: record channel is busy now.\n");
   return -1;
  }
 }


 if (VAR_7->spdif_support &&
     (FUNC_3(FUNC_0(VAR_7, VAR_1)) &
      VAR_6)) {
  VAR_9 = VAR_5;
  VAR_10 = FUNC_4(VAR_7, VAR_9);
  if (VAR_10 >= 0)
   return VAR_10;
  else
   FUNC_2(VAR_7->card->dev,
    "ali_find_free_channel: S/PDIF out channel is in busy now.\n");
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_10 = FUNC_4(VAR_7, VAR_9);
  if (VAR_10 >= 0)
   return VAR_10;
 }
 FUNC_2(VAR_7->card->dev, "ali_find_free_channel: no free channels.\n");
 return -1;
}
