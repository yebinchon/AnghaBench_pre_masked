
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ops; } ;
struct snd_info_entry {int mode; TYPE_2__ c; int size; struct snd_emu10k1* private_data; void* content; } ;
struct snd_emu10k1 {int card; scalar_t__ audigy; TYPE_1__* card_capabilities; } ;
struct TYPE_3__ {scalar_t__ ca0151_chip; scalar_t__ emu10k2_chip; scalar_t__ emu_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,struct snd_info_entry**) ;
 int FUNC_1 (int ,char*,struct snd_emu10k1*,int ) ;
 int FUNC_2 (int ,char*,struct snd_emu10k1*,int ,int ) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

int FUNC_3(struct snd_emu10k1 *VAR_26)
{
 struct snd_info_entry *VAR_27;
 FUNC_1(VAR_26->card, "emu10k1", VAR_26, VAR_13);

 if (VAR_26->card_capabilities->emu10k2_chip)
  FUNC_1(VAR_26->card, "spdif-in", VAR_26,
         VAR_14);
 if (VAR_26->card_capabilities->ca0151_chip)
  FUNC_1(VAR_26->card, "capture-rates", VAR_26,
         VAR_12);

 FUNC_1(VAR_26->card, "voices", VAR_26,
        VAR_15);

 if (! FUNC_0(VAR_26->card, "fx8010_gpr", &VAR_27)) {
  VAR_27->content = VAR_4;
  VAR_27->private_data = VAR_26;
  VAR_27->mode = VAR_5 | 0444 ;
  VAR_27->size = VAR_26->audigy ? VAR_1 : VAR_7;
  VAR_27->c.ops = &VAR_11;
 }
 if (! FUNC_0(VAR_26->card, "fx8010_tram_data", &VAR_27)) {
  VAR_27->content = VAR_4;
  VAR_27->private_data = VAR_26;
  VAR_27->mode = VAR_5 | 0444 ;
  VAR_27->size = VAR_26->audigy ? VAR_3 : VAR_9 ;
  VAR_27->c.ops = &VAR_11;
 }
 if (! FUNC_0(VAR_26->card, "fx8010_tram_addr", &VAR_27)) {
  VAR_27->content = VAR_4;
  VAR_27->private_data = VAR_26;
  VAR_27->mode = VAR_5 | 0444 ;
  VAR_27->size = VAR_26->audigy ? VAR_2 : VAR_8 ;
  VAR_27->c.ops = &VAR_11;
 }
 if (! FUNC_0(VAR_26->card, "fx8010_code", &VAR_27)) {
  VAR_27->content = VAR_4;
  VAR_27->private_data = VAR_26;
  VAR_27->mode = VAR_5 | 0444 ;
  VAR_27->size = VAR_26->audigy ? VAR_0 : VAR_6;
  VAR_27->c.ops = &VAR_11;
 }
 FUNC_1(VAR_26->card, "fx8010_acode", VAR_26,
        VAR_10);
 return 0;
}
