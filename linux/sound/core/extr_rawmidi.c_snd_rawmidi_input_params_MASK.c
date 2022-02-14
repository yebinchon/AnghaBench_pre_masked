
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int runtime; } ;
struct snd_rawmidi_params {int dummy; } ;


 int FUNC_0 (int ,struct snd_rawmidi_params*,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*) ;

int FUNC_2(struct snd_rawmidi_substream *VAR_0,
        struct snd_rawmidi_params *VAR_1)
{
 FUNC_1(VAR_0);
 return FUNC_0(VAR_0->runtime, VAR_1, 1);
}
