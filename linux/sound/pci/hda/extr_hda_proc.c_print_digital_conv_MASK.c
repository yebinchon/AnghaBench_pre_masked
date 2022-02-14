
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_12,
          struct hda_codec *VAR_13, hda_nid_t VAR_14)
{
 unsigned int VAR_15 = FUNC_0(VAR_13, VAR_14, 0,
      VAR_11, 0);
 unsigned char VAR_16 = VAR_15 >> 8;
 unsigned char VAR_17 = VAR_15 >> 16;

 FUNC_1(VAR_12, "  Digital:");
 if (VAR_15 & VAR_2)
  FUNC_1(VAR_12, " Enabled");
 if (VAR_15 & VAR_6)
  FUNC_1(VAR_12, " Validity");
 if (VAR_15 & VAR_7)
  FUNC_1(VAR_12, " ValidityCfg");
 if (VAR_15 & VAR_1)
  FUNC_1(VAR_12, " Preemphasis");
 if (VAR_15 & VAR_0)
  FUNC_1(VAR_12, " Non-Copyright");
 if (VAR_15 & VAR_4)
  FUNC_1(VAR_12, " Non-Audio");
 if (VAR_15 & VAR_5)
  FUNC_1(VAR_12, " Pro");
 if (VAR_15 & VAR_3)
  FUNC_1(VAR_12, " GenLevel");
 if (VAR_17 & VAR_10)
  FUNC_1(VAR_12, " KAE");
 FUNC_1(VAR_12, "\n");
 FUNC_1(VAR_12, "  Digital category: 0x%x\n",
      VAR_16 & VAR_8);
 FUNC_1(VAR_12, "  IEC Coding Type: 0x%x\n",
   VAR_17 & VAR_9);
}
