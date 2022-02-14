
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct hda_codec* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {unsigned int afg; } ;
struct hda_codec {int (* proc_widget_hook ) (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;scalar_t__ dp_mst; scalar_t__ pin_amp_workaround; scalar_t__ single_adc_amp; int nids; int mixers; TYPE_1__ core; } ;
typedef unsigned int hda_nid_t ;


 int VAR_0 ;
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
 unsigned int VAR_14 ;




 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int*) ;
 unsigned int* FUNC_4 (int,int,int ) ;
 unsigned int FUNC_5 (struct hda_codec*,unsigned int,int ) ;
 int FUNC_6 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int ) ;
 int FUNC_7 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int ,unsigned int,int) ;
 int FUNC_8 (struct snd_info_buffer*,struct hda_codec*,unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_1__*,struct snd_info_buffer*) ;
 int FUNC_10 (struct snd_info_buffer*,struct hda_codec*,unsigned int,unsigned int,unsigned int*,int) ;
 int FUNC_11 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_12 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_13 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_14 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int *) ;
 int FUNC_15 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_16 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_17 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int*) ;
 int FUNC_18 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int) ;
 int FUNC_19 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_20 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_21 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_22 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_23 (struct hda_codec*,unsigned int) ;
 scalar_t__ FUNC_24 (struct hda_codec*,unsigned int,unsigned int*,int) ;
 int FUNC_25 (struct hda_codec*,unsigned int,unsigned int*) ;
 int FUNC_26 (struct hda_codec*) ;
 int FUNC_27 (struct hda_codec*) ;
 int FUNC_28 (struct snd_info_buffer*,char*,...) ;
 int FUNC_29 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_30 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;

__attribute__((used)) static void FUNC_31(struct snd_info_entry *VAR_18,
        struct snd_info_buffer *VAR_19)
{
 struct hda_codec *VAR_20 = VAR_18->private_data;
 hda_nid_t VAR_21, VAR_22;
 int VAR_23, VAR_24;

 FUNC_9(&VAR_20->core, VAR_19);
 VAR_22 = VAR_20->core.afg;
 if (!VAR_22)
  return;
 FUNC_27(VAR_20);
 FUNC_28(VAR_19, "Default PCM:\n");
 FUNC_16(VAR_19, VAR_20, VAR_22);
 FUNC_28(VAR_19, "Default Amp-In caps: ");
 FUNC_6(VAR_19, VAR_20, VAR_22, VAR_16);
 FUNC_28(VAR_19, "Default Amp-Out caps: ");
 FUNC_6(VAR_19, VAR_20, VAR_22, VAR_17);
 FUNC_28(VAR_19, "State of AFG node 0x%02x:\n", VAR_22);
 FUNC_19(VAR_19, VAR_20, VAR_22);

 VAR_24 = FUNC_25(VAR_20, VAR_22, &VAR_21);
 if (! VAR_21 || VAR_24 < 0) {
  FUNC_28(VAR_19, "Invalid AFG subtree\n");
  FUNC_26(VAR_20);
  return;
 }

 FUNC_13(VAR_19, VAR_20, VAR_22);
 if (VAR_20->proc_widget_hook)
  VAR_20->proc_widget_hook(VAR_19, VAR_20, VAR_22);

