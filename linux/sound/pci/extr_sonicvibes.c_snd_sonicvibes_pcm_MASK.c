
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {int pci; struct snd_pcm* pcm; int card; } ;
struct snd_pcm {int name; scalar_t__ info_flags; struct sonicvibes* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct sonicvibes *VAR_6, int VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_3(VAR_6->card, "s3_86c617", VAR_7, 1, 1, &VAR_8)) < 0)
  return VAR_9;
 if (FUNC_0(!VAR_8))
  return -VAR_0;

 FUNC_4(VAR_8, VAR_3, &VAR_5);
 FUNC_4(VAR_8, VAR_2, &VAR_4);

 VAR_8->private_data = VAR_6;
 VAR_8->info_flags = 0;
 FUNC_5(VAR_8->name, "S3 SonicVibes");
 VAR_6->pcm = VAR_8;

 FUNC_2(VAR_8, VAR_1,
           FUNC_1(VAR_6->pci), 64*1024, 128*1024);

 return 0;
}
