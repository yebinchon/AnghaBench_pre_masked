
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int info_flags; int name; struct hdspm* private_data; } ;
struct snd_card {int dummy; } ;
struct hdspm {int card_name; struct snd_pcm* pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdspm*) ;
 int FUNC_1 (struct snd_card*,int ,int ,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_4,
    struct hdspm *VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5->card_name, 0, 1, 1, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->pcm = VAR_6;
 VAR_6->private_data = VAR_5;
 FUNC_3(VAR_6->name, VAR_5->card_name);

 FUNC_2(VAR_6, VAR_2,
   &VAR_3);
 FUNC_2(VAR_6, VAR_1,
   &VAR_3);

 VAR_6->info_flags = VAR_0;

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
