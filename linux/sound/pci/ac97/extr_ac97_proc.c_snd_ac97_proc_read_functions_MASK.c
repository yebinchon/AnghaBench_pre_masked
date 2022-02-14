
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,int) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_3, struct snd_info_buffer *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 unsigned short VAR_7, VAR_8;
 static const char *VAR_9[12] = {
  "Master Out", "AUX Out", "Center/LFE Out", "SPDIF Out",
  "Phone In", "Mic 1", "Mic 2", "Line In", "CD In", "Video In",
  "Aux In", "Mono Out"
 };
 static const char *VAR_10[8] = {
  "Rear I/O Panel", "Front Panel", "Motherboard", "Dock/External",
  "reserved", "reserved", "reserved", "NC/unused"
 };

 for (VAR_6 = 0; VAR_6 < 12; ++VAR_6) {
  FUNC_1(VAR_3, VAR_1, VAR_6 << 1);
  VAR_7 = FUNC_0(VAR_3, VAR_0);
  if (!(VAR_7 & 0x0001))
   continue;
  if (!VAR_5) {
   FUNC_2(VAR_4, "\n                    Gain     Inverted  Buffer delay  Location\n");
   VAR_5 = 1;
  }
  VAR_8 = FUNC_0(VAR_3, VAR_2);
  FUNC_2(VAR_4, "%-17s: %3d.%d dBV    %c      %2d/fs         %s\n",
       VAR_9[VAR_6],
       (VAR_7 & 0x8000 ? -1 : 1) * ((VAR_7 & 0x7000) >> 12) * 3 / 2,
       ((VAR_7 & 0x0800) >> 11) * 5,
       VAR_7 & 0x0400 ? 'X' : '-',
       (VAR_7 & 0x03e0) >> 5,
       VAR_10[VAR_8 >> 13]);
 }
}
