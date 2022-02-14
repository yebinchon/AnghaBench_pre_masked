
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {int number; TYPE_1__* rmidi; } ;
struct snd_bebob {int lock; int rx_stream; } ;
struct TYPE_2__ {struct snd_bebob* private_data; } ;


 int FUNC_0 (int *,int ,struct snd_rawmidi_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct snd_bebob *VAR_2 = VAR_0->rmidi->private_data;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);

 if (VAR_1)
  FUNC_0(&VAR_2->rx_stream,
      VAR_0->number, VAR_0);
 else
  FUNC_0(&VAR_2->rx_stream,
      VAR_0->number, ((void*)0));

 FUNC_2(&VAR_2->lock, VAR_3);
}
