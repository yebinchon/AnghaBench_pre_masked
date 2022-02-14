
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_tscm {int * out_ports; } ;
struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_tscm* private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_tscm *VAR_1 = VAR_0->rmidi->private_data;

 FUNC_0(&VAR_1->out_ports[VAR_0->number]);

 return 0;
}
