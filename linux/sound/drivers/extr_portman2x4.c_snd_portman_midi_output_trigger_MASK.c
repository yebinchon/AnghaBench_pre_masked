
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {int number; TYPE_1__* rmidi; } ;
struct portman {int reg_lock; } ;
struct TYPE_2__ {struct portman* private_data; } ;


 int FUNC_0 (struct portman*,int ,unsigned char) ;
 int FUNC_1 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_rawmidi_substream *VAR_0,
         int VAR_1)
{
 struct portman *VAR_2 = VAR_0->rmidi->private_data;
 unsigned long VAR_3;
 unsigned char VAR_4;

 FUNC_2(&VAR_2->reg_lock, VAR_3);
 if (VAR_1) {
  while ((FUNC_1(VAR_0, &VAR_4, 1) == 1))
   FUNC_0(VAR_2, VAR_0->number, VAR_4);
 }
 FUNC_3(&VAR_2->reg_lock, VAR_3);
}
