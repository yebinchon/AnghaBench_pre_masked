
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_info_entry {struct snd_emu10k1* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_emu10k1 {TYPE_1__* card_capabilities; } ;
struct TYPE_2__ {scalar_t__ emu_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_emu10k1*,int,int*) ;
 int FUNC_1 (struct snd_emu10k1*,struct snd_info_buffer*,char*,int ,int ) ;
 int FUNC_2 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_3 (struct snd_info_buffer*,char*,...) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_8,
      struct snd_info_buffer *VAR_9)
{
 struct snd_emu10k1 *VAR_10 = VAR_8->private_data;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 if (VAR_10->card_capabilities->emu_model) {
  FUNC_0(VAR_10, 0x38, &VAR_11);
  if ((VAR_11 & 0x1) == 0) {
   FUNC_0(VAR_10, 0x2a, &VAR_11);
   FUNC_0(VAR_10, 0x2b, &VAR_12);
   VAR_13 = 0x1770000 / (((VAR_11 << 5) | VAR_12)+1);
   FUNC_3(VAR_9, "ADAT Locked : %u\n", VAR_13);
  } else {
   FUNC_3(VAR_9, "ADAT Unlocked\n");
  }
  FUNC_0(VAR_10, 0x20, &VAR_11);
  if ((VAR_11 & 0x4) == 0) {
   FUNC_0(VAR_10, 0x28, &VAR_11);
   FUNC_0(VAR_10, 0x29, &VAR_12);
   VAR_13 = 0x1770000 / (((VAR_11 << 5) | VAR_12)+1);
   FUNC_3(VAR_9, "SPDIF Locked : %d\n", VAR_13);
  } else {
   FUNC_3(VAR_9, "SPDIF Unlocked\n");
  }
 } else {
  FUNC_1(VAR_10, VAR_9, "CD-ROM S/PDIF In", VAR_0, VAR_1);
  FUNC_1(VAR_10, VAR_9, "Optical or Coax S/PDIF In", VAR_2, VAR_3);
 }






}
