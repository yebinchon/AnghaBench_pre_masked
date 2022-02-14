
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {int srs_space; int srs_center; int wave_source; unsigned char mpu_switch; } ;
struct snd_info_entry {struct sonicvibes* private_data; } ;
struct snd_info_buffer {int dummy; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_0,
         struct snd_info_buffer *VAR_1)
{
 struct sonicvibes *VAR_2 = VAR_0->private_data;
 unsigned char VAR_3;

 VAR_3 = VAR_2->srs_space & 0x0f;
 FUNC_0(VAR_1, "SRS 3D           : %s\n",
      VAR_2->srs_space & 0x80 ? "off" : "on");
 FUNC_0(VAR_1, "SRS Space        : %s\n",
      VAR_3 == 0x00 ? "100%" :
      VAR_3 == 0x01 ? "75%" :
      VAR_3 == 0x02 ? "50%" :
      VAR_3 == 0x03 ? "25%" : "0%");
 VAR_3 = VAR_2->srs_center & 0x0f;
 FUNC_0(VAR_1, "SRS Center       : %s\n",
      VAR_3 == 0x00 ? "100%" :
      VAR_3 == 0x01 ? "75%" :
      VAR_3 == 0x02 ? "50%" :
      VAR_3 == 0x03 ? "25%" : "0%");
 VAR_3 = VAR_2->wave_source & 0x03;
 FUNC_0(VAR_1, "WaveTable Source : %s\n",
      VAR_3 == 0x00 ? "on-board ROM" :
      VAR_3 == 0x01 ? "PCI bus" : "on-board ROM + PCI bus");
 VAR_3 = VAR_2->mpu_switch;
 FUNC_0(VAR_1, "Onboard synth    : %s\n", VAR_3 & 0x01 ? "on" : "off");
 FUNC_0(VAR_1, "Ext. Rx to synth : %s\n", VAR_3 & 0x02 ? "on" : "off");
 FUNC_0(VAR_1, "MIDI to ext. Tx  : %s\n", VAR_3 & 0x04 ? "on" : "off");
}
