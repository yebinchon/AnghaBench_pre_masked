
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef int hda_nid_t ;


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
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (struct hda_codec*,int ,int ) ;
 unsigned int FUNC_6 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_7 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_8(struct snd_info_buffer *VAR_32,
      struct hda_codec *VAR_33, hda_nid_t VAR_34,
      int *VAR_35)
{
 static const char * const VAR_36[4] = {
  "Jack", "N/A", "Fixed", "Both"
 };
 unsigned int VAR_37, VAR_38;

 VAR_37 = FUNC_5(VAR_33, VAR_34, VAR_11);
 FUNC_7(VAR_32, "  Pincap 0x%08x:", VAR_37);
 if (VAR_37 & VAR_19)
  FUNC_7(VAR_32, " IN");
 if (VAR_37 & VAR_20)
  FUNC_7(VAR_32, " OUT");
 if (VAR_37 & VAR_17)
  FUNC_7(VAR_32, " HP");
 if (VAR_37 & VAR_14)
  FUNC_7(VAR_32, " EAPD");
 if (VAR_37 & VAR_21)
  FUNC_7(VAR_32, " Detect");
 if (VAR_37 & VAR_12)
  FUNC_7(VAR_32, " Balanced");
 if (VAR_37 & VAR_16) {

  if ((VAR_33->core.vendor_id >> 16) == 0x10ec)
   FUNC_7(VAR_32, " R/L");
  else {
   if (VAR_37 & VAR_15)
    FUNC_7(VAR_32, " HBR");
   FUNC_7(VAR_32, " HDMI");
  }
 }
 if (VAR_37 & VAR_13)
  FUNC_7(VAR_32, " DP");
 if (VAR_37 & VAR_22)
  FUNC_7(VAR_32, " Trigger");
 if (VAR_37 & VAR_18)
  FUNC_7(VAR_32, " ImpSense");
 FUNC_7(VAR_32, "\n");
 if (VAR_37 & VAR_23) {
  unsigned int VAR_39 =
   (VAR_37 & VAR_23) >> VAR_29;
  FUNC_7(VAR_32, "    Vref caps:");
  if (VAR_39 & VAR_28)
   FUNC_7(VAR_32, " HIZ");
  if (VAR_39 & VAR_25)
   FUNC_7(VAR_32, " 50");
  if (VAR_39 & VAR_27)
   FUNC_7(VAR_32, " GRD");
  if (VAR_39 & VAR_26)
   FUNC_7(VAR_32, " 80");
  if (VAR_39 & VAR_24)
   FUNC_7(VAR_32, " 100");
  FUNC_7(VAR_32, "\n");
  *VAR_35 = 1;
 } else
  *VAR_35 = 0;
 if (VAR_37 & VAR_14) {
  VAR_38 = FUNC_6(VAR_33, VAR_34, 0,
      VAR_31, 0);
  FUNC_7(VAR_32, "  EAPD 0x%x:", VAR_38);
  if (VAR_38 & VAR_8)
   FUNC_7(VAR_32, " BALANCED");
  if (VAR_38 & VAR_9)
   FUNC_7(VAR_32, " EAPD");
  if (VAR_38 & VAR_10)
   FUNC_7(VAR_32, " R/L");
  FUNC_7(VAR_32, "\n");
 }
 VAR_37 = FUNC_6(VAR_33, VAR_34, 0, VAR_30, 0);
 FUNC_7(VAR_32, "  Pin Default 0x%08x: [%s] %s at %s %s\n", VAR_37,
      VAR_36[(VAR_37 & VAR_5) >> VAR_6],
      FUNC_4(VAR_37),
      FUNC_2(VAR_37),
      FUNC_3(VAR_37));
 FUNC_7(VAR_32, "    Conn = %s, Color = %s\n",
      FUNC_1(VAR_37),
      FUNC_0(VAR_37));




 FUNC_7(VAR_32, "    DefAssociation = 0x%x, Sequence = 0x%x\n",
      (VAR_37 & VAR_1) >> VAR_0,
      VAR_37 & VAR_7);
 if (((VAR_37 & VAR_2) >> VAR_4) &
     VAR_3) {




  FUNC_7(VAR_32, "    Misc = NO_PRESENCE\n");
 }
}
