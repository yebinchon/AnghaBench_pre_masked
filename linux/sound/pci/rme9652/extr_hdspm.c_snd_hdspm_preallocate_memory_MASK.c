
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int dummy; } ;
struct hdspm {TYPE_1__* card; int pci; struct snd_pcm* pcm; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,size_t,size_t) ;

__attribute__((used)) static int FUNC_3(struct hdspm *VAR_2)
{
 struct snd_pcm *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_2->pcm;

 VAR_4 = VAR_0;

 FUNC_2(VAR_3, VAR_1,
           FUNC_1(VAR_2->pci),
           VAR_4, VAR_4);
 FUNC_0(VAR_2->card->dev, " Preallocated %zd Bytes\n", VAR_4);
 return 0;
}
