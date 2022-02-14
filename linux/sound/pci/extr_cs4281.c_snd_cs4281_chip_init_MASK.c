
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs4281_dma {unsigned int fifo_offset; int valFCR; scalar_t__ regFCR; scalar_t__ regFSIC; scalar_t__ regHDSR; scalar_t__ regDCR; scalar_t__ regDMR; scalar_t__ regDCC; scalar_t__ regDBC; scalar_t__ regDCA; scalar_t__ regDBA; } ;
struct cs4281 {int dual_codec; int src_left_play_slot; int src_right_play_slot; int src_left_rec_slot; int src_right_rec_slot; int irq; struct cs4281_dma* dma; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 unsigned int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_6 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 scalar_t__ VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 unsigned int VAR_54 ;
 int VAR_55 ;
 unsigned long VAR_56 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,char*) ;
 unsigned long VAR_57 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct cs4281*,scalar_t__) ;
 int FUNC_13 (struct cs4281*,scalar_t__,int) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (unsigned long,unsigned long) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct cs4281 *VAR_58)
{
 unsigned int VAR_59;
 unsigned long VAR_60;
 int VAR_61 = 2;


 VAR_59 = FUNC_12(VAR_58, VAR_21);
 if (VAR_59 & VAR_22)
  FUNC_13(VAR_58, VAR_21, VAR_59 & ~VAR_22);

      __retry:
 VAR_59 = FUNC_12(VAR_58, VAR_8);
 if (VAR_59 != VAR_9) {
  FUNC_13(VAR_58, VAR_8, VAR_9);
  VAR_59 = FUNC_12(VAR_58, VAR_8);
  if (VAR_59 != VAR_9) {
   FUNC_8(VAR_58->card->dev,
    "CFLR setup failed (0x%x)\n", VAR_59);
   return -VAR_55;
  }
 }




 FUNC_13(VAR_58, VAR_14, 0x4281);

 if ((VAR_59 = FUNC_12(VAR_58, VAR_34)) != (VAR_36 | VAR_35)) {
  FUNC_8(VAR_58->card->dev,
   "SERC1 AC'97 check failed (0x%x)\n", VAR_59);
  return -VAR_55;
 }
 if ((VAR_59 = FUNC_12(VAR_58, VAR_37)) != (VAR_39 | VAR_38)) {
  FUNC_8(VAR_58->card->dev,
   "SERC2 AC'97 check failed (0x%x)\n", VAR_59);
  return -VAR_55;
 }


 FUNC_13(VAR_58, VAR_47, VAR_52 | VAR_49 |
               VAR_53 | VAR_51 |
               VAR_48 | VAR_50);






 FUNC_13(VAR_58, VAR_10, 0);
 FUNC_13(VAR_58, VAR_40, 0);



 FUNC_13(VAR_58, VAR_0, 0);
 FUNC_16(50);





 FUNC_13(VAR_58, VAR_43, 0);
 FUNC_16(50);
 FUNC_13(VAR_58, VAR_43, VAR_45);
 FUNC_10(50);

 if (VAR_58->dual_codec)
  FUNC_13(VAR_58, VAR_43, VAR_45 | VAR_44);




 FUNC_13(VAR_58, VAR_40,
      (VAR_58->dual_codec ? FUNC_7(VAR_58->dual_codec) : FUNC_7(1)) |
      VAR_42 | VAR_41);




 FUNC_13(VAR_58, VAR_10, VAR_11);
 FUNC_10(50);
 FUNC_13(VAR_58, VAR_10, VAR_13 | VAR_11);




 VAR_60 = VAR_57 + VAR_56;
 do {




  if (FUNC_12(VAR_58, VAR_10) & VAR_12)
   goto __ok0;
  FUNC_11(1);
 } while (FUNC_15(VAR_60, VAR_57));

 FUNC_8(VAR_58->card->dev, "DLLRDY not seen\n");
 return -VAR_55;

      __ok0:






 FUNC_13(VAR_58, VAR_0, VAR_1);




 VAR_60 = VAR_57 + VAR_56;
 do {




  if (FUNC_12(VAR_58, VAR_5) & VAR_7)
   goto __ok1;
  FUNC_11(1);
 } while (FUNC_15(VAR_60, VAR_57));

 FUNC_8(VAR_58->card->dev,
  "never read codec ready from AC'97 (0x%x)\n",
  FUNC_12(VAR_58, VAR_5));
 return -VAR_55;

      __ok1:
 if (VAR_58->dual_codec) {
  VAR_60 = VAR_57 + VAR_56;
  do {
   if (FUNC_12(VAR_58, VAR_6) & VAR_7)
    goto __codec2_ok;
   FUNC_11(1);
  } while (FUNC_15(VAR_60, VAR_57));
  FUNC_9(VAR_58->card->dev,
    "secondary codec doesn't respond. disable it...\n");
  VAR_58->dual_codec = 0;
 __codec2_ok: ;
 }






 FUNC_13(VAR_58, VAR_0, VAR_2 | VAR_1);






 VAR_60 = VAR_57 + VAR_56;
 do {




                if ((FUNC_12(VAR_58, VAR_3) & (FUNC_0(3) | FUNC_0(4))) == (FUNC_0(3) | FUNC_0(4)))
                        goto __ok2;
  FUNC_11(1);
 } while (FUNC_15(VAR_60, VAR_57));

 if (--VAR_61 > 0)
  goto __retry;
 FUNC_8(VAR_58->card->dev, "never read ISV3 and ISV4 from AC'97\n");
 return -VAR_55;

      __ok2:





 FUNC_13(VAR_58, VAR_4, FUNC_1(3) | FUNC_1(4));




 for (VAR_59 = 0; VAR_59 < 4; VAR_59++) {
  struct cs4281_dma *VAR_62 = &VAR_58->dma[VAR_59];
  VAR_62->regDBA = VAR_15 + (VAR_59 * 0x10);
  VAR_62->regDCA = VAR_17 + (VAR_59 * 0x10);
  VAR_62->regDBC = VAR_16 + (VAR_59 * 0x10);
  VAR_62->regDCC = VAR_18 + (VAR_59 * 0x10);
  VAR_62->regDMR = VAR_20 + (VAR_59 * 8);
  VAR_62->regDCR = VAR_19 + (VAR_59 * 8);
  VAR_62->regHDSR = VAR_26 + (VAR_59 * 4);
  VAR_62->regFCR = VAR_23 + (VAR_59 * 4);
  VAR_62->regFSIC = VAR_25 + (VAR_59 * 4);
  VAR_62->fifo_offset = VAR_59 * VAR_54;
  FUNC_13(VAR_58, VAR_62->regFCR,
       FUNC_2(31) |
       FUNC_4(31) |
       FUNC_5(VAR_54) |
       FUNC_3(VAR_62->fifo_offset));
 }

 VAR_58->src_left_play_slot = 0;
 VAR_58->src_right_play_slot = 1;
 VAR_58->src_left_rec_slot = 10;
 VAR_58->src_right_rec_slot = 11;


 VAR_58->dma[0].valFCR = VAR_24 | FUNC_2(0) |
                FUNC_4(1) |
                   FUNC_5(VAR_54) |
                FUNC_3(VAR_58->dma[0].fifo_offset);
 FUNC_13(VAR_58, VAR_58->dma[0].regFCR, VAR_58->dma[0].valFCR);
 FUNC_13(VAR_58, VAR_46, (VAR_58->src_left_play_slot << 0) |
         (VAR_58->src_right_play_slot << 8) |
         (VAR_58->src_left_rec_slot << 16) |
         (VAR_58->src_right_rec_slot << 24));


 FUNC_13(VAR_58, VAR_32, 0);
 FUNC_13(VAR_58, VAR_33, 0);


 FUNC_13(VAR_58, VAR_27, VAR_28);

 FUNC_13(VAR_58, VAR_29, 0x7fffffff & ~(
     VAR_31 |
     VAR_30 |
     FUNC_6(0) |
     FUNC_6(1) |
     FUNC_6(2) |
     FUNC_6(3)));
 FUNC_14(VAR_58->irq);

 return 0;
}
