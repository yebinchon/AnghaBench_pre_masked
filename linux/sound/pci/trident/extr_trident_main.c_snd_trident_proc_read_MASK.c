
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* memhdr; scalar_t__ entries; } ;
struct snd_trident {int device; char* spurious_irq_count; char* spurious_irq_max_delta; int spdif_ctrl; int ac97_ctrl; TYPE_1__ tlb; } ;
struct snd_info_entry {struct snd_trident* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_4__ {char* size; char* used; } ;





 int FUNC_0 (struct snd_info_buffer*,char*,...) ;
 char* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0,
      struct snd_info_buffer *VAR_1)
{
 struct snd_trident *VAR_2 = VAR_0->private_data;
 char *VAR_3;

 switch (VAR_2->device) {
 case 128:
  VAR_3 = "SiS 7018 Audio";
  break;
 case 130:
  VAR_3 = "Trident 4DWave PCI DX";
  break;
 case 129:
  VAR_3 = "Trident 4DWave PCI NX";
  break;
 default:
  VAR_3 = "???";
 }
 FUNC_0(VAR_1, "%s\n\n", VAR_3);
 FUNC_0(VAR_1, "Spurious IRQs    : %d\n", VAR_2->spurious_irq_count);
 FUNC_0(VAR_1, "Spurious IRQ dlta: %d\n", VAR_2->spurious_irq_max_delta);
 if (VAR_2->device == 129 || VAR_2->device == 128)
  FUNC_0(VAR_1, "IEC958 Mixer Out : %s\n", VAR_2->spdif_ctrl == 0x28 ? "on" : "off");
 if (VAR_2->device == 129) {
  FUNC_0(VAR_1, "Rear Speakers    : %s\n", VAR_2->ac97_ctrl & 0x00000010 ? "on" : "off");
  if (VAR_2->tlb.entries) {
   FUNC_0(VAR_1,"\nVirtual Memory\n");
   FUNC_0(VAR_1, "Memory Maximum : %d\n", VAR_2->tlb.memhdr->size);
   FUNC_0(VAR_1, "Memory Used    : %d\n", VAR_2->tlb.memhdr->used);
   FUNC_0(VAR_1, "Memory Free    : %d\n", FUNC_1(VAR_2->tlb.memhdr));
  }
 }
}
