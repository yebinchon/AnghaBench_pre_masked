
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {unsigned int number; TYPE_1__* rmidi; } ;
struct snd_dg00x {int lock; int rx_stream; } ;
struct TYPE_2__ {scalar_t__ device; struct snd_dg00x* private_data; } ;


 int FUNC_0 (int *,unsigned int,struct snd_rawmidi_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0,
      int VAR_1)
{
 struct snd_dg00x *VAR_2 = VAR_0->rmidi->private_data;
 unsigned int VAR_3;
 unsigned long VAR_4;

 if (VAR_0->rmidi->device == 0)
  VAR_3 = VAR_0->number;
 else
  VAR_3 = 2;

 FUNC_1(&VAR_2->lock, VAR_4);

 if (VAR_1)
  FUNC_0(&VAR_2->rx_stream, VAR_3, VAR_0);
 else
  FUNC_0(&VAR_2->rx_stream, VAR_3, ((void*)0));

 FUNC_2(&VAR_2->lock, VAR_4);
}
