
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; struct snd_als300* private_data; } ;
struct snd_als300 {int pci; struct snd_pcm* pcm; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_als300 *VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->card, "ALS300", 0, 1, 1, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6->private_data = VAR_5;
 FUNC_4(VAR_6->name, "ALS300");
 VAR_5->pcm = VAR_6;


 FUNC_3(VAR_6, VAR_2,
    &VAR_4);
 FUNC_3(VAR_6, VAR_1,
    &VAR_3);


 FUNC_1(VAR_6, VAR_0,
 FUNC_0(VAR_5->pci), 64*1024, 64*1024);
 return 0;
}