 for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++, VAR_21++) {
  unsigned int VAR_25 =
   FUNC_5(VAR_20, VAR_21, VAR_0);
  unsigned int VAR_26 = FUNC_1(VAR_25);
  hda_nid_t *VAR_27 = ((void*)0);
  int VAR_28 = 0;

  FUNC_28(VAR_19, "Node 0x%02x [%s] wcaps 0x%x:", VAR_21,
       FUNC_2(VAR_26), VAR_25);
  if (VAR_25 & VAR_12) {
   unsigned int VAR_29 = FUNC_0(VAR_25);
   if (VAR_29 == 2)
    FUNC_28(VAR_19, " Stereo");
   else
    FUNC_28(VAR_19, " %d-Channels", VAR_29);
  } else
   FUNC_28(VAR_19, " Mono");
  if (VAR_25 & VAR_5)
   FUNC_28(VAR_19, " Digital");
  if (VAR_25 & VAR_7)
   FUNC_28(VAR_19, " Amp-In");
  if (VAR_25 & VAR_9)
   FUNC_28(VAR_19, " Amp-Out");
  if (VAR_25 & VAR_13)
   FUNC_28(VAR_19, " Stripe");
  if (VAR_25 & VAR_8)
   FUNC_28(VAR_19, " R/L");
  if (VAR_25 & VAR_2)
   FUNC_28(VAR_19, " CP");
  FUNC_28(VAR_19, "\n");

  FUNC_14(VAR_19, VAR_20, VAR_21, &VAR_20->mixers);
  FUNC_14(VAR_19, VAR_20, VAR_21, &VAR_20->nids);
  FUNC_15(VAR_19, VAR_20, VAR_21);




  if (VAR_26 == 128)
   VAR_25 |= VAR_1;

  if (VAR_25 & VAR_1) {
   VAR_28 = FUNC_23(VAR_20, VAR_21);
   if (VAR_28 > 0) {
    VAR_27 = FUNC_4(VAR_28,
           sizeof(hda_nid_t),
           VAR_15);
    if (!VAR_27)
     return;
    if (FUNC_24(VAR_20, VAR_21, VAR_27,
        VAR_28) < 0)
     VAR_28 = 0;
   }
  }

  if (VAR_25 & VAR_7) {
   FUNC_28(VAR_19, "  Amp-In caps: ");
   FUNC_6(VAR_19, VAR_20, VAR_21, VAR_16);
   FUNC_28(VAR_19, "  Amp-In vals: ");
   if (VAR_26 == 129 ||
       (VAR_20->single_adc_amp &&
        VAR_26 == 131))
    FUNC_7(VAR_19, VAR_20, VAR_21, VAR_16,
            VAR_25, 1);
   else
    FUNC_7(VAR_19, VAR_20, VAR_21, VAR_16,
            VAR_25, VAR_28);
  }
  if (VAR_25 & VAR_9) {
   FUNC_28(VAR_19, "  Amp-Out caps: ");
   FUNC_6(VAR_19, VAR_20, VAR_21, VAR_17);
   FUNC_28(VAR_19, "  Amp-Out vals: ");
   if (VAR_26 == 129 &&
       VAR_20->pin_amp_workaround)
    FUNC_7(VAR_19, VAR_20, VAR_21, VAR_17,
            VAR_25, VAR_28);
   else
    FUNC_7(VAR_19, VAR_20, VAR_21, VAR_17,
            VAR_25, 1);
  }

  switch (VAR_26) {
  case 129: {
   int VAR_30;
   FUNC_17(VAR_19, VAR_20, VAR_21, &VAR_30);
   FUNC_18(VAR_19, VAR_20, VAR_21, VAR_30);
   break;
  }
  case 128:
   FUNC_22(VAR_19, VAR_20, VAR_21);
   break;
  case 130:
  case 131:
   FUNC_8(VAR_19, VAR_20, VAR_21, VAR_26);
   if (VAR_25 & VAR_5)
    FUNC_12(VAR_19, VAR_20, VAR_21);
   if (VAR_25 & VAR_6) {
    FUNC_28(VAR_19, "  PCM:\n");
    FUNC_16(VAR_19, VAR_20, VAR_21);
   }
   break;
  }

  if (VAR_25 & VAR_14)
   FUNC_21(VAR_19, VAR_20, VAR_21);

  if (VAR_25 & VAR_10)
   FUNC_19(VAR_19, VAR_20, VAR_21);

  if (VAR_25 & VAR_3)
   FUNC_28(VAR_19, "  Delay: %d samples\n",
        (VAR_25 & VAR_3) >>
        VAR_4);

  if (VAR_26 == 129 && VAR_20->dp_mst)
   FUNC_11(VAR_19, VAR_20, VAR_21);

  if (VAR_25 & VAR_1)
   FUNC_10(VAR_19, VAR_20, VAR_21, VAR_26,
     VAR_27, VAR_28);

  if (VAR_25 & VAR_11)
   FUNC_20(VAR_19, VAR_20, VAR_21);

  if (VAR_20->proc_widget_hook)
   VAR_20->proc_widget_hook(VAR_19, VAR_20, VAR_21);

  FUNC_3(VAR_27);
 }
 FUNC_26(VAR_20);
}
