
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_emu10k1* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_1,
      struct snd_info_buffer *VAR_2)
{
 static int VAR_3[8] = { 44100, 48000, 96000, 192000, 4, 5, 6, 7 };
 struct snd_emu10k1 *VAR_4 = VAR_1->private_data;
 unsigned int VAR_5, VAR_6, VAR_7;
 VAR_5 = FUNC_0(VAR_4, VAR_0, 0);
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_6 = VAR_5 >> (16 + (VAR_7*4));
  if (VAR_6 & 0x8) FUNC_1(VAR_2, "Channel %d: Rate=%d\n", VAR_7, VAR_3[VAR_6 & 0x7]);
  else FUNC_1(VAR_2, "Channel %d: No input\n", VAR_7);
 }
}
