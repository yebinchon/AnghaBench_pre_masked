
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {int dummy; } ;
struct via82xx {int pci; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct viadev* private_data; } ;


 int FUNC_0 (struct viadev*,struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct via82xx* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct via82xx *VAR_1 = FUNC_2(VAR_0);
 struct viadev *VAR_2 = VAR_0->runtime->private_data;

 FUNC_0(VAR_2, VAR_0, VAR_1->pci);
 FUNC_1(VAR_0);
 return 0;
}
