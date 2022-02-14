
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sh_dac {int card; } ;
struct snd_pcm {int name; struct snd_sh_dac* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int ,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_sh_dac *VAR_4, int VAR_5)
{
 int VAR_6;
 struct snd_pcm *VAR_7;


 VAR_6 = FUNC_2(VAR_4->card, "SH_DAC PCM", VAR_5, 1, 0, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7->private_data = VAR_4;
 FUNC_4(VAR_7->name, "SH_DAC PCM");
 FUNC_3(VAR_7, VAR_2, &VAR_3);


 FUNC_1(VAR_7, VAR_1,
       FUNC_0(VAR_0),
       48 * 1024,
       48 * 1024);

 return 0;
}
