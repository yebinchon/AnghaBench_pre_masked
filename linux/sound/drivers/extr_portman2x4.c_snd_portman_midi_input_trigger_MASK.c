
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct portman {int reg_lock; int * mode; } ;
struct TYPE_2__ {struct portman* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_1,
        int VAR_2)
{
 struct portman *VAR_3 = VAR_1->rmidi->private_data;
 unsigned long VAR_4;

 FUNC_0(&VAR_3->reg_lock, VAR_4);
 if (VAR_2)
  VAR_3->mode[VAR_1->number] |= VAR_0;
 else
  VAR_3->mode[VAR_1->number] &= ~VAR_0;
 FUNC_1(&VAR_3->reg_lock, VAR_4);
}
