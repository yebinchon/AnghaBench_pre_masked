
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ area; } ;
struct TYPE_4__ {int firmware_work; } ;
struct snd_emu10k1 {scalar_t__ irq; int pci; TYPE_2__* card_capabilities; scalar_t__ port; int page_addr_table; int page_ptr_table; TYPE_3__ ptb_pages; TYPE_3__ silent_page; int memhdr; int dock_fw; int firmware; TYPE_1__ emu1010; } ;
struct TYPE_5__ {scalar_t__ emu_model; scalar_t__ ca0151_chip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct snd_emu10k1*) ;
 int FUNC_2 (struct snd_emu10k1*) ;
 int FUNC_3 (struct snd_emu10k1*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_9 (struct snd_emu10k1*) ;
 int FUNC_10 (struct snd_emu10k1*) ;
 int FUNC_11 (struct snd_emu10k1*,int ) ;
 int FUNC_12 (struct snd_emu10k1*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct snd_emu10k1 *VAR_2)
{
 if (VAR_2->port) {
  FUNC_11(VAR_2, 0);
  FUNC_9(VAR_2);
  FUNC_10(VAR_2);
 }
 if (VAR_2->card_capabilities->emu_model == VAR_1) {

  FUNC_8(VAR_2, VAR_0, 0);
 }
 FUNC_0(&VAR_2->emu1010.firmware_work);
 FUNC_6(VAR_2->firmware);
 FUNC_6(VAR_2->dock_fw);
 if (VAR_2->irq >= 0)
  FUNC_1(VAR_2->irq, VAR_2);
 FUNC_13(VAR_2->memhdr);
 if (VAR_2->silent_page.area)
  FUNC_7(&VAR_2->silent_page);
 if (VAR_2->ptb_pages.area)
  FUNC_7(&VAR_2->ptb_pages);
 FUNC_14(VAR_2->page_ptr_table);
 FUNC_14(VAR_2->page_addr_table);



 if (VAR_2->port)
  FUNC_5(VAR_2->pci);
 if (VAR_2->card_capabilities->ca0151_chip)
  FUNC_12(VAR_2);
 FUNC_4(VAR_2->pci);
 FUNC_3(VAR_2);
 return 0;
}
