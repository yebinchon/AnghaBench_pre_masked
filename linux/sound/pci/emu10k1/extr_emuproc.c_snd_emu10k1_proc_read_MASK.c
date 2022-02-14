
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_info_entry {struct snd_emu10k1* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_5__ {scalar_t__ bytes; } ;
struct TYPE_6__ {TYPE_2__ etram_pages; int itram_size; } ;
struct snd_emu10k1 {int* efx_voices_mask; scalar_t__ audigy; TYPE_3__ fx8010; TYPE_1__* card_capabilities; } ;
struct TYPE_4__ {scalar_t__ ecard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct snd_emu10k1*,int ,int) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_4,
      struct snd_info_buffer *VAR_5)
{

 static char *VAR_6[32] = {
           "AC97 Left",
           "AC97 Right",
           "Optical IEC958 Left",
           "Optical IEC958 Right",
           "Center",
           "LFE",
           "Headphone Left",
           "Headphone Right",
           "Surround Left",
           "Surround Right",
           "PCM Capture Left",
           "PCM Capture Right",
           "MIC Capture",
           "AC97 Surround Left",
           "AC97 Surround Right",
           "???",
           "???",
           "Analog Center",
           "Analog LFE",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???"
 };

 static char *VAR_7[64] = {
           "Digital Front Left",
           "Digital Front Right",
           "Digital Center",
           "Digital LEF",
           "Headphone Left",
           "Headphone Right",
           "Digital Rear Left",
           "Digital Rear Right",
           "Front Left",
           "Front Right",
           "Center",
           "LFE",
           "???",
           "???",
           "Rear Left",
           "Rear Right",
           "AC97 Front Left",
           "AC97 Front Right",
           "ADC Capture Left",
           "ADC Capture Right",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "???",
           "FXBUS2_0",
           "FXBUS2_1",
           "FXBUS2_2",
           "FXBUS2_3",
           "FXBUS2_4",
           "FXBUS2_5",
           "FXBUS2_6",
           "FXBUS2_7",
           "FXBUS2_8",
           "FXBUS2_9",
           "FXBUS2_10",
           "FXBUS2_11",
           "FXBUS2_12",
           "FXBUS2_13",
           "FXBUS2_14",
           "FXBUS2_15",
           "FXBUS2_16",
           "FXBUS2_17",
           "FXBUS2_18",
           "FXBUS2_19",
           "FXBUS2_20",
           "FXBUS2_21",
           "FXBUS2_22",
           "FXBUS2_23",
           "FXBUS2_24",
           "FXBUS2_25",
           "FXBUS2_26",
           "FXBUS2_27",
           "FXBUS2_28",
           "FXBUS2_29",
           "FXBUS2_30",
           "FXBUS2_31"
 };

 struct snd_emu10k1 *VAR_8 = VAR_4->private_data;
 unsigned int VAR_9, VAR_10;
 int VAR_11 = VAR_8->audigy ? 64 : 32;
 char **VAR_12 = VAR_8->audigy ? VAR_7 : VAR_6;
 int VAR_13;

 FUNC_1(VAR_5, "EMU10K1\n\n");
 FUNC_1(VAR_5, "Card                  : %s\n",
      VAR_8->audigy ? "Audigy" : (VAR_8->card_capabilities->ecard ? "EMU APS" : "Creative"));
 FUNC_1(VAR_5, "Internal TRAM (words) : 0x%x\n", VAR_8->fx8010.itram_size);
 FUNC_1(VAR_5, "External TRAM (words) : 0x%x\n", (int)VAR_8->fx8010.etram_pages.bytes / 2);
 FUNC_1(VAR_5, "\n");
 FUNC_1(VAR_5, "Effect Send Routing   :\n");
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_9 = VAR_8->audigy ?
   FUNC_0(VAR_8, VAR_0, VAR_13) :
   FUNC_0(VAR_8, VAR_2, VAR_13);
  VAR_10 = VAR_8->audigy ?
   FUNC_0(VAR_8, VAR_1, VAR_13) :
   0;
  if (VAR_8->audigy) {
   FUNC_1(VAR_5, "Ch%i: A=%i, B=%i, C=%i, D=%i, ",
    VAR_13,
    VAR_9 & 0x3f,
    (VAR_9 >> 8) & 0x3f,
    (VAR_9 >> 16) & 0x3f,
    (VAR_9 >> 24) & 0x3f);
   FUNC_1(VAR_5, "E=%i, F=%i, G=%i, H=%i\n",
    VAR_10 & 0x3f,
    (VAR_10 >> 8) & 0x3f,
    (VAR_10 >> 16) & 0x3f,
    (VAR_10 >> 24) & 0x3f);
  } else {
   FUNC_1(VAR_5, "Ch%i: A=%i, B=%i, C=%i, D=%i\n",
    VAR_13,
    (VAR_9 >> 16) & 0x0f,
    (VAR_9 >> 20) & 0x0f,
    (VAR_9 >> 24) & 0x0f,
    (VAR_9 >> 28) & 0x0f);
  }
 }
 FUNC_1(VAR_5, "\nCaptured FX Outputs   :\n");
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  if (VAR_8->efx_voices_mask[VAR_13/32] & (1 << (VAR_13%32)))
   FUNC_1(VAR_5, "  Output %02i [%s]\n", VAR_13, VAR_12[VAR_13]);
 }
 FUNC_1(VAR_5, "\nAll FX Outputs        :\n");
 for (VAR_13 = 0; VAR_13 < (VAR_8->audigy ? 64 : 32); VAR_13++)
  FUNC_1(VAR_5, "  Output %02i [%s]\n", VAR_13, VAR_12[VAR_13]);
}
