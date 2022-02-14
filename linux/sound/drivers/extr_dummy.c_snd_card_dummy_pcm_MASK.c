
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_ops {int dummy; } ;
struct snd_pcm {int name; scalar_t__ info_flags; struct snd_dummy* private_data; } ;
struct snd_dummy {struct snd_pcm* pcm; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_pcm_ops VAR_4 ;
 struct snd_pcm_ops VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int ,int) ;
 int FUNC_2 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,struct snd_pcm_ops*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_dummy *VAR_7, int VAR_8,
         int VAR_9)
{
 struct snd_pcm *VAR_10;
 struct snd_pcm_ops *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_7->card, "Dummy PCM", VAR_8,
          VAR_9, VAR_9, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_7->pcm = VAR_10;
 if (VAR_6)
  VAR_11 = &VAR_5;
 else
  VAR_11 = &VAR_4;
 FUNC_3(VAR_10, VAR_3, VAR_11);
 FUNC_3(VAR_10, VAR_2, VAR_11);
 VAR_10->private_data = VAR_7;
 VAR_10->info_flags = 0;
 FUNC_4(VAR_10->name, "Dummy PCM");
 if (!VAR_6) {
  FUNC_1(VAR_10,
   VAR_1,
   FUNC_0(VAR_0),
   0, 64*1024);
 }
 return 0;
}
