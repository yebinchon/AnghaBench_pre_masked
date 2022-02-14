
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_info_buffer {int dummy; } ;
struct snd_ff {int unit; } ;
typedef int reg ;
typedef enum snd_ff_clock_src { ____Placeholder_snd_ff_clock_src } snd_ff_clock_src ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned int*,int*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int *,int,int ) ;
 int FUNC_4 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct snd_ff *VAR_2, struct snd_info_buffer *VAR_3)
{
 __le32 VAR_4;
 u32 VAR_5;
 unsigned int VAR_6;
 enum snd_ff_clock_src VAR_7;
 const char *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_2->unit, VAR_1,
     VAR_0, &VAR_4, sizeof(VAR_4), 0);
 if (VAR_9 < 0)
  return;
 VAR_5 = FUNC_0(VAR_4);

 FUNC_4(VAR_3, "Output S/PDIF format: %s (Emphasis: %s)\n",
      (VAR_5 & 0x00000020) ? "Professional" : "Consumer",
      (VAR_5 & 0x00000040) ? "on" : "off");

 FUNC_4(VAR_3, "Optical output interface format: %s\n",
      (VAR_5 & 0x00000100) ? "S/PDIF" : "ADAT");

 FUNC_4(VAR_3, "Word output single speed: %s\n",
      (VAR_5 & 0x00002000) ? "on" : "off");

 FUNC_4(VAR_3, "S/PDIF input interface: %s\n",
      (VAR_5 & 0x00000200) ? "Optical" : "Coaxial");

 VAR_9 = FUNC_1(VAR_5, &VAR_6, &VAR_7);
 if (VAR_9 < 0)
  return;
 VAR_8 = FUNC_2(VAR_7);
 if (!VAR_8)
  return;

 FUNC_4(VAR_3, "Clock configuration: %d %s\n", VAR_6, VAR_8);
}
