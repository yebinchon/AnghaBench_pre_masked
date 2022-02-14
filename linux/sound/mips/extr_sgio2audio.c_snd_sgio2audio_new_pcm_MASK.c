
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sgio2audio {int card; } ;
struct snd_pcm {int name; struct snd_sgio2audio* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_1 (struct snd_pcm*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_sgio2audio *VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5->card, "SGI O2 Audio", 0, 1, 1, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->private_data = VAR_5;
 FUNC_2(VAR_6->name, "SGI O2 DAC1");


 FUNC_1(VAR_6, VAR_1,
   &VAR_3);
 FUNC_1(VAR_6, VAR_0,
   &VAR_2);


 VAR_7 = FUNC_0(VAR_5->card, "SGI O2 Audio", 1, 1, 0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->private_data = VAR_5;
 FUNC_2(VAR_6->name, "SGI O2 DAC2");


 FUNC_1(VAR_6, VAR_1,
   &VAR_4);

 return 0;
}
