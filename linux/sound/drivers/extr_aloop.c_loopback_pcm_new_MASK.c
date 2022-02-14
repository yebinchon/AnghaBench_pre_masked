
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; scalar_t__ info_flags; struct loopback* private_data; } ;
struct loopback {struct snd_pcm** pcm; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_1 (struct snd_pcm*,int ,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct loopback *VAR_3,
       int VAR_4, int VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3->card, "Loopback PCM", VAR_4,
     VAR_5, VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_1(VAR_6, VAR_1, &VAR_2);
 FUNC_1(VAR_6, VAR_0, &VAR_2);

 VAR_6->private_data = VAR_3;
 VAR_6->info_flags = 0;
 FUNC_2(VAR_6->name, "Loopback PCM");

 VAR_3->pcm[VAR_4] = VAR_6;
 return 0;
}
