
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
struct snd_ymfpci_playback_bank {int dummy; } ;
struct snd_ymfpci_effect_bank {int dummy; } ;
struct snd_ymfpci_capture_bank {int dummy; } ;
struct TYPE_4__ {char* area; unsigned long addr; int bytes; } ;
struct snd_ymfpci {int bank_size_playback; int bank_size_capture; int bank_size_effect; long work_size; char* bank_base_playback; unsigned long bank_base_playback_addr; char* bank_base_capture; unsigned long bank_base_capture_addr; char* bank_base_effect; unsigned long bank_base_effect_addr; char* work_base; unsigned long work_base_addr; int spdif_bits; int spdif_pcm_bits; TYPE_2__ work_ptr; struct snd_ymfpci_effect_bank*** bank_effect; struct snd_ymfpci_capture_bank*** bank_capture; struct snd_ymfpci_playback_bank*** bank_playback; TYPE_1__* voices; int * ctrl_playback; int pci; } ;
typedef unsigned long dma_addr_t ;
typedef int __le32 ;
struct TYPE_3__ {int number; unsigned long bank_addr; struct snd_ymfpci_playback_bank* bank; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
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
 int VAR_21 ;
 int VAR_22 ;
 long VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,long) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,long,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_ymfpci*,int ) ;
 int FUNC_7 (struct snd_ymfpci*,int,int) ;
 int FUNC_8 (struct snd_ymfpci*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_ymfpci *VAR_26)
{
 long VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31;
 u8 *VAR_32;
 dma_addr_t VAR_33;

 VAR_28 = 4 + 4 * VAR_25;
 VAR_26->bank_size_playback = FUNC_6(VAR_26, VAR_11) << 2;
 VAR_26->bank_size_capture = FUNC_6(VAR_26, VAR_14) << 2;
 VAR_26->bank_size_effect = FUNC_6(VAR_26, VAR_5) << 2;
 VAR_26->work_size = VAR_23;

 VAR_27 = FUNC_0(VAR_28, 0x100) +
        FUNC_0(VAR_26->bank_size_playback * 2 * VAR_25, 0x100) +
        FUNC_0(VAR_26->bank_size_capture * 2 * VAR_22, 0x100) +
        FUNC_0(VAR_26->bank_size_effect * 2 * VAR_24, 0x100) +
        VAR_26->work_size;


 if (FUNC_4(VAR_1, FUNC_5(VAR_26->pci),
    VAR_27, &VAR_26->work_ptr) < 0)
  return -VAR_0;
 VAR_32 = VAR_26->work_ptr.area;
 VAR_33 = VAR_26->work_ptr.addr;
 FUNC_2(VAR_32, 0, VAR_27);

 VAR_26->bank_base_playback = VAR_32;
 VAR_26->bank_base_playback_addr = VAR_33;
 VAR_26->ctrl_playback = (__le32 *)VAR_32;
 VAR_26->ctrl_playback[0] = FUNC_1(VAR_25);
 VAR_32 += FUNC_0(VAR_28, 0x100);
 VAR_33 += FUNC_0(VAR_28, 0x100);
 for (VAR_29 = 0; VAR_29 < VAR_25; VAR_29++) {
  VAR_26->voices[VAR_29].number = VAR_29;
  VAR_26->voices[VAR_29].bank = (struct snd_ymfpci_playback_bank *)VAR_32;
  VAR_26->voices[VAR_29].bank_addr = VAR_33;
  for (VAR_30 = 0; VAR_30 < 2; VAR_30++) {
   VAR_26->bank_playback[VAR_29][VAR_30] = (struct snd_ymfpci_playback_bank *)VAR_32;
   VAR_32 += VAR_26->bank_size_playback;
   VAR_33 += VAR_26->bank_size_playback;
  }
 }
 VAR_32 = (char *)FUNC_0((unsigned long)VAR_32, 0x100);
 VAR_33 = FUNC_0(VAR_33, 0x100);
 VAR_26->bank_base_capture = VAR_32;
 VAR_26->bank_base_capture_addr = VAR_33;
 for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29++)
  for (VAR_30 = 0; VAR_30 < 2; VAR_30++) {
   VAR_26->bank_capture[VAR_29][VAR_30] = (struct snd_ymfpci_capture_bank *)VAR_32;
   VAR_32 += VAR_26->bank_size_capture;
   VAR_33 += VAR_26->bank_size_capture;
  }
 VAR_32 = (char *)FUNC_0((unsigned long)VAR_32, 0x100);
 VAR_33 = FUNC_0(VAR_33, 0x100);
 VAR_26->bank_base_effect = VAR_32;
 VAR_26->bank_base_effect_addr = VAR_33;
 for (VAR_29 = 0; VAR_29 < VAR_24; VAR_29++)
  for (VAR_30 = 0; VAR_30 < 2; VAR_30++) {
   VAR_26->bank_effect[VAR_29][VAR_30] = (struct snd_ymfpci_effect_bank *)VAR_32;
   VAR_32 += VAR_26->bank_size_effect;
   VAR_33 += VAR_26->bank_size_effect;
  }
 VAR_32 = (char *)FUNC_0((unsigned long)VAR_32, 0x100);
 VAR_33 = FUNC_0(VAR_33, 0x100);
 VAR_26->work_base = VAR_32;
 VAR_26->work_base_addr = VAR_33;

 FUNC_3(VAR_32 + VAR_26->work_size !=
     VAR_26->work_ptr.area + VAR_26->work_ptr.bytes);

 FUNC_7(VAR_26, VAR_10, VAR_26->bank_base_playback_addr);
 FUNC_7(VAR_26, VAR_13, VAR_26->bank_base_capture_addr);
 FUNC_7(VAR_26, VAR_4, VAR_26->bank_base_effect_addr);
 FUNC_7(VAR_26, VAR_19, VAR_26->work_base_addr);
 FUNC_7(VAR_26, VAR_20, VAR_26->work_size >> 2);


 VAR_26->spdif_bits = VAR_26->spdif_pcm_bits = VAR_2 & 0xffff;
 FUNC_8(VAR_26, VAR_16, 0);
 FUNC_8(VAR_26, VAR_17, VAR_26->spdif_bits);


 FUNC_8(VAR_26, VAR_15, 0);


 for (VAR_31 = 0x80; VAR_31 < 0xc0; VAR_31 += 4)
  FUNC_7(VAR_26, VAR_31, 0);
 FUNC_7(VAR_26, VAR_9, 0x3fff3fff);
 FUNC_7(VAR_26, VAR_3, 0x3fff3fff);
 FUNC_7(VAR_26, VAR_21, 0x3fff3fff);
 FUNC_7(VAR_26, VAR_18, 0x3fff3fff);
 FUNC_7(VAR_26, VAR_7, 0x3fff3fff);
 FUNC_7(VAR_26, VAR_8, 0x3fff3fff);
 FUNC_7(VAR_26, VAR_12, 0x3fff3fff);
 FUNC_7(VAR_26, VAR_6, 0x3fff3fff);

 return 0;
}
