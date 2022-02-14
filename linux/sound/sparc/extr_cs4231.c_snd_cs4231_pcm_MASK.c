
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; int info_flags; struct snd_cs4231* private_data; } ;
struct snd_cs4231 {struct snd_pcm* pcm; TYPE_1__* op; } ;
struct snd_card {struct snd_cs4231* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm*,int ,int *,int,int) ;
 int FUNC_1 (struct snd_card*,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_6)
{
 struct snd_cs4231 *VAR_7 = VAR_6->private_data;
 struct snd_pcm *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, "CS4231", 0, 1, 1, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_8, VAR_3,
   &VAR_5);
 FUNC_2(VAR_8, VAR_2,
   &VAR_4);


 VAR_8->private_data = VAR_7;
 VAR_8->info_flags = VAR_1;
 FUNC_3(VAR_8->name, "CS4231");

 FUNC_0(VAR_8, VAR_0,
           &VAR_7->op->dev,
           64 * 1024, 128 * 1024);

 VAR_7->pcm = VAR_8;

 return 0;
}
