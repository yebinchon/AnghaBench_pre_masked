
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_tscm {int lock; int * out_ports; } ;
struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_tscm* private_data; } ;


 int FUNC_0 (int *,struct snd_rawmidi_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct snd_tscm *VAR_2 = VAR_0->rmidi->private_data;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);

 if (VAR_1)
  FUNC_0(&VAR_2->out_ports[VAR_0->number],
        VAR_0);

 FUNC_2(&VAR_2->lock, VAR_3);
}
