
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_info_entry {struct snd_ad1889* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ad1889 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct snd_ad1889*,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct snd_info_entry *VAR_21, struct snd_info_buffer *VAR_22)
{
 struct snd_ad1889 *VAR_23 = VAR_21->private_data;
 u16 VAR_24;
 int VAR_25;

 VAR_24 = FUNC_0(VAR_23, VAR_14);
 FUNC_1(VAR_22, "Wave output: %s\n",
   (VAR_24 & VAR_18) ? "enabled" : "disabled");
 FUNC_1(VAR_22, "Wave Channels: %s\n",
   (VAR_24 & VAR_20) ? "stereo" : "mono");
 FUNC_1(VAR_22, "Wave Quality: %d-bit linear\n",
   (VAR_24 & VAR_17) ? 16 : 8);


 VAR_25 = (VAR_24 & VAR_19) ?
  ((((VAR_24 & VAR_19) >> 12) & 0x01) ? 12 : 18) : 4;
 VAR_25 /= (VAR_24 & VAR_20) ? 2 : 1;

 FUNC_1(VAR_22, "Wave FIFO: %d %s words\n\n", VAR_25,
   (VAR_24 & VAR_20) ? "stereo" : "mono");


 FUNC_1(VAR_22, "Synthesis output: %s\n",
   VAR_24 & VAR_15 ? "enabled" : "disabled");


 VAR_25 = (VAR_24 & VAR_16) ?
  ((((VAR_24 & VAR_16) >> 4) & 0x01) ? 12 : 18) : 4;
 VAR_25 /= (VAR_24 & VAR_20) ? 2 : 1;

 FUNC_1(VAR_22, "Synthesis FIFO: %d %s words\n\n", VAR_25,
   (VAR_24 & VAR_20) ? "stereo" : "mono");

 VAR_24 = FUNC_0(VAR_23, VAR_0);
 FUNC_1(VAR_22, "ADC input: %s\n",
   (VAR_24 & VAR_3) ? "enabled" : "disabled");
 FUNC_1(VAR_22, "ADC Channels: %s\n",
   (VAR_24 & VAR_4) ? "stereo" : "mono");
 FUNC_1(VAR_22, "ADC Quality: %d-bit linear\n",
   (VAR_24 & VAR_2) ? 16 : 8);


 VAR_25 = (VAR_24 & VAR_1) ?
  ((((VAR_24 & VAR_1) >> 4) & 0x01) ? 12 : 18) : 4;
 VAR_25 /= (VAR_24 & VAR_4) ? 2 : 1;

 FUNC_1(VAR_22, "ADC FIFO: %d %s words\n\n", VAR_25,
   (VAR_24 & VAR_4) ? "stereo" : "mono");

 FUNC_1(VAR_22, "Resampler input: %s\n",
   VAR_24 & VAR_5 ? "enabled" : "disabled");


 VAR_25 = (VAR_24 & VAR_6) ?
  ((((VAR_24 & VAR_6) >> 12) & 0x01) ? 12 : 18) : 4;
 VAR_25 /= (VAR_24 & VAR_4) ? 2 : 1;

 FUNC_1(VAR_22, "Resampler FIFO: %d %s words\n\n", VAR_25,
   (VAR_24 & VAR_20) ? "stereo" : "mono");





 VAR_24 = FUNC_0(VAR_23, VAR_8);
 FUNC_1(VAR_22, "Left: %s, -%d dB\n",
   (VAR_24 & VAR_10) ? "mute" : "unmute",
   ((VAR_24 & VAR_9) >> 8) * 3);
 VAR_24 = FUNC_0(VAR_23, VAR_8);
 FUNC_1(VAR_22, "Right: %s, -%d dB\n",
   (VAR_24 & VAR_12) ? "mute" : "unmute",
   (VAR_24 & VAR_11) * 3);

 VAR_24 = FUNC_0(VAR_23, VAR_13);
 FUNC_1(VAR_22, "Wave samplerate: %u Hz\n", VAR_24);
 VAR_24 = FUNC_0(VAR_23, VAR_7);
 FUNC_1(VAR_22, "Resampler samplerate: %u Hz\n", VAR_24);
}
