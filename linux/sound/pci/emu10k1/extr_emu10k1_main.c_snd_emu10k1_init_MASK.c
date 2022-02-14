
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {unsigned int addr; } ;
struct TYPE_6__ {unsigned int addr; } ;
struct snd_emu10k1 {unsigned int* spdif_bits; int** i2c_capture_volume; unsigned int address_mode; int revision; int model; scalar_t__ port; scalar_t__ audigy; TYPE_4__* card_capabilities; TYPE_3__ silent_page; TYPE_2__ ptb_pages; TYPE_1__* card; } ;
struct TYPE_8__ {scalar_t__ i2c_adc; scalar_t__ emu_model; scalar_t__ spi_dac; scalar_t__ ca0108_chip; scalar_t__ ca0151_chip; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int **) ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
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
 unsigned int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 unsigned int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_1 (int ,char*) ;
 int ** VAR_52 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_5 (struct snd_emu10k1*,int,int ,int) ;
 int FUNC_6 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_7 (struct snd_emu10k1*,int ,int,unsigned int) ;
 int FUNC_8 (struct snd_emu10k1*,int *) ;
 int FUNC_9 (struct snd_emu10k1*,int) ;
 int ** VAR_53 ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct snd_emu10k1 *VAR_54, int VAR_55, int VAR_56)
{
 unsigned int VAR_57;
 int VAR_58;
 u32 VAR_59;


 FUNC_3(VAR_28 | VAR_29 |
  VAR_30, VAR_54->port + VAR_16);


 FUNC_7(VAR_54, VAR_37, 0, VAR_5);
 FUNC_7(VAR_54, VAR_36, 0, 0);
 FUNC_7(VAR_54, VAR_15, 0, VAR_5);
 FUNC_7(VAR_54, VAR_14, 0, 0);
 FUNC_7(VAR_54, VAR_4, 0, VAR_5);
 FUNC_7(VAR_54, VAR_3, 0, 0);


 FUNC_3(0, VAR_54->port + VAR_31);
 FUNC_7(VAR_54, VAR_13, 0, 0);
 FUNC_7(VAR_54, VAR_12, 0, 0);
 FUNC_7(VAR_54, VAR_42, 0, 0);
 FUNC_7(VAR_54, VAR_41, 0, 0);

 if (VAR_54->audigy) {

  FUNC_7(VAR_54, VAR_43, 0, VAR_44);

  FUNC_7(VAR_54, VAR_0, 0, VAR_2 |
          VAR_1);
 }


 for (VAR_58 = 0; VAR_58 < VAR_38; VAR_58++)
  FUNC_9(VAR_54, VAR_58);

 FUNC_7(VAR_54, VAR_45, 0, VAR_54->spdif_bits[0]);
 FUNC_7(VAR_54, VAR_46, 0, VAR_54->spdif_bits[1]);
 FUNC_7(VAR_54, VAR_47, 0, VAR_54->spdif_bits[2]);

 if (VAR_54->card_capabilities->ca0151_chip) {


  VAR_59 = FUNC_6(VAR_54, VAR_10, 0);
  VAR_59 &= 0xfffff1ff;
  VAR_59 |= (0x2<<9);
  FUNC_7(VAR_54, VAR_10, 0, VAR_59);


  FUNC_5(VAR_54, VAR_49, 0, 0x14);


  FUNC_5(VAR_54, VAR_48, 0, 0xFFFFFFFF);


  FUNC_3(0x0201, VAR_54->port + VAR_17);

  FUNC_5(VAR_54, VAR_11, 0, 0x78e4);
 }
 if (VAR_54->card_capabilities->ca0108_chip) {

  FUNC_1(VAR_54->card->dev, "Audigy2 value: Special config.\n");

  VAR_59 = FUNC_6(VAR_54, VAR_10, 0);
  VAR_59 &= 0xfffff1ff;
  VAR_59 |= (0x2<<9);
  FUNC_7(VAR_54, VAR_10, 0, VAR_59);


  FUNC_3(0x600000, VAR_54->port + 0x20);
  FUNC_3(0x14, VAR_54->port + 0x24);


  FUNC_3(0x7b0000, VAR_54->port + 0x20);
  FUNC_3(0xFF000000, VAR_54->port + 0x24);





  FUNC_3(0x7a0000, VAR_54->port + 0x20);
  FUNC_3(0xFF000000, VAR_54->port + 0x24);
  VAR_59 = FUNC_2(VAR_54->port + VAR_6) & ~0x8;
  FUNC_3(VAR_59, VAR_54->port + VAR_6);
 }
 if (VAR_54->card_capabilities->spi_dac) {
  int VAR_60, VAR_61;

  VAR_60 = FUNC_0(VAR_53);
  for (VAR_61 = 0; VAR_61 < VAR_60; VAR_61++)
   FUNC_8(VAR_54, VAR_53[VAR_61]);

  FUNC_5(VAR_54, 0x60, 0, 0x10);
  FUNC_3(0x76, VAR_54->port + VAR_6);
 }
 if (VAR_54->card_capabilities->i2c_adc) {
  int VAR_62, VAR_63;

  FUNC_5(VAR_54, VAR_39, 0, 0x2020205f);
  VAR_59 = FUNC_2(VAR_54->port + VAR_6);
  FUNC_3(VAR_59 | 0x4, VAR_54->port + VAR_6);
  VAR_59 = FUNC_2(VAR_54->port + VAR_6);
  VAR_62 = FUNC_0(VAR_52);
  for (VAR_63 = 0; VAR_63 < VAR_62; VAR_63++)
   FUNC_4(VAR_54, VAR_52[VAR_63][0], VAR_52[VAR_63][1]);
  for (VAR_63 = 0; VAR_63 < 4; VAR_63++) {
   VAR_54->i2c_capture_volume[VAR_63][0] = 0xcf;
   VAR_54->i2c_capture_volume[VAR_63][1] = 0xcf;
  }
 }


 FUNC_7(VAR_54, VAR_40, 0, VAR_54->ptb_pages.addr);
 FUNC_7(VAR_54, VAR_50, 0, 0);
 FUNC_7(VAR_54, VAR_51, 0, 4);

 VAR_57 = (VAR_54->silent_page.addr << VAR_54->address_mode) | (VAR_54->address_mode ? VAR_35 : VAR_34);
 for (VAR_58 = 0; VAR_58 < VAR_38; VAR_58++) {
  FUNC_7(VAR_54, VAR_32, VAR_58, VAR_57);
  FUNC_7(VAR_54, VAR_33, VAR_58, VAR_57);
 }

 if (VAR_54->card_capabilities->emu_model) {
  FUNC_3(VAR_22 |
   VAR_23 |
   VAR_20, VAR_54->port + VAR_16);







 } else if (VAR_54->audigy) {
  if (VAR_54->revision == 4)
   FUNC_3(VAR_20 |
        VAR_18 |
        VAR_19 |
        VAR_21 | VAR_27, VAR_54->port + VAR_16);
  else
   FUNC_3(VAR_21 | VAR_27, VAR_54->port + VAR_16);


 } else if (VAR_54->model == 0x20 ||
     VAR_54->model == 0xc400 ||
     (VAR_54->model == 0x21 && VAR_54->revision < 6))
  FUNC_3(VAR_29 | VAR_21, VAR_54->port + VAR_16);
 else

  FUNC_3(VAR_29 | VAR_21 | VAR_27, VAR_54->port + VAR_16);

 if (VAR_55) {
  if (VAR_54->card_capabilities->emu_model) {
   ;
  } else if (VAR_54->card_capabilities->i2c_adc) {
   ;
  } else if (VAR_54->audigy) {
   unsigned int VAR_64 = FUNC_2(VAR_54->port + VAR_6);
   FUNC_3(VAR_64 | VAR_9, VAR_54->port + VAR_6);
   FUNC_10(500);
   FUNC_3(VAR_64 | VAR_8 | VAR_9, VAR_54->port + VAR_6);
   FUNC_10(100);
   FUNC_3(VAR_64, VAR_54->port + VAR_6);
  } else {
   unsigned int VAR_65 = FUNC_2(VAR_54->port + VAR_16);
   FUNC_3(VAR_65 | VAR_26, VAR_54->port + VAR_16);
   FUNC_10(500);
   FUNC_3(VAR_65 | VAR_25 | VAR_26, VAR_54->port + VAR_16);
   FUNC_10(100);
   FUNC_3(VAR_65, VAR_54->port + VAR_16);
  }
 }

 if (VAR_54->card_capabilities->emu_model) {
  ;
 } else if (VAR_54->card_capabilities->i2c_adc) {
  ;
 } else if (VAR_54->audigy) {
  unsigned int VAR_66 = FUNC_2(VAR_54->port + VAR_6);
  FUNC_3(VAR_66 | VAR_7, VAR_54->port + VAR_6);
 }

 if (VAR_54->address_mode == 0) {

  FUNC_3(FUNC_2(VAR_54->port + VAR_16) | VAR_24, VAR_54->port + VAR_16);
 }

 return 0;
}
