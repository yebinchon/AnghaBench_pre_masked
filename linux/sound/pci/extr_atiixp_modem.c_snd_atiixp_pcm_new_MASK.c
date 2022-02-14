
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; struct atiixp_modem* private_data; int dev_class; } ;
struct atiixp_modem {int pci; struct snd_pcm** pcmdevs; int card; TYPE_1__* dmas; } ;
struct TYPE_2__ {int * ops; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,size_t,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct atiixp_modem *VAR_11)
{
 struct snd_pcm *VAR_12;
 int VAR_13;


 VAR_11->dmas[VAR_1].ops = &VAR_9;
 VAR_11->dmas[VAR_0].ops = &VAR_7;


 VAR_13 = FUNC_2(VAR_11->card, "ATI IXP MC97", VAR_2, 1, 1, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_3(VAR_12, VAR_6, &VAR_10);
 FUNC_3(VAR_12, VAR_5, &VAR_8);
 VAR_12->dev_class = VAR_4;
 VAR_12->private_data = VAR_11;
 FUNC_4(VAR_12->name, "ATI IXP MC97");
 VAR_11->pcmdevs[VAR_2] = VAR_12;

 FUNC_1(VAR_12, VAR_3,
           FUNC_0(VAR_11->pci),
           64*1024, 128*1024);

 return 0;
}
