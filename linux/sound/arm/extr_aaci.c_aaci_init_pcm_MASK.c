
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct aaci* private_data; } ;
struct aaci {TYPE_1__* card; struct snd_pcm* pcm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct aaci *VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6->card, "AACI AC'97", 0, 1, 1, &VAR_7);
 if (VAR_8 == 0) {
  VAR_6->pcm = VAR_7;
  VAR_7->private_data = VAR_6;
  VAR_7->info_flags = 0;

  FUNC_3(VAR_7->name, VAR_0, sizeof(VAR_7->name));

  FUNC_2(VAR_7, VAR_3, &VAR_5);
  FUNC_2(VAR_7, VAR_2, &VAR_4);
  FUNC_0(VAR_7, VAR_1,
            VAR_6->card->dev,
            0, 64 * 1024);
 }

 return VAR_8;
}
