
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_info_entry {struct snd_ca0106* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ca0106 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_info_buffer*,int) ;
 int FUNC_1 (struct snd_ca0106*,int ,int ) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_2,
           struct snd_info_buffer *VAR_3)
{
 struct snd_ca0106 *VAR_4 = VAR_2->private_data;
 u32 VAR_5;

        VAR_5 = FUNC_1(VAR_4, VAR_0, 0);
 FUNC_2(VAR_3, "Status: %s, %s, %s\n",
    (VAR_5 & 0x100000) ? "Rate Locked" : "Not Rate Locked",
    (VAR_5 & 0x200000) ? "SPDIF Locked" : "No SPDIF Lock",
    (VAR_5 & 0x400000) ? "Audio Valid" : "No valid audio" );
 FUNC_2(VAR_3, "Estimated sample rate: %u\n",
    ((VAR_5 & 0xfffff) * 48000) / 0x8000 );
 if (VAR_5 & 0x200000) {
  FUNC_2(VAR_3, "IEC958/SPDIF input status:\n");
         VAR_5 = FUNC_1(VAR_4, VAR_1, 0);
  FUNC_0(VAR_3, VAR_5);
 }

 FUNC_2(VAR_3, "\n");
}
