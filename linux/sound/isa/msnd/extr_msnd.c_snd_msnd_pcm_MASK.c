
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; struct snd_msnd* private_data; } ;
struct snd_msnd {int dummy; } ;
struct snd_card {struct snd_msnd* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_card*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_1 (struct snd_pcm*,int ,int *) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct snd_card *VAR_4, int VAR_5)
{
 struct snd_msnd *VAR_6 = VAR_4->private_data;
 struct snd_pcm *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, "MSNDPINNACLE", VAR_5, 1, 1, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(VAR_7, VAR_1, &VAR_3);
 FUNC_1(VAR_7, VAR_0, &VAR_2);

 VAR_7->private_data = VAR_6;
 FUNC_2(VAR_7->name, "Hurricane");

 return 0;
}
