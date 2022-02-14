
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi {int parser; int output_work; int trigger; } ;
struct snd_rawmidi_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct snd_virmidi* private_data; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_virmidi*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_virmidi *VAR_1 = VAR_0->runtime->private_data;

 FUNC_0(VAR_1->trigger, 0);
 FUNC_1(&VAR_1->output_work);
 FUNC_3(VAR_1->parser);
 VAR_0->runtime->private_data = ((void*)0);
 FUNC_2(VAR_1);
 return 0;
}
