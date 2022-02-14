
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int use_count; int active_sensing; int runtime; scalar_t__ append; } ;
struct snd_rawmidi_params {int no_active_sensing; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct snd_rawmidi_params*,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*) ;

int FUNC_2(struct snd_rawmidi_substream *VAR_1,
         struct snd_rawmidi_params *VAR_2)
{
 if (VAR_1->append && VAR_1->use_count > 1)
  return -VAR_0;
 FUNC_1(VAR_1);
 VAR_1->active_sensing = !VAR_2->no_active_sensing;
 return FUNC_0(VAR_1->runtime, VAR_2, 0);
}
