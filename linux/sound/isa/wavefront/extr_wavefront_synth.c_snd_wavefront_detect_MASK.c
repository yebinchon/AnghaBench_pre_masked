
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int israw; int rom_samples_rdonly; unsigned char* fw_version; unsigned char* hw_version; scalar_t__ irq_cnt; scalar_t__ interrupts_are_midi; int debug; scalar_t__ has_fx; } ;
typedef TYPE_1__ snd_wavefront_t ;
struct TYPE_6__ {TYPE_1__ wavefront; } ;
typedef TYPE_2__ snd_wavefront_card_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,unsigned char*,unsigned char*) ;
 int VAR_3 ;

int
FUNC_2 (snd_wavefront_card_t *VAR_4)

{
 unsigned char VAR_5[4], VAR_6[4];
 snd_wavefront_t *VAR_7 = &VAR_4->wavefront;





 VAR_7->israw = 0;
 VAR_7->has_fx = 0;
 VAR_7->debug = VAR_2;
 VAR_7->interrupts_are_midi = 0;
 VAR_7->irq_cnt = 0;
 VAR_7->rom_samples_rdonly = 1;

 if (FUNC_1 (VAR_7, VAR_0, VAR_5, VAR_6) == 0) {

  VAR_7->fw_version[0] = VAR_5[0];
  VAR_7->fw_version[1] = VAR_5[1];

  FUNC_0 ("firmware %d.%d already loaded.\n",
       VAR_5[0], VAR_5[1]);



  if (FUNC_1 (VAR_7, VAR_1,
           VAR_5, VAR_6) == 0) {
   VAR_7->hw_version[0] = VAR_5[0];
   VAR_7->hw_version[1] = VAR_5[1];
  } else {
   FUNC_0 ("not raw, but no "
        "hardware version!\n");
   return -1;
  }

  if (!VAR_3) {
   return 0;
  } else {
   FUNC_0 ("reloading firmware as you requested.\n");
   VAR_7->israw = 1;
  }

 } else {

  VAR_7->israw = 1;
  FUNC_0 ("no response to firmware probe, assume raw.\n");

 }

 return 0;
}
