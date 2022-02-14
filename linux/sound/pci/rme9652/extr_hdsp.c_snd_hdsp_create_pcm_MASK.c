
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int info_flags; int name; struct hdsp* private_data; } ;
struct snd_card {int dummy; } ;
struct hdsp {int card_name; struct snd_pcm* pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_card*,int ,int ,int,int,struct snd_pcm**) ;
 int FUNC_1 (struct snd_pcm*,int ,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_5, struct hdsp *VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_0(VAR_5, VAR_6->card_name, 0, 1, 1, &VAR_7)) < 0)
  return VAR_8;

 VAR_6->pcm = VAR_7;
 VAR_7->private_data = VAR_6;
 FUNC_2(VAR_7->name, VAR_6->card_name);

 FUNC_1(VAR_7, VAR_2, &VAR_4);
 FUNC_1(VAR_7, VAR_1, &VAR_3);

 VAR_7->info_flags = VAR_0;

 return 0;
}
