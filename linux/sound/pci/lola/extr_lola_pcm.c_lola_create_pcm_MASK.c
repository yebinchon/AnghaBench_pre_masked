
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {struct lola* private_data; int name; } ;
struct lola {int pci; TYPE_1__* pcm; int card; } ;
struct TYPE_2__ {scalar_t__ num_streams; int bdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int ,scalar_t__,scalar_t__,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int,int *) ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(struct lola *VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_9 = FUNC_0(VAR_1,
       FUNC_1(VAR_6->pci),
       VAR_0, &VAR_6->pcm[VAR_8].bdl);
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_6->card, "Digigram Lola", 0,
     VAR_6->pcm[VAR_4].num_streams,
     VAR_6->pcm[VAR_3].num_streams,
     &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 FUNC_5(VAR_7->name, "Digigram Lola", sizeof(VAR_7->name));
 VAR_7->private_data = VAR_6;
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  if (VAR_6->pcm[VAR_8].num_streams)
   FUNC_4(VAR_7, VAR_8, &VAR_5);
 }

 FUNC_2(VAR_7, VAR_2,
           FUNC_1(VAR_6->pci),
           1024 * 64, 32 * 1024 * 1024);
 return 0;
}
