
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct mtpav_port {struct snd_rawmidi_substream* input; int mode; } ;
struct mtpav {int spinlock; int share_irq; struct mtpav_port* ports; } ;
struct TYPE_2__ {struct mtpav* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtpav*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi_substream *VAR_4)
{
 struct mtpav *VAR_5 = VAR_4->rmidi->private_data;
 struct mtpav_port *VAR_6 = &VAR_5->ports[VAR_4->number];
 unsigned long VAR_7;

 FUNC_1(&VAR_5->spinlock, VAR_7);
 VAR_6->mode |= VAR_1;
 VAR_6->input = VAR_4;
 if (VAR_5->share_irq++ == 0)
  FUNC_0(VAR_5, VAR_0, (VAR_2 | VAR_3));
 FUNC_2(&VAR_5->spinlock, VAR_7);
 return 0;
}
