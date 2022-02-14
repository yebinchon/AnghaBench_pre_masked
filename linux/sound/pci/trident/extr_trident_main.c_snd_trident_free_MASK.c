
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ area; } ;
struct TYPE_3__ {TYPE_2__ buffer; int shadow_entries; TYPE_2__ silent_page; int memhdr; } ;
struct snd_trident {scalar_t__ device; scalar_t__ irq; int pci; TYPE_1__ tlb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 int FUNC_1 (scalar_t__,struct snd_trident*) ;
 int FUNC_2 (struct snd_trident*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct snd_trident*) ;
 int FUNC_9 (struct snd_trident*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct snd_trident *VAR_5)
{
 FUNC_9(VAR_5);
 FUNC_8(VAR_5);

 if (VAR_5->device == VAR_3)
  FUNC_3(0x00, FUNC_0(VAR_5, VAR_0 + 3));
 else if (VAR_5->device == VAR_4) {
  FUNC_4(0, FUNC_0(VAR_5, VAR_2));
 }
 if (VAR_5->irq >= 0)
  FUNC_1(VAR_5->irq, VAR_5);
 if (VAR_5->tlb.buffer.area) {
  FUNC_4(0, FUNC_0(VAR_5, VAR_1));
  FUNC_10(VAR_5->tlb.memhdr);
  if (VAR_5->tlb.silent_page.area)
   FUNC_7(&VAR_5->tlb.silent_page);
  FUNC_11(VAR_5->tlb.shadow_entries);
  FUNC_7(&VAR_5->tlb.buffer);
 }
 FUNC_6(VAR_5->pci);
 FUNC_5(VAR_5->pci);
 FUNC_2(VAR_5);
 return 0;
}
