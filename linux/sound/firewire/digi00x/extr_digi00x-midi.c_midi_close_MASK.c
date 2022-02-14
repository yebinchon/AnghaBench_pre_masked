
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_dg00x {int mutex; int substreams_counter; } ;
struct TYPE_2__ {struct snd_dg00x* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_dg00x*) ;
 int FUNC_3 (struct snd_dg00x*) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_dg00x *VAR_1 = VAR_0->rmidi->private_data;

 FUNC_0(&VAR_1->mutex);
 --VAR_1->substreams_counter;
 FUNC_3(VAR_1);
 FUNC_1(&VAR_1->mutex);

 FUNC_2(VAR_1);
 return 0;
}
