
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct snd_emu10k1 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int FUNC_0 (struct snd_emu10k1*,int,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_emu10k1 * VAR_14,
       struct snd_info_buffer *VAR_15,
       char *VAR_16,
       int VAR_17,
       int VAR_18)
{
 static char *VAR_19[4] = { "1000ppm", "50ppm", "variable", "unknown" };
 static int VAR_20[16] = { 44100, 1, 48000, 32000, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
 static char *VAR_21[16] = { "unspec", "left", "right", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15" };
 static char *VAR_22[8] = { "none", "50/15 usec 2 channel", "2", "3", "4", "5", "6", "7" };
 unsigned int VAR_23, VAR_24 = 0;

 VAR_23 = FUNC_0(VAR_14, VAR_17, 0);

 FUNC_1(VAR_15, "\n%s\n", VAR_16);

 if (VAR_23 != 0xffffffff) {
  FUNC_1(VAR_15, "Professional Mode     : %s\n", (VAR_23 & VAR_8) ? "yes" : "no");
  FUNC_1(VAR_15, "Not Audio Data        : %s\n", (VAR_23 & VAR_7) ? "yes" : "no");
  FUNC_1(VAR_15, "Copyright             : %s\n", (VAR_23 & VAR_3) ? "yes" : "no");
  FUNC_1(VAR_15, "Emphasis              : %s\n", VAR_22[(VAR_23 & VAR_4) >> 3]);
  FUNC_1(VAR_15, "Mode                  : %i\n", (VAR_23 & VAR_6) >> 6);
  FUNC_1(VAR_15, "Category Code         : 0x%x\n", (VAR_23 & VAR_0) >> 8);
  FUNC_1(VAR_15, "Generation Status     : %s\n", VAR_23 & VAR_5 ? "original" : "copy");
  FUNC_1(VAR_15, "Source Mask           : %i\n", (VAR_23 & VAR_10) >> 16);
  FUNC_1(VAR_15, "Channel Number        : %s\n", VAR_21[(VAR_23 & VAR_1) >> 20]);
  FUNC_1(VAR_15, "Sample Rate           : %iHz\n", VAR_20[(VAR_23 & VAR_9) >> 24]);
  FUNC_1(VAR_15, "Clock Accuracy        : %s\n", VAR_19[(VAR_23 & VAR_2) >> 28]);

  if (VAR_18 > 0) {
   VAR_24 = FUNC_0(VAR_14, VAR_18, 0);
   FUNC_1(VAR_15, "S/PDIF Valid          : %s\n", VAR_24 & VAR_13 ? "on" : "off");
   FUNC_1(VAR_15, "S/PDIF Locked         : %s\n", VAR_24 & VAR_12 ? "on" : "off");
   FUNC_1(VAR_15, "Rate Locked           : %s\n", VAR_24 & VAR_11 ? "on" : "off");

   FUNC_1(VAR_15, "Estimated Sample Rate : %d\n", ((VAR_24 & 0xFFFFF ) * 375) >> 11);
  }
 } else {
  FUNC_1(VAR_15, "No signal detected.\n");
 }

}
