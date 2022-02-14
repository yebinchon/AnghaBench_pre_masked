
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_rawmidi_substream {int dummy; } ;


 int FUNC_0 (struct snd_rawmidi_substream*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi_substream *VAR_0,
        u8 VAR_1)
{
 u8 VAR_2[2];

 VAR_2[0] = VAR_1 >> 4;
 VAR_2[1] = VAR_1 & 0x0f;
 FUNC_0(VAR_0, VAR_2, 2);
}
