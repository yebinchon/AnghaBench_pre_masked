
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_uart16550 {int open_lock; int filemode; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_uart16550* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_1,
     int VAR_2)
{
 unsigned long VAR_3;
 struct snd_uart16550 *VAR_4 = VAR_1->rmidi->private_data;

 FUNC_0(&VAR_4->open_lock, VAR_3);
 if (VAR_2)
  VAR_4->filemode |= VAR_0;
 else
  VAR_4->filemode &= ~VAR_0;
 FUNC_1(&VAR_4->open_lock, VAR_3);
}
