
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int card; int chip_status; } ;
struct snd_vxpocket {int index; } ;
struct pcmcia_device {struct snd_vxpocket* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_2)
{
 struct snd_vxpocket *VAR_3;
 struct vx_core *VAR_4;

 if (! VAR_2)
  return;

 VAR_3 = VAR_2->priv;
 VAR_4 = (struct vx_core *)VAR_3;
 VAR_1 &= ~(1 << VAR_3->index);

 VAR_4->chip_status |= VAR_0;
 FUNC_0(VAR_4->card);
 FUNC_2(VAR_2);
 FUNC_1(VAR_4->card);
}
