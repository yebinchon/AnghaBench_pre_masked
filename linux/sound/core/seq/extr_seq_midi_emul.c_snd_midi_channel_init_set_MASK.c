
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel {int dummy; } ;


 int VAR_0 ;
 struct snd_midi_channel* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct snd_midi_channel*,int) ;

__attribute__((used)) static struct snd_midi_channel *FUNC_2(int VAR_1)
{
 struct snd_midi_channel *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1, sizeof(struct snd_midi_channel), VAR_0);
 if (VAR_2) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_1(VAR_2+VAR_3, VAR_3);
 }

 return VAR_2;
}
